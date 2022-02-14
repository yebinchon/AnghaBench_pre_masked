
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_2(void)
{
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_0,
  &VAR_2, 1);
 if (VAR_3) {
  FUNC_0("Failed to register netlink interface\n");
  return VAR_3;
 }

 VAR_1 = 1;
 return 0;
}
