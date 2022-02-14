
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TEST_RC4_KEY ;
typedef int EVP_CIPHER ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int const* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static const EVP_CIPHER *FUNC_7(void)
{
    if (VAR_3 == ((void*)0)) {
        EVP_CIPHER *VAR_6;

        if ((VAR_6 = FUNC_1(VAR_1, 1, VAR_2)) == ((void*)0)
            || !FUNC_6(VAR_6, 0)
            || !FUNC_3(VAR_6, VAR_0)
            || !FUNC_5(VAR_6, VAR_5)
            || !FUNC_2(VAR_6, VAR_4)
            || !FUNC_4(VAR_6, sizeof(TEST_RC4_KEY))) {
            FUNC_0(VAR_6);
            VAR_6 = ((void*)0);
        }
        VAR_3 = VAR_6;
    }
    return VAR_3;
}
