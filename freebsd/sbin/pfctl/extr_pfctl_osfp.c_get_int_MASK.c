
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,char const*,int,...) ;
 char* FUNC_1 (char**,size_t*,int*) ;
 int VAR_4 ;

int
FUNC_2(char **VAR_5, size_t *VAR_6, int *VAR_7, int *VAR_8,
    const char *VAR_9, int VAR_10, int VAR_11, const char *VAR_12, int VAR_13)
{
 int VAR_14, VAR_15;
 char *VAR_16;
 long VAR_17 = 0;

 if (VAR_8)
  *VAR_8 = 0;
 *VAR_7 = 0;

 VAR_16 = FUNC_1(VAR_5, VAR_6, &VAR_14);
 if (VAR_16 == ((void*)0))
  return (1);
 if (VAR_14 == 0) {
  FUNC_0(VAR_4, "%s:%d empty %s\n", VAR_12, VAR_13, VAR_9);
  return (1);
 }

 VAR_15 = 0;
 if ((*VAR_16 == '%' || *VAR_16 == 'S' || *VAR_16 == 'T' || *VAR_16 == '*')
     && VAR_14 >= 1) {
  switch (*VAR_16) {
  case 'S':
   if (VAR_8 && (VAR_10 & VAR_2))
    *VAR_8 = VAR_2;
   if (VAR_14 == 1)
    return (0);
   break;
  case 'T':
   if (VAR_8 && (VAR_10 & VAR_3))
    *VAR_8 = VAR_3;
   if (VAR_14 == 1)
    return (0);
   break;
  case '*':
   if (VAR_14 != 1) {
    FUNC_0(VAR_4, "%s:%d long '%c' %s\n",
        VAR_12, VAR_13, *VAR_16, VAR_9);
    return (1);
   }
   if (VAR_8 && (VAR_10 & VAR_0)) {
    *VAR_8 = VAR_0;
    return (0);
   }
  case '%':
   if (VAR_8 && (VAR_10 & VAR_1))
    *VAR_8 = VAR_1;
   if (VAR_14 == 1) {
    FUNC_0(VAR_4, "%s:%d modulus %s must have a "
        "value\n", VAR_12, VAR_13, VAR_9);
    return (1);
   }
   break;
  }
  if (VAR_8 == ((void*)0) || *VAR_8 == 0) {
   FUNC_0(VAR_4, "%s:%d does not allow %c' %s\n",
       VAR_12, VAR_13, *VAR_16, VAR_9);
   return (1);
  }
  VAR_15++;
 }

 for (; VAR_15 < VAR_14; VAR_15++) {
  if (VAR_16[VAR_15] < '0' || VAR_16[VAR_15] > '9') {
   FUNC_0(VAR_4, "%s:%d non-digit character in %s\n",
       VAR_12, VAR_13, VAR_9);
   return (1);
  }
  VAR_17 = VAR_17 * 10 + VAR_16[VAR_15] - '0';
  if (VAR_17 < 0) {
   FUNC_0(VAR_4, "%s:%d %s overflowed\n", VAR_12,
       VAR_13, VAR_9);
   return (1);
  }
 }

 if (VAR_17 > VAR_11) {
  FUNC_0(VAR_4, "%s:%d %s value %ld > %d\n", VAR_12, VAR_13,
      VAR_9, VAR_17, VAR_11);
  return (1);
 }
 *VAR_7 = (int)VAR_17;

 return (0);
}
