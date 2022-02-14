
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* file; int line; char const* info; int references; struct TYPE_4__* next; int threadid; } ;
typedef TYPE_1__ APP_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_6 () ;
 int VAR_4 ;

int FUNC_7(const char *VAR_5, const char *VAR_6, int VAR_7)
{
    APP_INFO *VAR_8, *VAR_9;
    int VAR_10 = 0;

    if (FUNC_6()) {
        FUNC_3(VAR_0);

        if (!FUNC_5(&VAR_4, VAR_3)
            || (VAR_8 = FUNC_4(sizeof(*VAR_8))) == ((void*)0))
            goto err;

        VAR_8->threadid = FUNC_0();
        VAR_8->file = VAR_6;
        VAR_8->line = VAR_7;
        VAR_8->info = VAR_5;
        VAR_8->references = 1;
        VAR_8->next = ((void*)0);

        VAR_9 = (APP_INFO *)FUNC_1(&VAR_2);
        FUNC_2(&VAR_2, VAR_8);

        if (VAR_9 != ((void*)0))
            VAR_8->next = VAR_9;
        VAR_10 = 1;
 err:
        FUNC_3(VAR_1);
    }

    return VAR_10;
}
