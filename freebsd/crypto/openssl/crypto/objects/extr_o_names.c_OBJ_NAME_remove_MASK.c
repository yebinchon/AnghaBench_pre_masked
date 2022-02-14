
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int (* free_func ) (char const*,scalar_t__,int ) ;} ;
struct TYPE_6__ {char const* name; int type; int data; } ;
typedef TYPE_1__ OBJ_NAME ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ,TYPE_1__*) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (char const*,scalar_t__,int ) ;

int FUNC_8(const char *VAR_4, int VAR_5)
{
    OBJ_NAME VAR_6, *VAR_7;
    int VAR_8 = 0;

    if (!FUNC_2())
        return 0;

    FUNC_1(VAR_3);

    VAR_5 &= ~VAR_0;
    VAR_6.name = VAR_4;
    VAR_6.type = VAR_5;
    VAR_7 = FUNC_4(VAR_2, &VAR_6);
    if (VAR_7 != ((void*)0)) {

        if ((VAR_1 != ((void*)0))
            && (FUNC_5(VAR_1) > VAR_7->type)) {




            FUNC_6(VAR_1,
                                VAR_7->type)->free_func(VAR_7->name, VAR_7->type,
                                                      VAR_7->data);
        }
        FUNC_3(VAR_7);
        VAR_8 = 1;
    }

    FUNC_0(VAR_3);
    return VAR_8;
}
