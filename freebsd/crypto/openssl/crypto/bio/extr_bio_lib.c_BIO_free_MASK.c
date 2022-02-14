
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int lock; int ex_data; TYPE_1__* method; int * callback_ex; int * callback; int references; } ;
struct TYPE_9__ {int (* destroy ) (TYPE_2__*) ;} ;
typedef TYPE_2__ BIO ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ,int *,int ,int ,long,long,int *) ;
 int FUNC_7 (TYPE_2__*) ;

int FUNC_8(BIO *VAR_2)
{
    int VAR_3;

    if (VAR_2 == ((void*)0))
        return 0;

    if (FUNC_0(&VAR_2->references, &VAR_3, VAR_2->lock) <= 0)
        return 0;

    FUNC_5("BIO", VAR_2);
    if (VAR_3 > 0)
        return 1;
    FUNC_4(VAR_3 < 0);

    if (VAR_2->callback != ((void*)0) || VAR_2->callback_ex != ((void*)0)) {
        VAR_3 = (int)FUNC_6(VAR_2, VAR_0, ((void*)0), 0, 0, 0L, 1L, ((void*)0));
        if (VAR_3 <= 0)
            return VAR_3;
    }

    if ((VAR_2->method != ((void*)0)) && (VAR_2->method->destroy != ((void*)0)))
        VAR_2->method->destroy(VAR_2);

    FUNC_2(VAR_1, VAR_2, &VAR_2->ex_data);

    FUNC_1(VAR_2->lock);

    FUNC_3(VAR_2);

    return 1;
}
