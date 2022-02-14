
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xlp_sec_command {void* hashmode; void* hashalg; TYPE_1__* maccrd; } ;
struct TYPE_2__ {int crd_alg; } ;






 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;

int
FUNC_0(struct xlp_sec_command *VAR_3)
{
 switch(VAR_3->maccrd->crd_alg) {
 case 131:
  VAR_3->hashalg = VAR_0;
  VAR_3->hashmode = VAR_1;
  break;
 case 129:
  VAR_3->hashalg = VAR_2;
  VAR_3->hashmode = VAR_1;
  break;
 case 130:
  VAR_3->hashalg = VAR_0;
  VAR_3->hashmode = VAR_1;
  break;
 case 128:
  VAR_3->hashalg = VAR_2;
  VAR_3->hashmode = VAR_1;
  break;
 default:

  return (-1);
 }
 return (0);
}
