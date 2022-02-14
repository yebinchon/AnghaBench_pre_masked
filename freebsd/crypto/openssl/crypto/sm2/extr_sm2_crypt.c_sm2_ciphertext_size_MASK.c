
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD ;
typedef int EC_KEY ;


 int FUNC_0 (int,size_t const,int ) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_3 (int ) ;

int FUNC_4(const EC_KEY *VAR_3, const EVP_MD *VAR_4, size_t VAR_5,
                        size_t *VAR_6)
{
    const size_t VAR_7 = FUNC_3(FUNC_1(VAR_3));
    const int VAR_8 = FUNC_2(VAR_4);
    size_t VAR_9;

    if (VAR_7 == 0 || VAR_8 < 0)
        return 0;


    VAR_9 = 2 * FUNC_0(0, VAR_7 + 1, VAR_0)
         + FUNC_0(0, VAR_8, VAR_1)
         + FUNC_0(0, VAR_5, VAR_1);

    *VAR_6 = FUNC_0(1, VAR_9, VAR_2);

    return 1;
}
