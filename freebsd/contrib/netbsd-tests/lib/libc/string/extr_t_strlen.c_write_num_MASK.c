
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static void
FUNC_1(int VAR_0)
{
 char VAR_1[20];
 int VAR_2;

 for (VAR_2 = sizeof VAR_1; --VAR_2 >= 0;) {
  VAR_1[VAR_2] = '0' + VAR_0 % 10;
  VAR_0 /= 10;
  if (VAR_0 == 0) {
   FUNC_0(2, VAR_1 + VAR_2, sizeof VAR_1 - VAR_2);
   return;
  }
 }
 FUNC_0(2, "overflow", 8);
}
