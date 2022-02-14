
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_4__ {scalar_t__ data; } ;
typedef TYPE_1__ krb5_storage ;
struct TYPE_5__ {unsigned char* base; size_t size; unsigned char* ptr; int len; } ;
typedef TYPE_2__ emem_storage ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (char*,int ,int) ;
 void* FUNC_2 (unsigned char*,int) ;

__attribute__((used)) static int
FUNC_3(krb5_storage *VAR_1, off_t VAR_2)
{
    emem_storage *VAR_3 = (emem_storage*)VAR_1->data;




    if (VAR_2 == 0) {
 FUNC_0(VAR_3->base);
 VAR_3->size = 0;
 VAR_3->base = ((void*)0);
 VAR_3->ptr = ((void*)0);
    } else if ((size_t)VAR_2 > VAR_3->size || (VAR_3->size / 2) > (size_t)VAR_2) {
 void *VAR_4;
 size_t VAR_5;
 VAR_5 = VAR_3->ptr - VAR_3->base;
 VAR_4 = FUNC_2(VAR_3->base, VAR_2);
 if(VAR_4 == ((void*)0))
     return VAR_0;
 if ((size_t)VAR_2 > VAR_3->size)
     FUNC_1((char *)VAR_4 + VAR_3->size, 0, VAR_2 - VAR_3->size);
 VAR_3->size = VAR_2;
 VAR_3->base = VAR_4;
 VAR_3->ptr = (unsigned char *)VAR_4 + VAR_5;
    }
    VAR_3->len = VAR_2;
    if ((VAR_3->ptr - VAR_3->base) > VAR_2)
 VAR_3->ptr = VAR_3->base + VAR_2;
    return 0;
}
