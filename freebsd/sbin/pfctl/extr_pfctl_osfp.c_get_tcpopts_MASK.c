
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pf_tcpopts_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,char const*,int,char const,...) ;
 int FUNC_1 (char const) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const) ;

int
FUNC_4(const char *VAR_10, int VAR_11, const char *VAR_12,
    pf_tcpopts_t *VAR_13, int *VAR_14, int *VAR_15, int *VAR_16, int *VAR_17,
    int *VAR_18, int *VAR_19)
{
 int VAR_20, VAR_21;

 *VAR_13 = 0;
 *VAR_14 = 0;
 *VAR_17 = 0;
 *VAR_18 = VAR_7;
 *VAR_15 = 0;
 *VAR_16 = VAR_7;
 *VAR_19 = 0;
 if (FUNC_2(VAR_12, ".") == 0)
  return (0);

 for (VAR_20 = 0; VAR_12[VAR_20] && *VAR_14 < VAR_0;) {
  switch ((VAR_21 = FUNC_3(VAR_12[VAR_20++]))) {
  case 'N':
  case 'S':
   *VAR_13 = (*VAR_13 << VAR_1) |
       (VAR_21 == 'N' ? VAR_3 :
       VAR_4);
   break;
  case 'W':
  case 'M': {
   int *VAR_22, *VAR_23;

   if (VAR_21 == 'W') {
    VAR_23 = VAR_17;
    VAR_22 = VAR_18;
   } else {
    VAR_23 = VAR_15;
    VAR_22 = VAR_16;
   }
   *VAR_23 = 0;
   *VAR_22 = 0;

   *VAR_13 = (*VAR_13 << VAR_1) |
       (VAR_21 == 'W' ? VAR_6 :
       VAR_2);
   if (VAR_12[VAR_20] == '*' && (VAR_12[VAR_20 + 1] == '\0' ||
       VAR_12[VAR_20 + 1] == ',')) {
    *VAR_22 = VAR_7;
    VAR_20++;
    break;
   }

   if (VAR_12[VAR_20] == '%') {
    *VAR_22 = VAR_8;
    VAR_20++;
   }
   do {
    if (!FUNC_1(VAR_12[VAR_20])) {
     FUNC_0(VAR_9, "%s:%d unknown "
         "character '%c' in %c TCP opt\n",
         VAR_10, VAR_11, VAR_12[VAR_20], VAR_21);
     return (1);
    }
    *VAR_23 = (*VAR_23 * 10) + VAR_12[VAR_20++] - '0';
   } while(VAR_12[VAR_20] != ',' && VAR_12[VAR_20] != '\0');
   break;
  }
  case 'T':
   if (VAR_12[VAR_20] == '0') {
    *VAR_19 = 1;
    VAR_20++;
   }
   *VAR_13 = (*VAR_13 << VAR_1) |
       VAR_5;
   break;
  }
  (*VAR_14) ++;
  if (VAR_12[VAR_20] == '\0')
   break;
  if (VAR_12[VAR_20] != ',') {
   FUNC_0(VAR_9, "%s:%d unknown option to %c TCP opt\n",
       VAR_10, VAR_11, VAR_21);
   return (1);
  }
  VAR_20++;
 }

 return (0);
}
