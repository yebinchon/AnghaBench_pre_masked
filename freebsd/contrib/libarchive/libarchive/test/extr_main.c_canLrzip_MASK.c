
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ) ;

int
FUNC_1(void)
{
 static int VAR_1 = 0, VAR_2 = 0;
 if (!VAR_1) {
  VAR_1 = 1;
  if (FUNC_0("lrzip -V %s", VAR_0) == 0)
   VAR_2 = 1;
 }
 return (VAR_2);
}
