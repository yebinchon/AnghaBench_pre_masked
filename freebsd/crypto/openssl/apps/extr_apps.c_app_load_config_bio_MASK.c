
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CONF ;
typedef int BIO ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,long*) ;
 int * FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 () ;

CONF *FUNC_5(BIO *VAR_1, const char *VAR_2)
{
    long VAR_3 = -1;
    CONF *VAR_4;
    int VAR_5;

    VAR_4 = FUNC_3(((void*)0));
    VAR_5 = FUNC_2(VAR_4, VAR_1, &VAR_3);
    if (VAR_5 > 0)
        return VAR_4;

    if (VAR_3 <= 0) {
        FUNC_0(VAR_0, "%s: Can't load ", FUNC_4());
    } else {
        FUNC_0(VAR_0, "%s: Error on line %ld of ", FUNC_4(),
                   VAR_3);
    }
    if (VAR_2 != ((void*)0))
        FUNC_0(VAR_0, "config file \"%s\"\n", VAR_2);
    else
        FUNC_0(VAR_0, "config input");

    FUNC_1(VAR_4);
    return ((void*)0);
}
