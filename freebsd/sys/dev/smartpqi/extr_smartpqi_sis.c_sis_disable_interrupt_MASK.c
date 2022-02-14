
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int intr_type; } ;
typedef TYPE_1__ pqisrc_softstate_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;



 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(pqisrc_softstate_t *VAR_0)
{
 FUNC_1("IN");

 switch(VAR_0->intr_type) {
  case 130:
   FUNC_2(VAR_0,0);
   FUNC_3(VAR_0);
   break;
  case 129:
  case 128:
   FUNC_4(VAR_0);
   break;
  default:
   FUNC_0("Inerrupt mode none!\n");
   break;
 }

 FUNC_1("OUT");
}
