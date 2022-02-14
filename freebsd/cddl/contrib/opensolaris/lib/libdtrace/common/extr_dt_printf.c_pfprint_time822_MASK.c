
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int time_t ;
struct tm {int dummy; } ;
typedef int hrtime_t ;
typedef int dtrace_hdl_t ;
typedef int dt_pfargd_t ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char const*,char*) ;
 int FUNC_1 (int *,struct tm*) ;
 int FUNC_2 (char*,int,char*,struct tm*) ;

__attribute__((used)) static int
FUNC_3(dtrace_hdl_t *VAR_1, FILE *VAR_2, const char *VAR_3,
    const dt_pfargd_t *VAR_4, const void *VAR_5, size_t VAR_6, uint64_t VAR_7)
{
 hrtime_t VAR_8 = *((uint64_t *)VAR_5);
 time_t VAR_9 = (time_t)(VAR_8 / VAR_0);
 struct tm VAR_10;
 char VAR_11[64];

 (void) FUNC_1(&VAR_9, &VAR_10);
 (void) FUNC_2(VAR_11, sizeof (VAR_11), "%a, %d %b %G %T %Z", &VAR_10);
 return (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_11));
}
