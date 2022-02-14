
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct heim_base_mem {int (* dealloc ) (void*) ;} ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
    struct heim_base_mem *VAR_1 = (struct heim_base_mem *)FUNC_0(VAR_0);
    if (VAR_1->dealloc)
 VAR_1->dealloc(VAR_0);
}
