
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int conf_init_func ;
typedef int conf_finish_func ;
typedef int DSO ;
typedef int CONF_MODULE ;
typedef int CONF ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,char const*,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int,char*,char const*,char*,char const*) ;
 int FUNC_5 () ;
 char* FUNC_6 (int const*,char const*,char*) ;
 int * FUNC_7 (int *,char const*,int *,int *) ;

__attribute__((used)) static CONF_MODULE *FUNC_8(const CONF *VAR_5,
                                    const char *VAR_6, const char *VAR_7)
{
    DSO *VAR_8 = ((void*)0);
    conf_init_func *VAR_9;
    conf_finish_func *VAR_10;
    const char *VAR_11 = ((void*)0);
    int VAR_12 = 0;
    CONF_MODULE *VAR_13;

    VAR_11 = FUNC_6(VAR_5, VAR_7, "path");
    if (!VAR_11) {
        FUNC_5();
        VAR_11 = VAR_6;
    }
    VAR_8 = FUNC_3(((void*)0), VAR_11, ((void*)0), 0);
    if (!VAR_8) {
        VAR_12 = VAR_1;
        goto err;
    }
    VAR_9 = (conf_init_func *)FUNC_1(VAR_8, VAR_4);
    if (!VAR_9) {
        VAR_12 = VAR_2;
        goto err;
    }
    VAR_10 = (conf_finish_func *)FUNC_1(VAR_8, VAR_3);

    VAR_13 = FUNC_7(VAR_8, VAR_6, VAR_9, VAR_10);

    if (!VAR_13)
        goto err;

    return VAR_13;

 err:
    FUNC_2(VAR_8);
    FUNC_0(VAR_0, VAR_12);
    FUNC_4(4, "module=", VAR_6, ", path=", VAR_11);
    return ((void*)0);
}
