
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;


struct TYPE_17__ {int tval; scalar_t__ fval; } ;
struct TYPE_16__ {int tval; } ;
struct TYPE_15__ {TYPE_3__* retval; } ;
typedef int Node ;
typedef TYPE_1__ Cell ;





 int FUNC_0 (char*,int) ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int *) ;
 TYPE_13__* VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 TYPE_1__* VAR_7 ;
 TYPE_1__* VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_3__*,scalar_t__) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;

Cell *FUNC_9(Node **VAR_10, int VAR_11)
{
 Cell *VAR_12;

 switch (VAR_11) {
 case 131:
  if (VAR_10[0] != ((void*)0)) {
   VAR_12 = FUNC_1(VAR_10[0]);
   VAR_3 = (int) FUNC_2(VAR_12);
   FUNC_8(VAR_12);
  }
  FUNC_4(VAR_2, 1);
 case 128:
  if (VAR_10[0] != ((void*)0)) {
   VAR_12 = FUNC_1(VAR_10[0]);
   if ((VAR_12->tval & (VAR_1|VAR_0)) == (VAR_1|VAR_0)) {
    FUNC_7(VAR_4->retval, FUNC_3(VAR_12));
    VAR_4->retval->fval = FUNC_2(VAR_12);
    VAR_4->retval->tval |= VAR_0;
   }
   else if (VAR_12->tval & VAR_1)
    FUNC_7(VAR_4->retval, FUNC_3(VAR_12));
   else if (VAR_12->tval & VAR_0)
    FUNC_6(VAR_4->retval, FUNC_2(VAR_12));
   else
    FUNC_0("bad type variable %d", VAR_12->tval);
   FUNC_8(VAR_12);
  }
  return(VAR_9);
 case 130:
  return(VAR_7);
 case 129:
  FUNC_5();
  return(VAR_8);
 case 133:
  return(VAR_5);
 case 132:
  return(VAR_6);
 default:
  FUNC_0("illegal jump type %d", VAR_11);
 }
 return 0;
}
