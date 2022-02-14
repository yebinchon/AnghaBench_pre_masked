
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t length; void* data; } ;
typedef TYPE_1__ heim_octet_string ;


 int FUNC_0 (char const*,void**,size_t*) ;

int
FUNC_1(const char *VAR_0, heim_octet_string *VAR_1)
{
    size_t VAR_2;
    void *VAR_3;
    int VAR_4;

    VAR_4 = FUNC_0(VAR_0, &VAR_3, &VAR_2);

    VAR_1->data = VAR_3;
    VAR_1->length = VAR_2;

    return VAR_4;
}
