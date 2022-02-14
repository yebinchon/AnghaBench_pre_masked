
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int time_t ;
typedef int src ;
typedef int hrtime_t ;
typedef int dtrace_hdl_t ;
typedef int dt_pfargd_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int *,char const*,char*) ;

__attribute__((used)) static int
FUNC_2(dtrace_hdl_t *VAR_1, FILE *VAR_2, const char *VAR_3,
    const dt_pfargd_t *VAR_4, const void *VAR_5, size_t VAR_6, uint64_t VAR_7)
{
 char VAR_8[32], VAR_9[32], *VAR_10 = VAR_9;
 hrtime_t VAR_11 = *((uint64_t *)VAR_5);
 time_t VAR_12 = (time_t)(VAR_11 / VAR_0);
 int VAR_13;
 (void) FUNC_0(&VAR_12, VAR_8);





 for (VAR_13 = 20; VAR_13 < 24; VAR_13++)
  *VAR_10++ = VAR_8[VAR_13];




 for (VAR_13 = 3; VAR_13 < 19; VAR_13++)
  *VAR_10++ = VAR_8[VAR_13];

 *VAR_10 = '\0';
 return (FUNC_1(VAR_1, VAR_2, VAR_3, VAR_9));
}
