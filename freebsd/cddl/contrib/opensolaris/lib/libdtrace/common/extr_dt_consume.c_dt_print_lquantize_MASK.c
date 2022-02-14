
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint16_t ;
typedef scalar_t__ int64_t ;
typedef int dtrace_hdl_t ;
typedef int c ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *,int *,scalar_t__ const,int ,long double,char,char) ;
 int FUNC_4 (int *,int *,char*,...) ;
 int FUNC_5 (int *,scalar_t__ const,long double*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (char*,int,char*,int) ;

int
FUNC_8(dtrace_hdl_t *VAR_1, FILE *VAR_2, const void *VAR_3,
    size_t VAR_4, uint64_t VAR_5)
{
 const int64_t *VAR_6 = VAR_3;
 int VAR_7, VAR_8, VAR_9, VAR_10;
 uint64_t VAR_11;
 long double VAR_12 = 0;
 uint16_t VAR_13, VAR_14;
 char VAR_15 = 0, VAR_16 = 0;

 if (VAR_4 < sizeof (uint64_t))
  return (FUNC_6(VAR_1, VAR_0));

 VAR_11 = *VAR_6++;
 VAR_4 -= sizeof (uint64_t);

 VAR_10 = FUNC_0(VAR_11);
 VAR_13 = FUNC_2(VAR_11);
 VAR_14 = FUNC_1(VAR_11);

 VAR_8 = 0;
 VAR_9 = VAR_14 + 1;

 if (VAR_4 != sizeof (uint64_t) * (VAR_14 + 2))
  return (FUNC_6(VAR_1, VAR_0));

 while (VAR_8 <= VAR_14 + 1 && VAR_6[VAR_8] == 0)
  VAR_8++;

 if (VAR_8 > VAR_14 + 1) {
  VAR_8 = 0;
  VAR_9 = 2;
 } else {
  if (VAR_8 > 0)
   VAR_8--;

  while (VAR_9 > 0 && VAR_6[VAR_9] == 0)
   VAR_9--;

  if (VAR_9 < VAR_14 + 1)
   VAR_9++;
 }

 for (VAR_7 = VAR_8; VAR_7 <= VAR_9; VAR_7++) {
  VAR_15 |= (VAR_6[VAR_7] > 0);
  VAR_16 |= (VAR_6[VAR_7] < 0);
  FUNC_5(VAR_1, VAR_6[VAR_7], &VAR_12);
 }

 if (FUNC_4(VAR_1, VAR_2, "\n%16s %41s %-9s\n", "value",
     "------------- Distribution -------------", "count") < 0)
  return (-1);

 for (VAR_7 = VAR_8; VAR_7 <= VAR_9; VAR_7++) {
  char VAR_17[32];
  int VAR_18;

  if (VAR_7 == 0) {
   (void) FUNC_7(VAR_17, sizeof (VAR_17), "< %d", VAR_10);
   VAR_18 = FUNC_4(VAR_1, VAR_2, "%16s ", VAR_17);
  } else if (VAR_7 == VAR_14 + 1) {
   (void) FUNC_7(VAR_17, sizeof (VAR_17), ">= %d",
       VAR_10 + (VAR_14 * VAR_13));
   VAR_18 = FUNC_4(VAR_1, VAR_2, "%16s ", VAR_17);
  } else {
   VAR_18 = FUNC_4(VAR_1, VAR_2, "%16d ",
       VAR_10 + (VAR_7 - 1) * VAR_13);
  }

  if (VAR_18 < 0 || FUNC_3(VAR_1, VAR_2, VAR_6[VAR_7], VAR_5,
      VAR_12, VAR_15, VAR_16) < 0)
   return (-1);
 }

 return (0);
}
