
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int base; int (* free_func ) (int ) ;} ;
typedef TYPE_1__ apr_bucket_heap ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
    apr_bucket_heap *VAR_1 = VAR_0;

    if (FUNC_1(VAR_1)) {
        (*VAR_1->free_func)(VAR_1->base);
        FUNC_0(VAR_1);
    }
}
