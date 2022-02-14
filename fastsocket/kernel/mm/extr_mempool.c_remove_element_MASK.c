
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t curr_nr; void** elements; } ;
typedef TYPE_1__ mempool_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void *FUNC_1(mempool_t *VAR_0)
{
 FUNC_0(VAR_0->curr_nr <= 0);
 return VAR_0->elements[--VAR_0->curr_nr];
}
