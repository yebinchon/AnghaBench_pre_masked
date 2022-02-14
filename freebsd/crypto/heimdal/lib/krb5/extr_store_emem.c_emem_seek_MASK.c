
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_6__ {int (* seek ) (TYPE_1__*,int,int const) ;scalar_t__ data; } ;
typedef TYPE_1__ krb5_storage ;
struct TYPE_7__ {size_t size; int ptr; int base; size_t len; } ;
typedef TYPE_2__ emem_storage ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int,int const) ;
 int FUNC_1 (TYPE_1__*,int,int const) ;

__attribute__((used)) static off_t
FUNC_2(krb5_storage *VAR_2, off_t VAR_3, int VAR_4)
{
    emem_storage *VAR_5 = (emem_storage*)VAR_2->data;
    switch(VAR_4){
    case 128:
 if((size_t)VAR_3 > VAR_5->size)
     VAR_3 = VAR_5->size;
 if(VAR_3 < 0)
     VAR_3 = 0;
 VAR_5->ptr = VAR_5->base + VAR_3;
 if((size_t)VAR_3 > VAR_5->len)
     VAR_5->len = VAR_3;
 break;
    case 130:
 VAR_2->seek(VAR_2,VAR_5->ptr - VAR_5->base + VAR_3, 128);
 break;
    case 129:
 VAR_2->seek(VAR_2, VAR_5->len + VAR_3, 128);
 break;
    default:
 VAR_1 = VAR_0;
 return -1;
    }
    return VAR_5->ptr - VAR_5->base;
}
