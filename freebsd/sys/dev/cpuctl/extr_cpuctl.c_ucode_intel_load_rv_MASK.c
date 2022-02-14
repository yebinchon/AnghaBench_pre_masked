
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucode_update_data {scalar_t__ cpu; int ptr; int ret; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int *,int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 struct ucode_update_data *VAR_2;

 VAR_2 = VAR_1;
 if (FUNC_0(VAR_0) == VAR_2->cpu)
  VAR_2->ret = FUNC_1(VAR_2->ptr, 1, ((void*)0), ((void*)0));
}
