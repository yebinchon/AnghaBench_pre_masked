
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * FUNC_0 (char*,int,int ,int ,int *) ;

int FUNC_1(void)
{
 VAR_2 = FUNC_0("o2dlm_lock",
        sizeof(struct dlm_lock),
        0, VAR_1, ((void*)0));
 if (VAR_2 == ((void*)0))
  return -VAR_0;
 return 0;
}
