
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t length; int * data; } ;
typedef TYPE_1__ heim_printable_string ;


 int VAR_0 ;
 int * FUNC_0 (size_t) ;
 int FUNC_1 (int *,unsigned char const*,size_t) ;

int
FUNC_2(const unsigned char *VAR_1, size_t VAR_2,
    heim_printable_string *VAR_3, size_t *VAR_4)
{
    VAR_3->length = VAR_2;
    VAR_3->data = FUNC_0(VAR_2 + 1);
    if (VAR_3->data == ((void*)0))
 return VAR_0;
    FUNC_1(VAR_3->data, VAR_1, VAR_2);
    ((char *)VAR_3->data)[VAR_2] = '\0';
    if(VAR_4) *VAR_4 = VAR_2;
    return 0;
}
