
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ references; struct TYPE_4__* next; } ;
typedef TYPE_1__ APP_INFO ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(void)
{
    APP_INFO *VAR_3 = ((void*)0);

    if (!FUNC_3(&VAR_2, VAR_1))
        return 0;

    VAR_3 = (APP_INFO *)FUNC_0(&VAR_0);
    if (VAR_3 != ((void*)0)) {
        APP_INFO *VAR_4 = VAR_3->next;

        if (VAR_4 != ((void*)0)) {
            VAR_4->references++;
            FUNC_1(&VAR_0, VAR_4);
        } else {
            FUNC_1(&VAR_0, ((void*)0));
        }
        if (--(VAR_3->references) <= 0) {
            VAR_3->next = ((void*)0);
            if (VAR_4 != ((void*)0))
                VAR_4->references--;
            FUNC_2(VAR_3);
        }
        return 1;
    }
    return 0;
}
