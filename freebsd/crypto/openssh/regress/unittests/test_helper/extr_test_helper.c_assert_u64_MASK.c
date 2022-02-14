
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int64_t ;
typedef enum test_predicate { ____Placeholder_test_predicate } test_predicate ;


 int FUNC_0 (scalar_t__,scalar_t__,int) ;
 int FUNC_1 (int ,char*,char const*,unsigned long long,unsigned long long) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (char const*,int,char const*,char const*,char*,int) ;

void
FUNC_4(const char *VAR_1, int VAR_2, const char *VAR_3, const char *VAR_4,
    u_int64_t VAR_5, u_int64_t VAR_6, enum test_predicate VAR_7)
{
 FUNC_0(VAR_5, VAR_6, VAR_7);
 FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, "U64", VAR_7);
 FUNC_1(VAR_0, "%12s = 0x%016llx %llu\n", VAR_3,
     (unsigned long long)VAR_5, (unsigned long long)VAR_5);
 FUNC_1(VAR_0, "%12s = 0x%016llx %llu\n", VAR_4,
     (unsigned long long)VAR_6, (unsigned long long)VAR_6);
 FUNC_2();
}
