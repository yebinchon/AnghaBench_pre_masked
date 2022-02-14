
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct percpu_data {int ** ptrs; } ;


 struct percpu_data* FUNC_0 (void*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, int VAR_1)
{
 struct percpu_data *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_2->ptrs[VAR_1]);
 VAR_2->ptrs[VAR_1] = ((void*)0);
}
