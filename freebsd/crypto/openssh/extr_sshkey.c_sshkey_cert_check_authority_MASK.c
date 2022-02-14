
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int64_t ;
typedef size_t u_int ;
typedef scalar_t__ time_t ;
struct sshkey {TYPE_1__* cert; } ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ valid_after; scalar_t__ valid_before; scalar_t__ nprincipals; int * principals; } ;


 scalar_t__ SSH2_CERT_TYPE_HOST ;
 scalar_t__ SSH2_CERT_TYPE_USER ;
 int SSH_ERR_KEY_CERT_INVALID ;
 scalar_t__ strcmp (char const*,int ) ;
 scalar_t__ time (int *) ;

int
sshkey_cert_check_authority(const struct sshkey *k,
    int want_host, int require_principal,
    const char *name, const char **reason)
{
 u_int i, principal_matches;
 time_t now = time(((void*)0));

 if (reason != ((void*)0))
  *reason = ((void*)0);

 if (want_host) {
  if (k->cert->type != SSH2_CERT_TYPE_HOST) {
   *reason = "Certificate invalid: not a host certificate";
   return SSH_ERR_KEY_CERT_INVALID;
  }
 } else {
  if (k->cert->type != SSH2_CERT_TYPE_USER) {
   *reason = "Certificate invalid: not a user certificate";
   return SSH_ERR_KEY_CERT_INVALID;
  }
 }
 if (now < 0) {

  *reason = "Certificate invalid: not yet valid";
  return SSH_ERR_KEY_CERT_INVALID;
 }
 if ((u_int64_t)now < k->cert->valid_after) {
  *reason = "Certificate invalid: not yet valid";
  return SSH_ERR_KEY_CERT_INVALID;
 }
 if ((u_int64_t)now >= k->cert->valid_before) {
  *reason = "Certificate invalid: expired";
  return SSH_ERR_KEY_CERT_INVALID;
 }
 if (k->cert->nprincipals == 0) {
  if (require_principal) {
   *reason = "Certificate lacks principal list";
   return SSH_ERR_KEY_CERT_INVALID;
  }
 } else if (name != ((void*)0)) {
  principal_matches = 0;
  for (i = 0; i < k->cert->nprincipals; i++) {
   if (strcmp(name, k->cert->principals[i]) == 0) {
    principal_matches = 1;
    break;
   }
  }
  if (!principal_matches) {
   *reason = "Certificate invalid: name is not a listed "
       "principal";
   return SSH_ERR_KEY_CERT_INVALID;
  }
 }
 return 0;
}
