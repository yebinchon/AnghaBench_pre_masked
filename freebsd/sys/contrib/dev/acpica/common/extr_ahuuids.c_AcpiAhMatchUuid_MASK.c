
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_3__ {char const* Description; int String; } ;
typedef TYPE_1__ AH_UUID ;


 int FUNC_0 (int ,int *) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int) ;

const char *
FUNC_2 (
    UINT8 *VAR_2)
{
    const AH_UUID *VAR_3;
    UINT8 VAR_4[VAR_1];




    for (VAR_3 = VAR_0; VAR_3->Description; VAR_3++)
    {


        if (!VAR_3->String)
        {
            continue;
        }

        FUNC_0 (VAR_3->String, VAR_4);

        if (!FUNC_1 (VAR_2, VAR_4, VAR_1))
        {
            return (VAR_3->Description);
        }
    }

    return (((void*)0));
}
