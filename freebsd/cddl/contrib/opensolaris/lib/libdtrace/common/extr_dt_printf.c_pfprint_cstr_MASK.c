
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int dtrace_hdl_t ;
typedef int dt_pfargd_t ;
typedef int FILE ;


 char* FUNC_0 (size_t) ;
 int FUNC_1 (void const*,char*,size_t) ;
 int FUNC_2 (int *,int *,char const*,char*) ;

__attribute__((used)) static int
FUNC_3(dtrace_hdl_t *VAR_0, FILE *VAR_1, const char *VAR_2,
    const dt_pfargd_t *VAR_3, const void *VAR_4, size_t VAR_5, uint64_t VAR_6)
{
 char *VAR_7 = FUNC_0(VAR_5 + 1);

 FUNC_1(VAR_4, VAR_7, VAR_5);
 VAR_7[VAR_5] = '\0';
 return (FUNC_2(VAR_0, VAR_1, VAR_2, VAR_7));
}
