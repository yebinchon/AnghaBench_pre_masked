
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_char ;
typedef TYPE_1__* gss_buffer_t ;
struct TYPE_3__ {int length; scalar_t__ value; } ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;

OM_uint32
FUNC_0(gss_buffer_t VAR_2,
     size_t VAR_3,
     size_t *VAR_4)
{
    u_char *VAR_5;
    size_t VAR_6;
    int VAR_7;

    VAR_5 = (u_char *)VAR_2->value + VAR_2->length - 1;
    VAR_6 = *VAR_5;

    if (VAR_6 > VAR_3)
 return VAR_0;

    for (VAR_7 = VAR_6; VAR_7 > 0 && *VAR_5 == VAR_6; VAR_7--, VAR_5--)
 ;
    if (VAR_7 != 0)
 return VAR_1;

    *VAR_4 = VAR_6;

    return 0;
}
