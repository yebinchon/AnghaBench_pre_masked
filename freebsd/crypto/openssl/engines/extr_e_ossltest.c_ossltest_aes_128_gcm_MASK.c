
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_CIPHER ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int const*) ;
 int * FUNC_2 (int ,int,int) ;
 int FUNC_3 (int const*,int ) ;
 int FUNC_4 (int const*,int ) ;
 int FUNC_5 (int const*,int ) ;
 int FUNC_6 (int const*,int ) ;
 int FUNC_7 (int const*,int ) ;
 int FUNC_8 (int const*,int) ;
 int FUNC_9 () ;
 int VAR_1 ;
 int const* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static const EVP_CIPHER *FUNC_10(void)
{
    if (VAR_2 == ((void*)0)
        && ((VAR_2 = FUNC_2(VAR_1,
                                                       1 ,
                                                       16 )) == ((void*)0)
            || !FUNC_8(VAR_2,12)
            || !FUNC_5(VAR_2, VAR_0)
            || !FUNC_7(VAR_2,
                                         VAR_5)
            || !FUNC_4(VAR_2,
                                              VAR_3)
            || !FUNC_3(VAR_2,
                                              VAR_4)
            || !FUNC_6(VAR_2,
                              FUNC_0(FUNC_9())))) {
        FUNC_1(VAR_2);
        VAR_2 = ((void*)0);
    }
    return VAR_2;
}
