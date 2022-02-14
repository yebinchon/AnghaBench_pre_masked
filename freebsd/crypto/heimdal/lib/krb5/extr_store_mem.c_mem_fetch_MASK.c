
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t ssize_t ;
struct TYPE_5__ {size_t base; size_t size; size_t ptr; } ;
typedef TYPE_1__ mem_storage ;
struct TYPE_6__ {int (* seek ) (TYPE_2__*,size_t,int ) ;scalar_t__ data; } ;
typedef TYPE_2__ krb5_storage ;


 int VAR_0 ;
 int FUNC_0 (void*,size_t,size_t) ;
 int FUNC_1 (TYPE_2__*,size_t,int ) ;

__attribute__((used)) static ssize_t
FUNC_2(krb5_storage *VAR_1, void *VAR_2, size_t VAR_3)
{
    mem_storage *VAR_4 = (mem_storage*)VAR_1->data;
    if(VAR_3 > (size_t)(VAR_4->base + VAR_4->size - VAR_4->ptr))
 VAR_3 = VAR_4->base + VAR_4->size - VAR_4->ptr;
    FUNC_0(VAR_2, VAR_4->ptr, VAR_3);
    VAR_1->seek(VAR_1, VAR_3, VAR_0);
    return VAR_3;
}
