
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int loading; scalar_t__ expected_type; TYPE_1__* loader; int post_process_data; int * (* post_process ) (int *,int ) ;int ui_data; int ui_method; int loader_ctx; } ;
struct TYPE_5__ {int * expect; int * (* load ) (int ,int ,int ) ;} ;
typedef int OSSL_STORE_INFO ;
typedef TYPE_2__ OSSL_STORE_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (int ,int ,int ) ;
 int * FUNC_5 (int *,int ) ;

OSSL_STORE_INFO *FUNC_6(OSSL_STORE_CTX *VAR_1)
{
    OSSL_STORE_INFO *VAR_2 = ((void*)0);

    VAR_1->loading = 1;
 again:
    if (FUNC_2(VAR_1))
        return ((void*)0);

    VAR_2 = VAR_1->loader->load(VAR_1->loader_ctx, VAR_1->ui_method, VAR_1->ui_data);

    if (VAR_1->post_process != ((void*)0) && VAR_2 != ((void*)0)) {
        VAR_2 = VAR_1->post_process(VAR_2, VAR_1->post_process_data);





        if (VAR_2 == ((void*)0))
            goto again;
    }

    if (VAR_2 != ((void*)0) && VAR_1->expected_type != 0) {
        int VAR_3 = FUNC_1(VAR_2);

        if (VAR_3 != VAR_0 && VAR_3 != 0) {




            if (VAR_1->loader->expect != ((void*)0))
                FUNC_3(VAR_1->expected_type == VAR_3);

            if (VAR_1->expected_type != VAR_3) {
                FUNC_0(VAR_2);
                goto again;
            }
        }
    }

    return VAR_2;
}
