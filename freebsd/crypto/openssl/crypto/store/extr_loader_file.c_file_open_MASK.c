
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct stat {int st_mode; } ;
typedef int peekbuf ;
typedef int errbuf ;
typedef int UI_METHOD ;
struct TYPE_9__ {int * file; } ;
struct TYPE_8__ {scalar_t__ last_errno; int end_reached; int * last_entry; int ctx; int * uri; } ;
struct TYPE_10__ {TYPE_2__ file; TYPE_1__ dir; } ;
struct TYPE_11__ {int type; TYPE_3__ _; } ;
typedef TYPE_4__ OSSL_STORE_LOADER_CTX ;
typedef int OSSL_STORE_LOADER ;
typedef int BIO ;


 scalar_t__ FUNC_0 (int *,char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int * FUNC_4 (char const*,char*) ;
 int * FUNC_5 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 () ;
 int * FUNC_8 (int *,char const*) ;
 int * FUNC_9 (char const*) ;
 TYPE_4__* FUNC_10 (int) ;
 int VAR_2 ;
 int FUNC_11 (TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_12 (int ,int ) ;
 int VAR_5 ;
 int FUNC_13 (int ,scalar_t__) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_15 (scalar_t__,char*,int) ;
 char FUNC_16 (char const) ;
 scalar_t__ FUNC_17 (char*,struct stat*) ;
 scalar_t__ FUNC_18 (char const*,char*,int) ;
 scalar_t__ FUNC_19 (char const*,char*,int) ;
 int * FUNC_20 (char*,char*) ;

__attribute__((used)) static OSSL_STORE_LOADER_CTX *FUNC_21(const OSSL_STORE_LOADER *VAR_9,
                                        const char *VAR_10,
                                        const UI_METHOD *VAR_11,
                                        void *VAR_12)
{
    OSSL_STORE_LOADER_CTX *VAR_13 = ((void*)0);
    struct stat VAR_14;
    struct {
        const char *path;
        unsigned int check_absolute:1;
    } VAR_15[2];
    size_t VAR_16 = 0, VAR_17;
    const char *VAR_18;




    VAR_15[VAR_16].check_absolute = 0;
    VAR_15[VAR_16++].path = VAR_10;







    if (FUNC_18(VAR_10, "file:", 5) == 0) {
        const char *VAR_19 = &VAR_10[5];

        if (FUNC_19(&VAR_10[5], "//", 2) == 0) {
            VAR_16--;
            if (FUNC_18(&VAR_10[7], "localhost/", 10) == 0) {
                VAR_19 = &VAR_10[16];
            } else if (VAR_10[7] == '/') {
                VAR_19 = &VAR_10[7];
            } else {
                FUNC_12(VAR_2,
                              VAR_4);
                return ((void*)0);
            }
        }

        VAR_15[VAR_16].check_absolute = 1;
        VAR_15[VAR_16++].path = VAR_19;
    }


    for (VAR_17 = 0, VAR_18 = ((void*)0); VAR_18 == ((void*)0) && VAR_17 < VAR_16; VAR_17++) {




        if (VAR_15[VAR_17].check_absolute && VAR_15[VAR_17].path[0] != '/') {
            FUNC_12(VAR_2,
                          VAR_3);
            FUNC_6(1, VAR_15[VAR_17].path);
            return ((void*)0);
        }

        if (FUNC_17(VAR_15[VAR_17].path, &VAR_14) < 0) {
            FUNC_13(VAR_5, VAR_6);
            FUNC_6(1, VAR_15[VAR_17].path);
        } else {
            VAR_18 = VAR_15[VAR_17].path;
        }
    }
    if (VAR_18 == ((void*)0)) {
        return ((void*)0);
    }


    FUNC_7();

    VAR_13 = FUNC_10(sizeof(*VAR_13));
    if (VAR_13 == ((void*)0)) {
        FUNC_12(VAR_2, VAR_0);
        return ((void*)0);
    }

    if (FUNC_14(VAR_14.st_mode)) {





        VAR_13->_.dir.uri = FUNC_9(VAR_10);
        VAR_13->type = VAR_7;

        if (VAR_13->_.dir.uri == ((void*)0))
            goto err;

        VAR_13->_.dir.last_entry = FUNC_8(&VAR_13->_.dir.ctx, VAR_18);
        VAR_13->_.dir.last_errno = VAR_6;
        if (VAR_13->_.dir.last_entry == ((void*)0)) {
            if (VAR_13->_.dir.last_errno != 0) {
                char VAR_20[256];
                FUNC_12(VAR_2, VAR_1);
                VAR_6 = VAR_13->_.dir.last_errno;
                if (FUNC_15(VAR_6, VAR_20, sizeof(VAR_20)))
                    FUNC_6(1, VAR_20);
                goto err;
            }
            VAR_13->_.dir.end_reached = 1;
        }
    } else {
        BIO *VAR_21 = ((void*)0);
        char VAR_22[4096] = { 0, };

        if ((VAR_21 = FUNC_3(FUNC_1())) == ((void*)0)
            || (VAR_13->_.file.file = FUNC_4(VAR_18, "rb")) == ((void*)0)) {
            FUNC_2(VAR_21);
            goto err;
        }

        VAR_13->_.file.file = FUNC_5(VAR_21, VAR_13->_.file.file);
        if (FUNC_0(VAR_13->_.file.file, VAR_22, sizeof(VAR_22) - 1) > 0) {
            VAR_22[sizeof(VAR_22) - 1] = '\0';
            if (FUNC_20(VAR_22, "-----BEGIN ") != ((void*)0))
                VAR_13->type = VAR_8;
        }
    }

    return VAR_13;
 err:
    FUNC_11(VAR_13);
    return ((void*)0);
}
