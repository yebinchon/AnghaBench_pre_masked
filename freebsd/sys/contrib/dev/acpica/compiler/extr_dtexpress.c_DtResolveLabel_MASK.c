
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char* UINT64 ;
struct TYPE_3__ {char* TableOffset; } ;
typedef TYPE_1__ DT_FIELD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 TYPE_1__* FUNC_2 (char*) ;

UINT64
FUNC_3 (
    char *VAR_4)
{
    DT_FIELD *VAR_5;


    FUNC_0 (VAR_0, "Resolve Label: %s\n", VAR_4);



    if (*VAR_4 != '$')
    {
        return (0);
    }

    VAR_5 = FUNC_2 (VAR_4);
    if (!VAR_5)
    {
        FUNC_1 (VAR_1, VAR_2,
            VAR_3, VAR_4);
        return (0);
    }



    FUNC_0 (VAR_0, "Resolved Label: 0x%8.8X\n",
        VAR_5->TableOffset);

    return (VAR_5->TableOffset);
}
