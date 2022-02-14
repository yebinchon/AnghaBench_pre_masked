
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int * name; } ;
typedef TYPE_1__ DSA_METHOD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (char const*) ;
 TYPE_1__* FUNC_3 (int) ;

DSA_METHOD *FUNC_4(const char *VAR_2, int VAR_3)
{
    DSA_METHOD *VAR_4 = FUNC_3(sizeof(*VAR_4));

    if (VAR_4 != ((void*)0)) {
        VAR_4->flags = VAR_3;

        VAR_4->name = FUNC_2(VAR_2);
        if (VAR_4->name != ((void*)0))
            return VAR_4;

        FUNC_1(VAR_4);
    }

    FUNC_0(VAR_0, VAR_1);
    return ((void*)0);
}
