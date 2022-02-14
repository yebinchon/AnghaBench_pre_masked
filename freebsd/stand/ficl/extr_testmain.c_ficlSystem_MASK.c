
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ count; int text; } ;
struct TYPE_8__ {char* pad; } ;
typedef TYPE_1__ FICL_VM ;
typedef TYPE_2__ FICL_STRING ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,char) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_5(FICL_VM *VAR_1)
{
    FICL_STRING *VAR_2 = (FICL_STRING *)VAR_1->pad;

    FUNC_2(VAR_1, VAR_2, '\n');
    if (VAR_2->count > 0)
    {
        int VAR_3 = FUNC_1(VAR_2->text);
        if (VAR_3)
        {
            FUNC_0(VAR_1->pad, "System call returned %d", VAR_3);
            FUNC_3(VAR_1, VAR_1->pad, 1);
            FUNC_4(VAR_1, VAR_0);
        }
    }
    else
    {
        FUNC_3(VAR_1, "Warning (system): nothing happened", 1);
    }
    return;
}
