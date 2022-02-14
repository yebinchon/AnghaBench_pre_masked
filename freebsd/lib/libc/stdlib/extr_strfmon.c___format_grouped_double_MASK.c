
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lconv {char* mon_grouping; char* mon_decimal_point; char* decimal_point; char* mon_thousands_sep; char* thousands_sep; int int_frac_digits; int frac_digits; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char**,char*,int,int,double) ;
 char* FUNC_2 (int,size_t) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int,char*) ;
 struct lconv* FUNC_5 () ;
 int FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (char*,char*,size_t) ;
 int FUNC_8 (char*,int,int) ;
 size_t FUNC_9 (char const*) ;

__attribute__((used)) static char *
FUNC_10(double VAR_4, int *VAR_5,
   int VAR_6, int VAR_7, int VAR_8) {

 char *VAR_9;
 char *VAR_10;
 int VAR_11;

 size_t VAR_12;
 char *VAR_13;

 int VAR_14;

 struct lconv *VAR_15 = FUNC_5();
 char *VAR_16;
 const char *VAR_17;
 const char *VAR_18;
 size_t VAR_19;
 size_t VAR_20;

 int VAR_21 = 0;

 VAR_16 = VAR_15->mon_grouping;
 VAR_17 = VAR_15->mon_decimal_point;
 if (*VAR_17 == '\0')
  VAR_17 = VAR_15->decimal_point;
 VAR_18 = VAR_15->mon_thousands_sep;
 if (*VAR_18 == '\0')
  VAR_18 = VAR_15->thousands_sep;

 VAR_19 = FUNC_9(VAR_17);
 VAR_20 = FUNC_9(VAR_18);


 if (VAR_6 == -1)
  VAR_6 = 0;


 if (VAR_7 == -1) {
                if (*VAR_5 & VAR_3)
                        VAR_7 = VAR_15->int_frac_digits;
                else
                        VAR_7 = VAR_15->frac_digits;

  if (VAR_7 == VAR_0)
   VAR_7 = 2;
 }

 if (*VAR_5 & VAR_2)
  VAR_6 += FUNC_4(VAR_6, VAR_16);


 VAR_11 = FUNC_1(&VAR_10, "%*.*f", VAR_6 + VAR_7 + 1,
     VAR_7, VAR_4);
 if (VAR_11 < 0)
  return (((void*)0));


 VAR_12 = VAR_11 * (1 + VAR_20) + VAR_19 +
     1;
 VAR_9 = FUNC_2(1, VAR_12);
 if (VAR_9 == ((void*)0)) {
  FUNC_3(VAR_10);
  return (((void*)0));
 }
 VAR_13 = VAR_9 + VAR_12 - 1;


 VAR_14 = 0;
 while (VAR_10[VAR_14] == ' ') {
  VAR_14++;
  VAR_11--;
 }

 if (VAR_7 > 0) {
  VAR_13 -= VAR_7;
  FUNC_6(VAR_13, VAR_10 + VAR_11+VAR_14-VAR_7,
      VAR_7);
  VAR_13 -= VAR_19;
  FUNC_6(VAR_13, VAR_17, VAR_19);
  VAR_11 -= (VAR_7 + 1);
 }

 if ((*VAR_5 & VAR_2) &&
     VAR_20 > 0 &&
     *VAR_16 != VAR_0 &&
     *VAR_16 > 0) {
  while (VAR_11 > (int)*VAR_16) {
   FUNC_0(*VAR_16);
   VAR_1;
   VAR_16++;


   if (*VAR_16 == VAR_0)
    break;


   if (*VAR_16 == 0) {
    VAR_16--;
    while (VAR_11 > *VAR_16) {
     FUNC_0(*VAR_16);
     VAR_1;
    }
   }
  }
  if (VAR_11 != 0)
   FUNC_0(VAR_11);
  VAR_14 -= VAR_21;

 } else {
  VAR_13 -= VAR_11;
  FUNC_6(VAR_13, VAR_10+VAR_14, VAR_11);

  if (VAR_7 == 0)
   VAR_14 -= VAR_19;
 }


 if (VAR_14 > 0) {
  VAR_13 -= VAR_14;
  FUNC_8(VAR_13, VAR_8, VAR_14);
 }

 VAR_12 = VAR_12 - (VAR_13 - VAR_9) + 1;
 FUNC_7(VAR_9, VAR_13, VAR_12);
 FUNC_3(VAR_10);
 return (VAR_9);
}
