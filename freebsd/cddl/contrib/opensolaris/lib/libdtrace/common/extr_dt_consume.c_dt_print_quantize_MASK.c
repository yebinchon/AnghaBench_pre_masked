
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ int64_t ;
typedef int dtrace_hdl_t ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int *,int ) ;
 scalar_t__ FUNC_2 (int *,int *,scalar_t__ const,int ,long double,char,char) ;
 scalar_t__ FUNC_3 (int *,int *,char*,long long) ;
 int FUNC_4 (int *,scalar_t__ const,long double*) ;
 int FUNC_5 (int *,int ) ;

int
FUNC_6(dtrace_hdl_t *VAR_3, FILE *VAR_4, const void *VAR_5,
    size_t VAR_6, uint64_t VAR_7)
{
 const int64_t *VAR_8 = VAR_5;
 int VAR_9, VAR_10 = 0, VAR_11 = VAR_0 - 1;
 long double VAR_12 = 0;
 char VAR_13 = 0, VAR_14 = 0;

 if (VAR_6 != VAR_0 * sizeof (uint64_t))
  return (FUNC_5(VAR_3, VAR_2));

 while (VAR_10 < VAR_0 - 1 && VAR_8[VAR_10] == 0)
  VAR_10++;

 if (VAR_10 == VAR_0 - 1) {





  VAR_10 = VAR_1 - 1;
  VAR_11 = VAR_1 + 1;
 } else {
  if (VAR_10 > 0)
   VAR_10--;

  while (VAR_11 > 0 && VAR_8[VAR_11] == 0)
   VAR_11--;

  if (VAR_11 < VAR_0 - 1)
   VAR_11++;
 }

 for (VAR_9 = VAR_10; VAR_9 <= VAR_11; VAR_9++) {
  VAR_13 |= (VAR_8[VAR_9] > 0);
  VAR_14 |= (VAR_8[VAR_9] < 0);
  FUNC_4(VAR_3, VAR_8[VAR_9], &VAR_12);
 }

 if (FUNC_1(VAR_3, VAR_4, 0) < 0)
  return (-1);

 for (VAR_9 = VAR_10; VAR_9 <= VAR_11; VAR_9++) {
  if (FUNC_3(VAR_3, VAR_4, "%16lld ",
      (long long)FUNC_0(VAR_9)) < 0)
   return (-1);

  if (FUNC_2(VAR_3, VAR_4, VAR_8[VAR_9], VAR_7, VAR_12,
      VAR_13, VAR_14) < 0)
   return (-1);
 }

 return (0);
}
