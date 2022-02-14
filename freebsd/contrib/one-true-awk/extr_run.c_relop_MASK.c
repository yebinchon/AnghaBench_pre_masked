
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int tval; scalar_t__ fval; } ;
typedef int Node ;
typedef TYPE_1__ Cell ;
typedef scalar_t__ Awkfloat ;



 int FUNC_0 (char*,int) ;
 TYPE_1__* VAR_0 ;





 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;

Cell *FUNC_5(Node **VAR_3, int VAR_4)
{
 int VAR_5;
 Cell *VAR_6, *VAR_7;
 Awkfloat VAR_8;

 VAR_6 = FUNC_1(VAR_3[0]);
 VAR_7 = FUNC_1(VAR_3[1]);
 if (VAR_6->tval&VAR_1 && VAR_7->tval&VAR_1) {
  VAR_8 = VAR_6->fval - VAR_7->fval;
  VAR_5 = VAR_8<0? -1: (VAR_8>0? 1: 0);
 } else {
  VAR_5 = FUNC_3(FUNC_2(VAR_6), FUNC_2(VAR_7));
 }
 FUNC_4(VAR_6);
 FUNC_4(VAR_7);
 switch (VAR_4) {
 case 129: if (VAR_5<0) return(VAR_2);
   else return(VAR_0);
 case 130: if (VAR_5<=0) return(VAR_2);
   else return(VAR_0);
 case 128: if (VAR_5!=0) return(VAR_2);
   else return(VAR_0);
 case 133: if (VAR_5 == 0) return(VAR_2);
   else return(VAR_0);
 case 132: if (VAR_5>=0) return(VAR_2);
   else return(VAR_0);
 case 131: if (VAR_5>0) return(VAR_2);
   else return(VAR_0);
 default:
  FUNC_0("unknown relational operator %d", VAR_4);
 }
 return 0;
}
