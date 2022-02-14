
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* gss_buffer_t ;
struct TYPE_3__ {int length; int* value; } ;


 int* FUNC_0 (int) ;
 int FUNC_1 (int,int*,int) ;
 int FUNC_2 (int) ;

void
FUNC_3 (int VAR_0, gss_buffer_t VAR_1)
{
    uint32_t VAR_2, VAR_3;

    FUNC_1 (VAR_0, &VAR_3, 4);
    VAR_2 = FUNC_2(VAR_3);
    VAR_1->length = VAR_2;
    VAR_1->value = FUNC_0(VAR_2);
    FUNC_1 (VAR_0, VAR_1->value, VAR_2);
}
