
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int tmp ;
typedef enum test_predicate { ____Placeholder_test_predicate } test_predicate ;


 int FUNC_0 (size_t,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (char const*,int,char const*,char*,void const*,int *,int ) ;
 int FUNC_3 (int ,char*,char const*,...) ;
 int FUNC_4 (void const*,int,size_t,size_t*) ;
 int FUNC_5 (char*,int,char*,char const*,size_t) ;
 int VAR_1 ;
 int FUNC_6 () ;
 int FUNC_7 (char const*,int,char const*,int *,char*,int) ;
 char* FUNC_8 (void const*,int ) ;

void
FUNC_9(const char *VAR_2, int VAR_3, const char *VAR_4,
    const void *VAR_5, u_char VAR_6, size_t VAR_7, enum test_predicate VAR_8)
{
 size_t VAR_9 = -1;
 int VAR_10;
 char VAR_11[64];

 if (VAR_7 == 0)
  return;

 FUNC_2(VAR_2, VAR_3, VAR_4, "NULL", VAR_5, ((void*)0), VAR_0);

 VAR_10 = FUNC_4(VAR_5, VAR_6, VAR_7, &VAR_9);
 FUNC_1(VAR_10, VAR_8);
 FUNC_7(VAR_2, VAR_3, VAR_4, ((void*)0), "MEM_ZERO", VAR_8);
 FUNC_3(VAR_1, "%20s = %s%s (len %zu)\n", VAR_4,
     FUNC_8(VAR_5, FUNC_0(VAR_7, 20)), VAR_7 > 20 ? "..." : "", VAR_7);
 FUNC_5(VAR_11, sizeof(VAR_11), "(%s)[%zu]", VAR_4, VAR_9);
 FUNC_3(VAR_1, "%20s = 0x%02x (expected 0x%02x)\n", VAR_11,
     ((u_char *)VAR_5)[VAR_9], VAR_6);
 FUNC_6();
}
