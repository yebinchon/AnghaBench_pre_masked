
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* UINT32 ;
struct TYPE_3__ {char* Value; void* Column; void* Line; } ;
typedef TYPE_1__ DT_TABLE_UNIT ;


 scalar_t__ FUNC_0 () ;

DT_TABLE_UNIT *
FUNC_1 (
    char *VAR_0,
    UINT32 VAR_1,
    UINT32 VAR_2)
{
    DT_TABLE_UNIT *VAR_3 = (DT_TABLE_UNIT *) FUNC_0 ();


    VAR_3->Value = VAR_0;
    VAR_3->Line = VAR_1;
    VAR_3->Column = VAR_2;
    return (VAR_3);
}
