
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ int64_t ;
typedef int dtrace_hdl_t ;
struct TYPE_3__ {int dtada_minbin; int dtada_maxbin; } ;
typedef TYPE_1__ dtrace_aggdata_t ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int *,scalar_t__ const,long double) ;
 scalar_t__ FUNC_3 (int *,int *,char*,int ,long long,...) ;
 int FUNC_4 (int *,scalar_t__ const,long double*) ;
 int FUNC_5 (int *,int ) ;

int
FUNC_6(dtrace_hdl_t *VAR_3, FILE *VAR_4, const void *VAR_5,
    size_t VAR_6, const dtrace_aggdata_t *VAR_7)
{
 const int64_t *VAR_8 = VAR_5;
 long double VAR_9 = 0, VAR_10 = 0;
 int VAR_11 = VAR_7->dtada_minbin, VAR_12 = VAR_7->dtada_maxbin, VAR_13;
 int64_t VAR_14, VAR_15;

 if (VAR_6 != VAR_0 * sizeof (uint64_t))
  return (FUNC_5(VAR_3, VAR_2));

 if (VAR_11 != 0 && VAR_11 != VAR_1)
  VAR_11--;

 if (VAR_12 < VAR_0 - 1)
  VAR_12++;

 VAR_14 = FUNC_0(VAR_11);
 VAR_15 = FUNC_0(VAR_12);

 if (FUNC_3(VAR_3, VAR_4, " %*lld :", FUNC_1(VAR_14),
     (long long)VAR_14) < 0)
  return (-1);

 for (VAR_13 = VAR_11; VAR_13 <= VAR_12; VAR_13++) {
  FUNC_4(VAR_3, VAR_8[VAR_13], &VAR_9);
  VAR_10 += VAR_8[VAR_13];
 }

 for (VAR_13 = VAR_11; VAR_13 <= VAR_12; VAR_13++) {
  if (FUNC_2(VAR_3, VAR_4, VAR_8[VAR_13], VAR_9) < 0)
   return (-1);
 }

 if (FUNC_3(VAR_3, VAR_4, ": %*lld | %lld\n",
     -FUNC_1(VAR_15), (long long)VAR_15, (long long)VAR_10) < 0)
  return (-1);

 return (0);
}
