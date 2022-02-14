
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * callback_ex; int * callback; TYPE_1__* method; } ;
struct TYPE_6__ {long (* callback_ctrl ) (TYPE_2__*,int,int *) ;} ;
typedef int BIO_info_cb ;
typedef TYPE_2__ BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 long FUNC_1 (TYPE_2__*,int,void*,int ,int,int ,long,int *) ;
 long FUNC_2 (TYPE_2__*,int,int *) ;

long FUNC_3(BIO *VAR_5, int VAR_6, BIO_info_cb *VAR_7)
{
    long VAR_8;

    if (VAR_5 == ((void*)0))
        return 0;

    if ((VAR_5->method == ((void*)0)) || (VAR_5->method->callback_ctrl == ((void*)0))
            || (VAR_6 != VAR_2)) {
        FUNC_0(VAR_3, VAR_4);
        return -2;
    }

    if (VAR_5->callback != ((void*)0) || VAR_5->callback_ex != ((void*)0)) {
        VAR_8 = FUNC_1(VAR_5, VAR_0, (void *)&VAR_7, 0, VAR_6, 0, 1L,
                                ((void*)0));
        if (VAR_8 <= 0)
            return VAR_8;
    }

    VAR_8 = VAR_5->method->callback_ctrl(VAR_5, VAR_6, VAR_7);

    if (VAR_5->callback != ((void*)0) || VAR_5->callback_ex != ((void*)0))
        VAR_8 = FUNC_1(VAR_5, VAR_0 | VAR_1, (void *)&VAR_7, 0,
                                VAR_6, 0, VAR_8, ((void*)0));

    return VAR_8;
}
