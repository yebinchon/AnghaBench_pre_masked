
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
 int FUNC_3 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int *,scalar_t__ const,int ,long double,char,char) ;
 scalar_t__ FUNC_6 (int *,int *,char*,...) ;
 int FUNC_7 (int *,scalar_t__ const,long double*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (char*,int,char*,long long) ;

int
FUNC_10(dtrace_hdl_t *VAR_2, FILE *VAR_3, const void *VAR_4,
    size_t VAR_5, uint64_t VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10 = 1, VAR_11, VAR_12;
 uint16_t VAR_13, VAR_14, VAR_15, VAR_16;
 const int64_t *VAR_17 = VAR_4;
 int64_t VAR_18 = 1, VAR_19, VAR_20;
 char VAR_21 = 0, VAR_22 = 0;
 long double VAR_23 = 0;
 uint64_t VAR_24;
 char VAR_25[32];

 if (VAR_5 < sizeof (uint64_t))
  return (FUNC_8(VAR_2, VAR_0));

 VAR_24 = *VAR_17++;
 VAR_5 -= sizeof (uint64_t);

 VAR_13 = FUNC_0(VAR_24);
 VAR_14 = FUNC_2(VAR_24);
 VAR_15 = FUNC_1(VAR_24);
 VAR_16 = FUNC_3(VAR_24);





 if (VAR_5 > VAR_1 || VAR_13 < 2 || VAR_14 >= VAR_15 ||
     VAR_16 == 0 || VAR_13 > VAR_16)
  return (FUNC_8(VAR_2, VAR_0));

 VAR_12 = (int)VAR_5 / sizeof (uint64_t);

 VAR_8 = 0;
 VAR_9 = VAR_12 - 1;

 while (VAR_8 < VAR_12 && VAR_17[VAR_8] == 0)
  VAR_8++;

 if (VAR_8 == VAR_12) {
  VAR_8 = 0;
  VAR_9 = 1;
 } else {
  if (VAR_8 > 0)
   VAR_8--;

  while (VAR_9 > 0 && VAR_17[VAR_9] == 0)
   VAR_9--;

  if (VAR_9 < VAR_12 - 1)
   VAR_9++;
 }

 for (VAR_7 = VAR_8; VAR_7 <= VAR_9; VAR_7++) {
  VAR_21 |= (VAR_17[VAR_7] > 0);
  VAR_22 |= (VAR_17[VAR_7] < 0);
  FUNC_7(VAR_2, VAR_17[VAR_7], &VAR_23);
 }

 if (FUNC_6(VAR_2, VAR_3, "\n%16s %41s %-9s\n", "value",
     "------------- Distribution -------------", "count") < 0)
  return (-1);

 for (VAR_11 = 0; VAR_11 < VAR_14; VAR_11++)
  VAR_18 *= VAR_13;

 VAR_19 = VAR_18 * VAR_13;
 VAR_20 = VAR_19 > VAR_16 ? VAR_19 / VAR_16 : 1;

 if (VAR_8 == 0) {
  (void) FUNC_9(VAR_25, sizeof (VAR_25), "< %lld", (long long)VAR_18);

  if (FUNC_6(VAR_2, VAR_3, "%16s ", VAR_25) < 0)
   return (-1);

  if (FUNC_5(VAR_2, VAR_3, VAR_17[0], VAR_6,
      VAR_23, VAR_21, VAR_22) < 0)
   return (-1);
 }

 while (VAR_11 <= VAR_15) {
  if (VAR_10 >= VAR_8 && VAR_10 <= VAR_9) {
   if (FUNC_6(VAR_2, VAR_3, "%16lld ", (long long)VAR_18) < 0)
    return (-1);

   if (FUNC_5(VAR_2, VAR_3, VAR_17[VAR_10],
       VAR_6, VAR_23, VAR_21, VAR_22) < 0)
    return (-1);
  }

  FUNC_4(VAR_18 < VAR_19);
  VAR_10++;

  if ((VAR_18 += VAR_20) != VAR_19)
   continue;

  VAR_19 = VAR_18 * VAR_13;
  VAR_20 = VAR_19 > VAR_16 ? VAR_19 / VAR_16 : 1;
  VAR_11++;
 }

 if (VAR_9 < VAR_10)
  return (0);

 FUNC_4(VAR_9 == VAR_10);
 (void) FUNC_9(VAR_25, sizeof (VAR_25), ">= %lld", (long long)VAR_18);

 if (FUNC_6(VAR_2, VAR_3, "%16s ", VAR_25) < 0)
  return (-1);

 return (FUNC_5(VAR_2, VAR_3, VAR_17[VAR_10], VAR_6,
     VAR_23, VAR_21, VAR_22));
}
