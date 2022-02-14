
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ time_t ;
struct sshauthopt {scalar_t__ valid_before; int * required_from_host_cert; int * required_from_host_keys; scalar_t__ cert_authority; int * cert_principals; } ;
struct ssh {int dummy; } ;
struct passwd {int pw_name; } ;
typedef int buf ;
struct TYPE_2__ {int use_dns; } ;


 int FUNC_0 (char const*,int *) ;
 int FUNC_1 (char*,char const*,...) ;
 char* FUNC_2 (struct ssh*,int ) ;
 int FUNC_3 (char const*,struct sshauthopt*,int) ;
 int FUNC_4 (char*,char const*,...) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (scalar_t__,char*,int) ;
 int FUNC_7 (char*,char const*,int ,char const*,...) ;
 int FUNC_8 (char const*,char const*,int *) ;
 TYPE_1__ VAR_0 ;
 char* FUNC_9 (struct ssh*) ;
 scalar_t__ FUNC_10 (int *) ;

int
FUNC_11(struct ssh *VAR_1, struct passwd *VAR_2,
    struct sshauthopt *VAR_3, int VAR_4, const char *VAR_5)
{
 const char *VAR_6 = FUNC_9(VAR_1);
 const char *VAR_7 = FUNC_2(VAR_1,
     VAR_0.use_dns);
 time_t VAR_8 = FUNC_10(((void*)0));
 char VAR_9[64];





 if (VAR_3->valid_before && VAR_8 > 0 &&
     VAR_3->valid_before < (uint64_t)VAR_8) {
  FUNC_6(VAR_3->valid_before, VAR_9, sizeof(VAR_9));
  FUNC_4("%s: entry expired at %s", VAR_5, VAR_9);
  FUNC_1("%s: entry expired at %s", VAR_5, VAR_9);
  return -1;
 }

 if (VAR_3->cert_principals != ((void*)0) && !VAR_3->cert_authority) {
  FUNC_4("%s: principals on non-CA key", VAR_5);
  FUNC_1("%s: principals on non-CA key", VAR_5);

  return -1;
 }

 if (!VAR_4 && VAR_3->cert_authority) {
  FUNC_4("%s: cert-authority flag invalid here", VAR_5);
  FUNC_1("%s: cert-authority flag invalid here", VAR_5);

  return -1;
 }


 if (VAR_3->required_from_host_keys != ((void*)0)) {
  switch (FUNC_8(VAR_7, VAR_6,
      VAR_3->required_from_host_keys )) {
  case 1:

   break;
  case -1:
  default:
   FUNC_4("%s: invalid from criteria", VAR_5);
   FUNC_1("%s: invalid from criteria", VAR_5);

  case 0:
   FUNC_7("%s: Authentication tried for %.100s with "
       "correct key but not from a permitted "
       "host (host=%.200s, ip=%.200s, required=%.200s).",
       VAR_5, VAR_2->pw_name, VAR_7, VAR_6,
       VAR_3->required_from_host_keys);
   FUNC_1("%s: Your host '%.200s' is not "
       "permitted to use this key for login.",
       VAR_5, VAR_7);

   return -1;
  }
 }

 if (VAR_3->required_from_host_cert != ((void*)0)) {
  switch (FUNC_0(VAR_6,
      VAR_3->required_from_host_cert)) {
  case 1:

   break;
  case -1:
  default:

   FUNC_5("%s: Certificate source-address invalid",
       VAR_5);

  case 0:
   FUNC_7("%s: Authentication tried for %.100s with valid "
       "certificate but not from a permitted source "
       "address (%.200s).", VAR_5, VAR_2->pw_name, VAR_6);
   FUNC_1("%s: Your address '%.200s' is not "
       "permitted to use this certificate for login.",
       VAR_5, VAR_6);
   return -1;
  }
 }






 FUNC_3(VAR_5, VAR_3, 1);

 return 0;
}
