
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint16_t ;
struct servent {char* s_name; } ;
typedef int dtrace_hdl_t ;
typedef int dt_pfargd_t ;
typedef int buf ;
typedef int FILE ;


 int FUNC_0 (int *,int *,char const*,char*) ;
 struct servent* FUNC_1 (int,int *,struct servent*,char*,int,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_4(dtrace_hdl_t *VAR_0, FILE *VAR_1, const char *VAR_2,
    const dt_pfargd_t *VAR_3, const void *VAR_4, size_t VAR_5, uint64_t VAR_6)
{
 uint16_t VAR_7 = FUNC_2(*((uint16_t *)VAR_4));
 char VAR_8[256];
 struct servent *VAR_9, VAR_10;




 if (FUNC_1(VAR_7, ((void*)0), &VAR_10, VAR_8, sizeof (VAR_8), &VAR_9) > 0)

  return (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_9->s_name));

 (void) FUNC_3(VAR_8, sizeof (VAR_8), "%d", *((uint16_t *)VAR_4));
 return (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_8));
}
