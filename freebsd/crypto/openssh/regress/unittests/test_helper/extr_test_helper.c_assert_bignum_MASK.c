
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum test_predicate { ____Placeholder_test_predicate } test_predicate ;
typedef int BIGNUM ;


 char* FUNC_0 (int const*) ;
 int FUNC_1 (int const*,int const*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,char*,char const*,char*) ;
 int VAR_0 ;
 int FUNC_4 () ;
 int FUNC_5 (char const*,int,char const*,char const*,char*,int) ;

void
FUNC_6(const char *VAR_1, int VAR_2, const char *VAR_3, const char *VAR_4,
    const BIGNUM *VAR_5, const BIGNUM *VAR_6, enum test_predicate VAR_7)
{
 int VAR_8 = FUNC_1(VAR_5, VAR_6);

 FUNC_2(VAR_8, VAR_7);
 FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4, "BIGNUM", VAR_7);
 FUNC_3(VAR_0, "%12s = 0x%s\n", VAR_3, FUNC_0(VAR_5));
 FUNC_3(VAR_0, "%12s = 0x%s\n", VAR_4, FUNC_0(VAR_6));
 FUNC_4();
}
