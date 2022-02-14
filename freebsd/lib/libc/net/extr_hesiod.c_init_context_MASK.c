
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_1()
{
 if (!VAR_4) {
  VAR_4 = 1;
  if (FUNC_0(&VAR_2) < 0) {
   VAR_3 = VAR_0;
   return -1;
  }
  VAR_3 = VAR_1;
 }
 return 0;
}
