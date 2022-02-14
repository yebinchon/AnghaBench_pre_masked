
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(void)
{
 static bool VAR_1 = 0;

 if (!VAR_1) {
  if (FUNC_0(VAR_0) < 0)
   return -1;
  VAR_1 = 1;
 }

 return 0;
}
