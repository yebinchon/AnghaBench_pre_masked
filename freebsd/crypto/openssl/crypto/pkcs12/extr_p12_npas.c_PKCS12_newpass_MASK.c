
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PKCS12 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char const*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char const*,char const*) ;

int FUNC_3(PKCS12 *VAR_4, const char *VAR_5, const char *VAR_6)
{


    if (!VAR_4) {
        FUNC_1(VAR_0,
                  VAR_1);
        return 0;
    }



    if (!FUNC_0(VAR_4, VAR_5, -1)) {
        FUNC_1(VAR_0, VAR_2);
        return 0;
    }

    if (!FUNC_2(VAR_4, VAR_5, VAR_6)) {
        FUNC_1(VAR_0, VAR_3);
        return 0;
    }

    return 1;
}
