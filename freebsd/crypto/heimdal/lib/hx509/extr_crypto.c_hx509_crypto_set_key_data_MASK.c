
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* hx509_crypto ;
struct TYPE_4__ {size_t length; int * data; } ;
struct TYPE_5__ {TYPE_1__ key; int c; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (int *,void const*,size_t) ;

int
FUNC_4(hx509_crypto VAR_2, const void *VAR_3, size_t VAR_4)
{
    if (FUNC_0(VAR_2->c) > (int)VAR_4)
 return VAR_1;

    if (VAR_2->key.data) {
 FUNC_1(VAR_2->key.data);
 VAR_2->key.data = ((void*)0);
 VAR_2->key.length = 0;
    }
    VAR_2->key.data = FUNC_2(VAR_4);
    if (VAR_2->key.data == ((void*)0))
 return VAR_0;
    FUNC_3(VAR_2->key.data, VAR_3, VAR_4);
    VAR_2->key.length = VAR_4;

    return 0;
}
