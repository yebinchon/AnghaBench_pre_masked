
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int ,int) ;

__attribute__((used)) static void
FUNC_1(u_char *VAR_2, int VAR_3)
{
 switch(VAR_3) {
  case 0:
   return;
  case 1:
   VAR_2[0] = VAR_0;
   return;
  default:
   VAR_2[0] = VAR_1;
   VAR_2[1] = VAR_3 - 2;
   FUNC_0(&VAR_2[2], 0, VAR_3 - 2);
   return;
 }
}
