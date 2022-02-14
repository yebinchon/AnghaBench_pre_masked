
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ) ;
 scalar_t__ FUNC_1 (int *,char*,unsigned char const,char*) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,char*,int) ;

int FUNC_4(BIO *VAR_2, const unsigned char *VAR_3, size_t VAR_4, int VAR_5)
{
    size_t VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        if ((VAR_6 % VAR_0) == 0) {
            if (VAR_6 > 0 && FUNC_2(VAR_2, "\n") <= 0)
                return 0;
            if (!FUNC_0(VAR_2, VAR_5, VAR_1))
                return 0;
        }




        if (FUNC_1(VAR_2, "%02x%s", VAR_3[VAR_6],
                       (VAR_6 == VAR_4 - 1) ? "" : ":") <= 0)
                return 0;
    }
    if (FUNC_3(VAR_2, "\n", 1) <= 0)
        return 0;
    return 1;
}
