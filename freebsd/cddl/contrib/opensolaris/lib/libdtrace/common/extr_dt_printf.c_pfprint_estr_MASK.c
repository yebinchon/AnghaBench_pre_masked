
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int dtrace_hdl_t ;
typedef int dt_pfargd_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char const*,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (void const*,size_t) ;

__attribute__((used)) static int
FUNC_4(dtrace_hdl_t *VAR_1, FILE *VAR_2, const char *VAR_3,
    const dt_pfargd_t *VAR_4, const void *VAR_5, size_t VAR_6, uint64_t VAR_7)
{
 char *VAR_8;
 int VAR_9;

 if ((VAR_8 = FUNC_3(VAR_5, VAR_6)) == ((void*)0))
  return (FUNC_1(VAR_1, VAR_0));

 VAR_9 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_8);
 FUNC_2(VAR_8);
 return (VAR_9);
}
