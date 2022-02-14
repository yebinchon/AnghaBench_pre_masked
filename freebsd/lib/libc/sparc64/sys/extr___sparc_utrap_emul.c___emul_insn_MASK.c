
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
struct utrapframe {scalar_t__ uf_pc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;



 int FUNC_4 (int ) ;


 int VAR_0 ;
 scalar_t__ FUNC_5 (struct utrapframe*,int ) ;
 int FUNC_6 (struct utrapframe*,int ) ;
 int FUNC_7 (struct utrapframe*,int ,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 () ;

int
FUNC_11(struct utrapframe *VAR_1)
{
 u_long VAR_2, VAR_3;
 u_long *VAR_4;
 u_int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_6 = 0;
 VAR_5 = *(u_int *)VAR_1->uf_pc;
 FUNC_10();
 switch (FUNC_3(VAR_5)) {
 case 128:
  switch (FUNC_0(VAR_5)) {
  case 132:
   if (FUNC_2(VAR_5) != 0) {
    VAR_6 = VAR_0;
    break;
   }
   VAR_2 = FUNC_6(VAR_1, VAR_5);
   for (VAR_8 = 0; VAR_8 < 64; VAR_8++)
    VAR_3 += (VAR_2 >> VAR_8) & 1;
   FUNC_7(VAR_1, FUNC_1(VAR_5), VAR_3);
   break;
  default:
   VAR_6 = VAR_0;
   break;
  }
  break;
 case 129:
  switch (FUNC_0(VAR_5)) {
  case 131:
   VAR_7 = FUNC_4(FUNC_1(VAR_5));
   VAR_4 = (u_long *)FUNC_5(VAR_1, VAR_5);
   FUNC_9(VAR_7, VAR_4[0]);
   FUNC_9(VAR_7 + 2, VAR_4[1]);
   break;
  case 130:
   VAR_7 = FUNC_4(FUNC_1(VAR_5));
   VAR_4 = (u_long *)FUNC_5(VAR_1, VAR_5);
   VAR_4[0] = FUNC_8(VAR_7);
   VAR_4[1] = FUNC_8(VAR_7 + 2);
   break;
  default:
   VAR_6 = VAR_0;
   break;
  }
  break;
 default:
  VAR_6 = VAR_0;
  break;
 }
 return (VAR_6);
}
