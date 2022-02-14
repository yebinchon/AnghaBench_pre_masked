
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int off_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (char*,int,int,int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_7 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_6 (int,int ) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int
FUNC_7(int VAR_10, off_t VAR_11, u_int VAR_12, bool VAR_13, char *VAR_14,
    const char *VAR_15, const char *VAR_16, FILE *VAR_17)
{
 int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 off_t VAR_23, VAR_24;

 VAR_23 = 0;
 VAR_24 = VAR_11;
 VAR_18 = 0;
 while (VAR_11 > 0) {
  VAR_22 = VAR_2;
  if (VAR_22 > VAR_11)
   VAR_22 = VAR_11;
  VAR_20 = FUNC_5(VAR_10, VAR_14, FUNC_6(VAR_22, VAR_12));
  if (VAR_20 != (int)FUNC_6(VAR_22, VAR_12)) {
   if (VAR_20 == 0)
    FUNC_3(VAR_4,
        "WARNING: EOF on dump device");
   else
    FUNC_3(VAR_3, "read error on %s: %m", VAR_15);
   VAR_7++;
   return (-1);
  }
  if (!VAR_13) {
   VAR_21 = FUNC_2(VAR_14, 1, VAR_22, VAR_17);
  } else {
   for (VAR_21 = 0; VAR_21 < VAR_20; VAR_21 = VAR_18) {

    for (VAR_19 = VAR_21; VAR_19 < VAR_20; VAR_19 += VAR_1) {
     for (VAR_18 = VAR_19; VAR_18 < VAR_20 && VAR_14[VAR_18] == 0;
         ++VAR_18)
                    ;

     if (VAR_18 >= VAR_19 + VAR_1)
      break;
    }


    VAR_18 &= VAR_0;







    if (VAR_19 + VAR_1 > VAR_20)
     VAR_19 = VAR_18 = VAR_20;







    if (VAR_19 > VAR_21)
     if (FUNC_2(VAR_14 + VAR_21, VAR_19 - VAR_21, 1, VAR_17)
         != 1)
     break;
    if (VAR_18 > VAR_19)
     if (FUNC_1(VAR_17, VAR_18 - VAR_19, VAR_5) == -1)
      break;
   }
  }
  if (VAR_21 != VAR_22) {
   FUNC_3(VAR_3,
       "write error on %s file: %m", VAR_16);
   FUNC_3(VAR_4,
       "WARNING: vmcore may be incomplete");
   VAR_7++;
   return (-1);
  }
  if (VAR_9) {
   VAR_23 += VAR_22;
   FUNC_4("%llu\r", (unsigned long long)VAR_23);
   FUNC_0(VAR_8);
  }
  VAR_11 -= VAR_22;
  if (VAR_6) {
   FUNC_4("%s %.1lf%%\n", VAR_16, (100.0 - (100.0 *
       (double)VAR_11 / (double)VAR_24)));
   VAR_6 = 0;
  }
 }
 return (0);
}
