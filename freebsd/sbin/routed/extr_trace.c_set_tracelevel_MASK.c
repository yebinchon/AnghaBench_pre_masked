
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(void)
{
 if (VAR_2 == VAR_5)
  return;




 if (VAR_2 > VAR_5 && VAR_0 == ((void*)0)) {
  if (VAR_3[0] != '\0') {
   FUNC_0(VAR_3,VAR_4,0);
  } else if (VAR_1[0] != '\0') {
    FUNC_0(VAR_1,VAR_4,0);
  } else {
   VAR_2 = 0;
   return;
  }
 } else {
  FUNC_1(VAR_4, 0);
 }
}
