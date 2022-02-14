
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct sshkey {int type; int ecdsa_nid; } ;
struct ssh {int dummy; } ;
struct TYPE_4__ {size_t num_host_key_files; } ;
struct TYPE_3__ {struct sshkey** host_keys; struct sshkey** host_pubkeys; struct sshkey** host_certificates; } ;



 int VAR_0 ;




 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static struct sshkey *
FUNC_0(int VAR_3, int VAR_4, int VAR_5, struct ssh *VAR_6)
{
 u_int VAR_7;
 struct sshkey *VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_1.num_host_key_files; VAR_7++) {
  switch (VAR_3) {
  case 129:
  case 132:
  case 131:
  case 130:
  case 128:
   VAR_8 = VAR_2.host_certificates[VAR_7];
   break;
  default:
   VAR_8 = VAR_2.host_keys[VAR_7];
   if (VAR_8 == ((void*)0) && !VAR_5)
    VAR_8 = VAR_2.host_pubkeys[VAR_7];
   break;
  }
  if (VAR_8 != ((void*)0) && VAR_8->type == VAR_3 &&
      (VAR_8->type != VAR_0 || VAR_8->ecdsa_nid == VAR_4))
   return VAR_5 ?
       VAR_2.host_keys[VAR_7] : VAR_8;
 }
 return ((void*)0);
}
