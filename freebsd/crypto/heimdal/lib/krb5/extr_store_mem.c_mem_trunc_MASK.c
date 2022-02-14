
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t off_t ;
struct TYPE_4__ {size_t size; size_t ptr; size_t base; } ;
typedef TYPE_1__ mem_storage ;
struct TYPE_5__ {scalar_t__ data; } ;
typedef TYPE_2__ krb5_storage ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(krb5_storage *VAR_1, off_t VAR_2)
{
    mem_storage *VAR_3 = (mem_storage*)VAR_1->data;
    if((size_t)VAR_2 > VAR_3->size)
 return VAR_0;
    VAR_3->size = VAR_2;
    if ((VAR_3->ptr - VAR_3->base) > VAR_2)
 VAR_3->ptr = VAR_3->base + VAR_2;
    return 0;
}
