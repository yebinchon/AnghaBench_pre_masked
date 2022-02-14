
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum test_predicate { ____Placeholder_test_predicate } test_predicate ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (char const*,int,char const*,char*,char const*,int *,int ) ;
 int FUNC_2 (int ,char*,char const*,char const*,int ) ;
 int VAR_1 ;
 int FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 () ;
 int FUNC_6 (char const*,int,char const*,char const*,char*,int) ;

void
FUNC_7(const char *VAR_2, int VAR_3, const char *VAR_4, const char *VAR_5,
    const char *VAR_6, const char *VAR_7, enum test_predicate VAR_8)
{
 int VAR_9;


 FUNC_1(VAR_2, VAR_3, VAR_4, "NULL", VAR_6, ((void*)0), VAR_0);
 FUNC_1(VAR_2, VAR_3, VAR_5, "NULL", VAR_7, ((void*)0), VAR_0);

 VAR_9 = FUNC_3(VAR_6, VAR_7);
 FUNC_0(VAR_9, VAR_8);
 FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5, "STRING", VAR_8);
 FUNC_2(VAR_1, "%12s = %s (len %d)\n", VAR_4, VAR_6, FUNC_4(VAR_6));
 FUNC_2(VAR_1, "%12s = %s (len %d)\n", VAR_5, VAR_7, FUNC_4(VAR_7));
 FUNC_5();
}
