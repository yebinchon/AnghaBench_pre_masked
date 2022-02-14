
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* gss_buffer_t ;
struct TYPE_4__ {int length; int* value; } ;
typedef int OM_uint32 ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int*,int) ;

void
FUNC_4 (int VAR_0, gss_buffer_t VAR_1)
{
    uint32_t VAR_2, VAR_3;
    OM_uint32 VAR_4;

    VAR_2 = VAR_1->length;

    VAR_3 = FUNC_2(VAR_2);

    if (FUNC_3 (VAR_0, &VAR_3, 4) != 4)
 FUNC_0 (1, "write");
    if (FUNC_3 (VAR_0, VAR_1->value, VAR_2) != VAR_2)
 FUNC_0 (1, "write");

    FUNC_1 (&VAR_4, VAR_1);
}
