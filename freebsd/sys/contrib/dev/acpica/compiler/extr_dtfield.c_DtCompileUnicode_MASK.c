
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT8 ;
typedef size_t UINT32 ;
typedef scalar_t__ UINT16 ;
struct TYPE_3__ {char* Value; } ;
typedef TYPE_1__ DT_FIELD ;


 size_t FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1 (
    UINT8 *VAR_0,
    DT_FIELD *VAR_1,
    UINT32 VAR_2)
{
    UINT32 VAR_3;
    UINT32 VAR_4;
    char *VAR_5;
    UINT16 *VAR_6;


    VAR_5 = VAR_1->Value;
    VAR_6 = (UINT16 *) VAR_0;
    VAR_3 = FUNC_0 (VAR_5) + 1;



    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
    {
        VAR_6[VAR_4] = (UINT16) VAR_5[VAR_4];
    }
}
