
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TS_RESP_CTX ;
typedef int CONF ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,int ,long*) ;
 long VAR_1 ;
 int FUNC_1 (int *,long) ;
 int FUNC_2 (char const*,int ) ;

int FUNC_3(CONF *VAR_2, const char *VAR_3,
                                       TS_RESP_CTX *VAR_4)
{
    int VAR_5 = 0;
    long VAR_6 = 0;




    if (!FUNC_0(VAR_2, VAR_3, VAR_0,
                            &VAR_6))
        VAR_6 = 0;
    if (VAR_6 < 0 || VAR_6 > VAR_1) {
        FUNC_2(VAR_3, VAR_0);
        goto err;
    }

    if (!FUNC_1(VAR_4, VAR_6))
        goto err;

    return 1;
 err:
    return VAR_5;
}
