
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xlp_sec_command {void* ivlen; void* ciphermode; int cipheralg; TYPE_1__* enccrd; } ;
struct TYPE_2__ {int crd_alg; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;

int
FUNC_0(struct xlp_sec_command *VAR_9)
{
 switch(VAR_9->enccrd->crd_alg) {
 case 128:
  VAR_9->cipheralg = VAR_3;
  VAR_9->ciphermode = VAR_4;
  VAR_9->ivlen = VAR_8;
  break;
 case 131:
  VAR_9->cipheralg = VAR_0;
  VAR_9->ciphermode = VAR_4;
  VAR_9->ivlen = VAR_8;
  break;
 case 130:
  VAR_9->cipheralg = VAR_1;
  VAR_9->ciphermode = VAR_4;
  VAR_9->ivlen = VAR_6;
  break;
 case 129:
  VAR_9->cipheralg = VAR_2;
  VAR_9->ciphermode = VAR_5;
  VAR_9->ivlen = VAR_7;
  break;
 default:

  return (-1);
 }
 return (0);
}
