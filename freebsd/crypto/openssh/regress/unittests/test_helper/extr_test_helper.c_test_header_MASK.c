
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum test_predicate { ____Placeholder_test_predicate } test_predicate ;


 char* VAR_0 ;
 int FUNC_0 (int ,char*,char const*,...) ;
 char* FUNC_1 (int) ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(const char *VAR_4, int VAR_5, const char *VAR_6, const char *VAR_7,
    const char *VAR_8, enum test_predicate VAR_9)
{
 FUNC_0(VAR_1, "\n%s:%d test #%u \"%s\"%s%s\n",
     VAR_4, VAR_5, VAR_3, VAR_0,
     *VAR_2 != '\0' ? " - " : "", VAR_2);
 FUNC_0(VAR_1, "ASSERT_%s_%s(%s%s%s) failed:\n",
     VAR_8, FUNC_1(VAR_9), VAR_6,
     VAR_7 != ((void*)0) ? ", " : "", VAR_7 != ((void*)0) ? VAR_7 : "");
}
