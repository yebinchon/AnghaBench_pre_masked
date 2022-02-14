
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t length; int data; } ;
typedef TYPE_1__ heim_octet_string ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int ,size_t) ;

int
FUNC_1 (unsigned char *VAR_1, size_t VAR_2,
        const heim_octet_string *VAR_3, size_t *VAR_4)
{
    if (VAR_2 < VAR_3->length)
 return VAR_0;
    VAR_1 -= VAR_3->length;
    FUNC_0 (VAR_1+1, VAR_3->data, VAR_3->length);
    *VAR_4 = VAR_3->length;
    return 0;
}
