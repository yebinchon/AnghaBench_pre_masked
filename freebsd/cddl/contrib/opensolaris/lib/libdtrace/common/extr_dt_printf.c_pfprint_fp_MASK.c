
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int dtrace_hdl_t ;
typedef int dt_pfargd_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char const*,long double) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int
FUNC_2(dtrace_hdl_t *VAR_1, FILE *VAR_2, const char *VAR_3,
    const dt_pfargd_t *VAR_4, const void *VAR_5, size_t VAR_6, uint64_t VAR_7)
{
 double VAR_8 = (double)VAR_7;
 long double VAR_9 = (long double)VAR_7;

 switch (VAR_6) {
 case sizeof (float):
  return (FUNC_0(VAR_1, VAR_2, VAR_3,
      (double)*((float *)VAR_5) / VAR_8));
 case sizeof (double):
  return (FUNC_0(VAR_1, VAR_2, VAR_3,
      *((double *)VAR_5) / VAR_8));


 case sizeof (long double):
  return (FUNC_0(VAR_1, VAR_2, VAR_3,
      *((long double *)VAR_5) / VAR_9));

 default:
  return (FUNC_1(VAR_1, VAR_0));
 }
}
