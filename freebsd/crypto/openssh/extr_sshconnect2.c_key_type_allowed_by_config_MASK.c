
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sshkey {int type; } ;
struct TYPE_2__ {int pubkey_key_types; } ;




 int FUNC_0 (char*,int ,int ) ;
 TYPE_1__ VAR_0 ;
 char* FUNC_1 (struct sshkey*) ;

__attribute__((used)) static int
FUNC_2(struct sshkey *VAR_1)
{
 if (FUNC_0(FUNC_1(VAR_1),
     VAR_0.pubkey_key_types, 0) == 1)
  return 1;


 switch (VAR_1->type) {
 case 129:
  if (FUNC_0("rsa-sha2-512",
      VAR_0.pubkey_key_types, 0) == 1)
   return 1;
  if (FUNC_0("rsa-sha2-256",
      VAR_0.pubkey_key_types, 0) == 1)
   return 1;
  break;
 case 128:
  if (FUNC_0("rsa-sha2-512-cert-v01@openssh.com",
      VAR_0.pubkey_key_types, 0) == 1)
   return 1;
  if (FUNC_0("rsa-sha2-256-cert-v01@openssh.com",
      VAR_0.pubkey_key_types, 0) == 1)
   return 1;
  break;
 }
 return 0;
}
