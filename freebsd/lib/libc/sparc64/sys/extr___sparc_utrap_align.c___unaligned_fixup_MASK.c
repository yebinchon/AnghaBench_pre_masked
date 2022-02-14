
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
typedef int u_char ;
struct utrapframe {scalar_t__ uf_pc; scalar_t__ uf_sfar; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_0 ;
 int FUNC_4 (struct utrapframe*,int ) ;
 int FUNC_5 (struct utrapframe*,int ,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 () ;

int
FUNC_9(struct utrapframe *VAR_1)
{
 u_char *VAR_2;
 u_long VAR_3;
 u_int VAR_4;
 int VAR_5;

 VAR_5 = 0;
 VAR_2 = (u_char *)VAR_1->uf_sfar;
 VAR_4 = *(u_int *)VAR_1->uf_pc;
 FUNC_8();
 switch (FUNC_2(VAR_4)) {
 case 128:
  switch (FUNC_0(VAR_4)) {
  case 134:
   VAR_3 = FUNC_6(VAR_2, 2);
   FUNC_5(VAR_1, FUNC_1(VAR_4), VAR_3);
   break;
  case 133:
   VAR_3 = FUNC_6(VAR_2, 4);
   FUNC_5(VAR_1, FUNC_1(VAR_4), VAR_3);
   break;
  case 132:
   VAR_3 = FUNC_6(VAR_2, 8);
   FUNC_5(VAR_1, FUNC_1(VAR_4), VAR_3);
   break;
  case 136:
   VAR_3 = FUNC_6(VAR_2, 2);
   FUNC_5(VAR_1, FUNC_1(VAR_4),
       FUNC_3(VAR_3, 16));
   break;
  case 135:
   VAR_3 = FUNC_6(VAR_2, 4);
   FUNC_5(VAR_1, FUNC_1(VAR_4),
       FUNC_3(VAR_3, 32));
   break;
  case 131:
   VAR_3 = FUNC_4(VAR_1, FUNC_1(VAR_4));
   FUNC_7(VAR_2, VAR_3, 2);
   break;
  case 130:
   VAR_3 = FUNC_4(VAR_1, FUNC_1(VAR_4));
   FUNC_7(VAR_2, VAR_3, 4);
   break;
  case 129:
   VAR_3 = FUNC_4(VAR_1, FUNC_1(VAR_4));
   FUNC_7(VAR_2, VAR_3, 8);
   break;
  default:
   VAR_5 = VAR_0;
   break;
  }
  break;
 default:
  VAR_5 = VAR_0;
  break;
 }
 return (VAR_5);
}
