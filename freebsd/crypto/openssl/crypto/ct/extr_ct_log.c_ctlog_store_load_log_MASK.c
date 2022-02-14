
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* log_store; int invalid_log_entries; int conf; } ;
struct TYPE_3__ {int logs; } ;
typedef TYPE_2__ CTLOG_STORE_LOAD_CTX ;
typedef int CTLOG ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,int) ;
 int FUNC_4 (int **,int ,char*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(const char *VAR_2, int VAR_3,
                                void *VAR_4)
{
    CTLOG_STORE_LOAD_CTX *VAR_5 = VAR_4;
    CTLOG *VAR_6 = ((void*)0);

    char *VAR_7;
    int VAR_8 = 0;


    if (VAR_2 == ((void*)0))
        return 1;

    VAR_7 = FUNC_3(VAR_2, VAR_3);
    if (VAR_7 == ((void*)0))
        goto mem_err;

    VAR_8 = FUNC_4(&VAR_6, VAR_5->conf, VAR_7);
    FUNC_2(VAR_7);

    if (VAR_8 < 0) {

        return VAR_8;
    }
    if (VAR_8 == 0) {

        ++VAR_5->invalid_log_entries;
        return 1;
    }

    if (!FUNC_5(VAR_5->log_store->logs, VAR_6)) {
        goto mem_err;
    }
    return 1;

mem_err:
    FUNC_0(VAR_6);
    FUNC_1(VAR_0, VAR_1);
    return -1;
}
