
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sshkey {TYPE_1__* cert; } ;
struct TYPE_7__ {int fingerprint_hash; } ;
struct TYPE_6__ {char* auth_method_info; struct sshkey* auth_method_key; } ;
struct TYPE_5__ {struct sshkey const* signature_key; scalar_t__ serial; int key_id; } ;
typedef TYPE_2__ Authctxt ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_3__ VAR_1 ;
 char* FUNC_1 (struct sshkey const*,int ,int ) ;
 scalar_t__ FUNC_2 (struct sshkey const*) ;
 int FUNC_3 (struct sshkey const*) ;
 int FUNC_4 (char**,char*,int ,char*,...) ;

__attribute__((used)) static char *
FUNC_5(Authctxt *VAR_2)
{
 const struct sshkey *VAR_3 = VAR_2->auth_method_key;
 const char *VAR_4 = VAR_2->auth_method_info;
 char *VAR_5, *VAR_6 = ((void*)0);

 if (VAR_3 == ((void*)0))
  return ((void*)0);

 if (FUNC_2(VAR_3)) {
  VAR_5 = FUNC_1(VAR_3->cert->signature_key,
      VAR_1.fingerprint_hash, VAR_0);
  FUNC_4(&VAR_6, "%s ID %s (serial %llu) CA %s %s%s%s",
      FUNC_3(VAR_3), VAR_3->cert->key_id,
      (unsigned long long)VAR_3->cert->serial,
      FUNC_3(VAR_3->cert->signature_key),
      VAR_5 == ((void*)0) ? "(null)" : VAR_5,
      VAR_4 == ((void*)0) ? "" : ", ",
      VAR_4 == ((void*)0) ? "" : VAR_4);
  FUNC_0(VAR_5);
 } else {
  VAR_5 = FUNC_1(VAR_3, VAR_1.fingerprint_hash,
      VAR_0);
  FUNC_4(&VAR_6, "%s %s%s%s", FUNC_3(VAR_3),
      VAR_5 == ((void*)0) ? "(null)" : VAR_5,
      VAR_4 == ((void*)0) ? "" : ", ",
      VAR_4 == ((void*)0) ? "" : VAR_4);
  FUNC_0(VAR_5);
 }
 return VAR_6;
}
