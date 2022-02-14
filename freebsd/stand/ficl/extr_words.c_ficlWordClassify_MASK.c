
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WORDKIND ;
struct TYPE_3__ {scalar_t__ code; } ;
typedef TYPE_1__ FICL_WORD ;
typedef scalar_t__ FICL_CODE ;
 int VAR_0 ;
 int VAR_1 ;







WORDKIND FUNC_0(FICL_WORD *VAR_2)
{
    typedef struct
    {
        WORDKIND kind;
        FICL_CODE code;
    } CODEtoKIND;

    static CODEtoKIND VAR_3[] =
    {
        {159, 142},
        {158, 141},
        {157, 140},
        {156, 139},
        {154, 136},
        {153, 137},
        {152, 143},
        {151, 135},
        {150, 134},
        {149, 133},
        {148, 132},
        {147, 131},
        {155, 138},
        {146, 130},



        {144, 128},
    };



    FICL_CODE VAR_4 = VAR_2->code;
    int VAR_5;

    for (VAR_5=0; VAR_5 < (sizeof(VAR_3) / sizeof(CODEtoKIND)); VAR_5++)
    {
        if (VAR_3[VAR_5].code == VAR_4)
            return VAR_3[VAR_5].kind;
    }

    return VAR_0;
}
