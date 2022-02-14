
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Node ;
typedef int Cell ;
typedef double Awkfloat ;




 int FUNC_0 (char*,...) ;






 double FUNC_1 (int ,char*) ;
 int * FUNC_2 (int *) ;
 double FUNC_3 (int *) ;
 int * FUNC_4 () ;
 double FUNC_5 (double,int) ;
 double FUNC_6 (double,double*) ;
 int FUNC_7 (double,double) ;
 int FUNC_8 (int *,double) ;
 int FUNC_9 (int *) ;

Cell *FUNC_10(Node **VAR_0, int VAR_1)
{
 Awkfloat VAR_2, VAR_3 = 0;
 double VAR_4;
 Cell *VAR_5, *VAR_6, *VAR_7;

 VAR_5 = FUNC_2(VAR_0[0]);
 VAR_2 = FUNC_3(VAR_5);
 FUNC_9(VAR_5);
 if (VAR_1 != 129 && VAR_1 != 128) {
  VAR_6 = FUNC_2(VAR_0[1]);
  VAR_3 = FUNC_3(VAR_6);
  FUNC_9(VAR_6);
 }
 VAR_7 = FUNC_4();
 switch (VAR_1) {
 case 135:
  VAR_2 += VAR_3;
  break;
 case 133:
  VAR_2 -= VAR_3;
  break;
 case 131:
  VAR_2 *= VAR_3;
  break;
 case 134:
  if (VAR_3 == 0)
   FUNC_0("division by zero");
  VAR_2 /= VAR_3;
  break;
 case 132:
  if (VAR_3 == 0)
   FUNC_0("division by zero in mod");
  FUNC_6(VAR_2/VAR_3, &VAR_4);
  VAR_2 = VAR_2 - VAR_3 * VAR_4;
  break;
 case 129:
  VAR_2 = -VAR_2;
  break;
    case 128:
  break;
 case 130:
  if (VAR_3 >= 0 && FUNC_6(VAR_3, &VAR_4) == 0.0)
   VAR_2 = FUNC_5(VAR_2, (int) VAR_3);
  else
   VAR_2 = FUNC_1(FUNC_7(VAR_2, VAR_3), "pow");
  break;
 default:
  FUNC_0("illegal arithmetic operator %d", VAR_1);
 }
 FUNC_8(VAR_7, VAR_2);
 return(VAR_7);
}
