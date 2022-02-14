
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_7__ {int * callback_ex; int * callback; int num_read; TYPE_1__* method; int init; } ;
struct TYPE_6__ {int (* bread ) (TYPE_2__*,void*,size_t,size_t*) ;} ;
typedef TYPE_2__ BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int,void*,size_t,int ,long,int,size_t*) ;
 int FUNC_2 (TYPE_2__*,void*,size_t,size_t*) ;

__attribute__((used)) static int FUNC_3(BIO *VAR_6, void *VAR_7, size_t VAR_8, size_t *VAR_9)
{
    int VAR_10;

    if ((VAR_6 == ((void*)0)) || (VAR_6->method == ((void*)0)) || (VAR_6->method->bread == ((void*)0))) {
        FUNC_0(VAR_2, VAR_4);
        return -2;
    }

    if ((VAR_6->callback != ((void*)0) || VAR_6->callback_ex != ((void*)0)) &&
        ((VAR_10 = (int)FUNC_1(VAR_6, VAR_0, VAR_7, VAR_8, 0, 0L, 1L,
                                       ((void*)0))) <= 0))
        return VAR_10;

    if (!VAR_6->init) {
        FUNC_0(VAR_2, VAR_3);
        return -2;
    }

    VAR_10 = VAR_6->method->bread(VAR_6, VAR_7, VAR_8, VAR_9);

    if (VAR_10 > 0)
        VAR_6->num_read += (uint64_t)*VAR_9;

    if (VAR_6->callback != ((void*)0) || VAR_6->callback_ex != ((void*)0))
        VAR_10 = (int)FUNC_1(VAR_6, VAR_0 | VAR_1, VAR_7,
                                     VAR_8, 0, 0L, VAR_10, VAR_9);


    if (VAR_10 > 0 && *VAR_9 > VAR_8) {
        FUNC_0(VAR_2, VAR_5);
        return -1;
    }

    return VAR_10;
}
