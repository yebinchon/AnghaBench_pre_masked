
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zil_commit_waiter_t ;
typedef int lwb_t ;


 void* FUNC_0 (char*,int,int ,int *,int *,int *,int *,int *,int ) ;
 void* VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 void* VAR_3 ;

void
FUNC_1(void)
{
 VAR_0 = FUNC_0("zil_lwb_cache",
     sizeof (lwb_t), 0, VAR_1, VAR_2, ((void*)0), ((void*)0), ((void*)0), 0);

 VAR_3 = FUNC_0("zil_zcw_cache",
     sizeof (zil_commit_waiter_t), 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0);
}
