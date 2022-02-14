
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_5__ {int (* seek ) (TYPE_1__*,size_t,int ) ;scalar_t__ data; } ;
typedef TYPE_1__ krb5_storage ;
struct TYPE_6__ {unsigned char* base; int size; unsigned char* ptr; } ;
typedef TYPE_2__ emem_storage ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,void const*,size_t) ;
 void* FUNC_1 (unsigned char*,size_t) ;
 int FUNC_2 (TYPE_1__*,size_t,int ) ;

__attribute__((used)) static ssize_t
FUNC_3(krb5_storage *VAR_1, const void *VAR_2, size_t VAR_3)
{
    emem_storage *VAR_4 = (emem_storage*)VAR_1->data;
    if(VAR_3 > (size_t)(VAR_4->base + VAR_4->size - VAR_4->ptr)){
 void *VAR_5;
 size_t VAR_6, VAR_7;
 VAR_7 = VAR_4->ptr - VAR_4->base;
 VAR_6 = VAR_7 + VAR_3;
 if (VAR_6 < 4096)
     VAR_6 *= 2;
 VAR_5 = FUNC_1(VAR_4->base, VAR_6);
 if(VAR_5 == ((void*)0))
     return -1;
 VAR_4->size = VAR_6;
 VAR_4->base = VAR_5;
 VAR_4->ptr = (unsigned char*)VAR_5 + VAR_7;
    }
    FUNC_0(VAR_4->ptr, VAR_2, VAR_3);
    VAR_1->seek(VAR_1, VAR_3, VAR_0);
    return VAR_3;
}
