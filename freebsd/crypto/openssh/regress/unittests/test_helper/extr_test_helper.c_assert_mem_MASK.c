
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum test_predicate { ____Placeholder_test_predicate } test_predicate ;


 int FUNC_0 (size_t,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (char const*,int,char const*,char*,void const*,int *,int ) ;
 int FUNC_3 (int ,char*,char const*,char*,size_t) ;
 int FUNC_4 (void const*,void const*,size_t) ;
 int VAR_1 ;
 int FUNC_5 () ;
 int FUNC_6 (char const*,int,char const*,char const*,char*,int) ;
 char* FUNC_7 (void const*,int ) ;

void
FUNC_8(const char *VAR_2, int VAR_3, const char *VAR_4, const char *VAR_5,
    const void *VAR_6, const void *VAR_7, size_t VAR_8, enum test_predicate VAR_9)
{
 int VAR_10;

 if (VAR_8 == 0)
  return;

 FUNC_2(VAR_2, VAR_3, VAR_4, "NULL", VAR_6, ((void*)0), VAR_0);
 FUNC_2(VAR_2, VAR_3, VAR_5, "NULL", VAR_7, ((void*)0), VAR_0);

 VAR_10 = FUNC_4(VAR_6, VAR_7, VAR_8);
 FUNC_1(VAR_10, VAR_9);
 FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5, "STRING", VAR_9);
 FUNC_3(VAR_1, "%12s = %s (len %zu)\n", VAR_4, FUNC_7(VAR_6, FUNC_0(VAR_8, 256)), VAR_8);
 FUNC_3(VAR_1, "%12s = %s (len %zu)\n", VAR_5, FUNC_7(VAR_7, FUNC_0(VAR_8, 256)), VAR_8);
 FUNC_5();
}
