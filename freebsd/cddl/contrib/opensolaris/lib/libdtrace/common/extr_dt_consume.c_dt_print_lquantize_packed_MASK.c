
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint16_t ;
typedef scalar_t__ int64_t ;
typedef int dtrace_hdl_t ;
typedef int dtrace_aggdata_t ;
typedef int c ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *,int *,scalar_t__ const,long double) ;
 int FUNC_4 (int *,int *,char*,...) ;
 int FUNC_5 (int *,scalar_t__ const,long double*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (char*,int,char*,int) ;

int
FUNC_8(dtrace_hdl_t *VAR_1, FILE *VAR_2, const void *VAR_3,
    size_t VAR_4, const dtrace_aggdata_t *VAR_5)
{
 const int64_t *VAR_6 = VAR_3;
 long double VAR_7 = 0, VAR_8 = 0;
 int VAR_9, VAR_10, VAR_11, VAR_12;
 uint64_t VAR_13;
 uint16_t VAR_14, VAR_15;
 char VAR_16[32];
 unsigned int VAR_17;

 if (VAR_4 < sizeof (uint64_t))
  return (FUNC_6(VAR_1, VAR_0));

 VAR_13 = *VAR_6++;
 VAR_4 -= sizeof (uint64_t);

 VAR_11 = FUNC_0(VAR_13);
 VAR_14 = FUNC_2(VAR_13);
 VAR_15 = FUNC_1(VAR_13);

 if (VAR_4 != sizeof (uint64_t) * (VAR_15 + 2))
  return (FUNC_6(VAR_1, VAR_0));

 VAR_9 = 0;
 VAR_10 = VAR_15 + 1;

 if (VAR_9 == 0) {
  (void) FUNC_7(VAR_16, sizeof (VAR_16), "< %d", VAR_11);
  VAR_12 = FUNC_4(VAR_1, VAR_2, "%8s :", VAR_16);
 } else {
  VAR_12 = FUNC_4(VAR_1, VAR_2, "%8d :", VAR_11 + (VAR_9 - 1) * VAR_14);
 }

 if (VAR_12 < 0)
  return (-1);

 for (VAR_17 = VAR_9; VAR_17 <= VAR_10; VAR_17++) {
  FUNC_5(VAR_1, VAR_6[VAR_17], &VAR_7);
  VAR_8 += VAR_6[VAR_17];
 }

 for (VAR_17 = VAR_9; VAR_17 <= VAR_10; VAR_17++) {
  if (FUNC_3(VAR_1, VAR_2, VAR_6[VAR_17], VAR_7) < 0)
   return (-1);
 }

 (void) FUNC_7(VAR_16, sizeof (VAR_16), ">= %d", VAR_11 + (VAR_15 * VAR_14));
 return (FUNC_4(VAR_1, VAR_2, ": %-8s | %lld\n", VAR_16, (long long)VAR_8));
}
