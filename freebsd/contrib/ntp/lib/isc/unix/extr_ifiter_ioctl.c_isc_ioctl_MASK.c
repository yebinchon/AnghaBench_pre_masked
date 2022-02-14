
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int,char*) ;

int
FUNC_1(int VAR_2, int VAR_3, char *VAR_4) {
 int VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
  if ((VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4)) < 0) {
   if (VAR_1 == VAR_0)
    continue;
  }
  break;
 }
 return (VAR_6);
}
