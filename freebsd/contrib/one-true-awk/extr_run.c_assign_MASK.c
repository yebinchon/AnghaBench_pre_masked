
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int tval; double fval; } ;
typedef int Node ;
typedef TYPE_1__ Cell ;
typedef double Awkfloat ;



 int VAR_0 ;

 int FUNC_0 (char*,...) ;
 int VAR_1 ;


 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;

 double FUNC_1 (int ,char*) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 double FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 double FUNC_6 (double,int) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 double FUNC_9 (double,double*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_10 (double,double) ;
 int FUNC_11 (TYPE_1__*,double) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 int FUNC_13 (TYPE_1__*) ;

Cell *FUNC_14(Node **VAR_6, int VAR_7)
{
 Cell *VAR_8, *VAR_9;
 Awkfloat VAR_10, VAR_11;
 double VAR_12;

 VAR_9 = FUNC_2(VAR_6[1]);
 VAR_8 = FUNC_2(VAR_6[0]);
 if (VAR_7 == VAR_0) {
  if (VAR_8 == VAR_9 && !(VAR_8->tval & (VAR_1|VAR_3)) && VAR_8 != VAR_5)
   ;
  else if ((VAR_9->tval & (VAR_4|VAR_2)) == (VAR_4|VAR_2)) {
   FUNC_12(VAR_8, FUNC_5(VAR_9));
   VAR_8->fval = FUNC_4(VAR_9);
   VAR_8->tval |= VAR_2;
  }
  else if (FUNC_8(VAR_9))
   FUNC_12(VAR_8, FUNC_5(VAR_9));
  else if (FUNC_7(VAR_9))
   FUNC_11(VAR_8, FUNC_4(VAR_9));
  else
   FUNC_3(VAR_9, "read value of");
  FUNC_13(VAR_9);
  return(VAR_8);
 }
 VAR_10 = FUNC_4(VAR_8);
 VAR_11 = FUNC_4(VAR_9);
 switch (VAR_7) {
 case 133:
  VAR_10 += VAR_11;
  break;
 case 128:
  VAR_10 -= VAR_11;
  break;
 case 130:
  VAR_10 *= VAR_11;
  break;
 case 132:
  if (VAR_11 == 0)
   FUNC_0("division by zero in /=");
  VAR_10 /= VAR_11;
  break;
 case 131:
  if (VAR_11 == 0)
   FUNC_0("division by zero in %%=");
  FUNC_9(VAR_10/VAR_11, &VAR_12);
  VAR_10 = VAR_10 - VAR_11 * VAR_12;
  break;
 case 129:
  if (VAR_11 >= 0 && FUNC_9(VAR_11, &VAR_12) == 0.0)
   VAR_10 = FUNC_6(VAR_10, (int) VAR_11);
  else
   VAR_10 = FUNC_1(FUNC_10(VAR_10, VAR_11), "pow");
  break;
 default:
  FUNC_0("illegal assignment operator %d", VAR_7);
  break;
 }
 FUNC_13(VAR_9);
 FUNC_11(VAR_8, VAR_10);
 return(VAR_8);
}
