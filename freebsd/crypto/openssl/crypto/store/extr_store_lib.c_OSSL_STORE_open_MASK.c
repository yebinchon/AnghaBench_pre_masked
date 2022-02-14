
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int scheme_copy ;
typedef int UI_METHOD ;
struct TYPE_8__ {void* post_process_data; int post_process; void* ui_data; int const* ui_method; int * loader_ctx; TYPE_1__ const* loader; } ;
struct TYPE_7__ {int (* close ) (int *) ;int * (* open ) (TYPE_1__ const*,char const*,int const*,void*) ;} ;
typedef int OSSL_STORE_post_process_info_fn ;
typedef int OSSL_STORE_LOADER_CTX ;
typedef TYPE_1__ OSSL_STORE_LOADER ;
typedef TYPE_2__ OSSL_STORE_CTX ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char const*,int) ;
 TYPE_2__* FUNC_4 (int) ;
 int VAR_1 ;
 int FUNC_5 (int ,int ) ;
 TYPE_1__* FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 char* FUNC_8 (char*,char) ;
 scalar_t__ FUNC_9 (char*,char*,int) ;
 int * FUNC_10 (TYPE_1__ const*,char const*,int const*,void*) ;
 int FUNC_11 (int *) ;

OSSL_STORE_CTX *FUNC_12(const char *VAR_2, const UI_METHOD *VAR_3,
                                void *VAR_4,
                                OSSL_STORE_post_process_info_fn VAR_5,
                                void *VAR_6)
{
    const OSSL_STORE_LOADER *VAR_7 = ((void*)0);
    OSSL_STORE_LOADER_CTX *VAR_8 = ((void*)0);
    OSSL_STORE_CTX *VAR_9 = ((void*)0);
    char VAR_10[256], *VAR_11, *VAR_12[2];
    size_t VAR_13 = 0;
    size_t VAR_14;






    VAR_12[VAR_13++] = "file";
    FUNC_3(VAR_10, VAR_2, sizeof(VAR_10));
    if ((VAR_11 = FUNC_8(VAR_10, ':')) != ((void*)0)) {
        *VAR_11++ = '\0';
        if (FUNC_7(VAR_10, "file") != 0) {
            if (FUNC_9(VAR_11, "//", 2) == 0)
                VAR_13--;
            VAR_12[VAR_13++] = VAR_10;
        }
    }

    FUNC_2();


    for (VAR_14 = 0; VAR_8 == ((void*)0) && VAR_14 < VAR_13; VAR_14++) {
        if ((VAR_7 = FUNC_6(VAR_12[VAR_14])) != ((void*)0))
            VAR_8 = VAR_7->open(VAR_7, VAR_2, VAR_3, VAR_4);
    }
    if (VAR_8 == ((void*)0))
        goto err;

    if ((VAR_9 = FUNC_4(sizeof(*VAR_9))) == ((void*)0)) {
        FUNC_5(VAR_1, VAR_0);
        goto err;
    }

    VAR_9->loader = VAR_7;
    VAR_9->loader_ctx = VAR_8;
    VAR_9->ui_method = VAR_3;
    VAR_9->ui_data = VAR_4;
    VAR_9->post_process = VAR_5;
    VAR_9->post_process_data = VAR_6;






    FUNC_1();

    return VAR_9;

 err:
    FUNC_0();
    if (VAR_8 != ((void*)0)) {





        (void)VAR_7->close(VAR_8);
    }
    return ((void*)0);
}
