
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow {int dummy; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int * FUNC_0 (char*,int,int ,int ,int *) ;

int FUNC_1(void)
{
 VAR_1 = FUNC_0("sw_flow", sizeof(struct sw_flow), 0,
     0, ((void*)0));
 if (VAR_1 == ((void*)0))
  return -VAR_0;

 return 0;
}
