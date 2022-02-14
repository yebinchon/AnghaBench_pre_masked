
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ufs2_daddr_t ;
typedef int off_t ;
typedef int intmax_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int ,size_t) ;
 int FUNC_2 (char*,long) ;
 int FUNC_3 (int,char*,int,int) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (char*,int) ;
 int VAR_5 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

int
FUNC_8(int VAR_8, char *VAR_9, ufs2_daddr_t VAR_10, long VAR_11)
{
 char *VAR_12;
 int VAR_13, VAR_14;
 off_t VAR_15;

 VAR_15 = VAR_10;
 VAR_15 *= VAR_2;
 if (VAR_1)
  FUNC_7();
 VAR_7++;
 VAR_3++;
 if (FUNC_3(VAR_8, VAR_9, (int)VAR_11, VAR_15) == VAR_11) {
  if (VAR_1)
   FUNC_6();
  return (0);
 }






 if (VAR_6) {
  FUNC_2("CANNOT READ_BLK: %ld", (long)VAR_10);
  FUNC_0(VAR_0, "ABORTING DUE TO READ ERRORS");
 } else
  FUNC_5("READ BLK", VAR_10);

 VAR_14 = 0;
 FUNC_1(VAR_9, 0, (size_t)VAR_11);
 FUNC_4("THE FOLLOWING DISK SECTORS COULD NOT BE READ:");
 for (VAR_12 = VAR_9, VAR_13 = 0; VAR_13 < VAR_11; VAR_13 += VAR_5, VAR_12 += VAR_5) {
  if (FUNC_3(VAR_8, VAR_12, (int)VAR_5, VAR_15 + VAR_13) != VAR_5) {
   if (VAR_5 != VAR_2 && VAR_2 != 1)
    FUNC_4(" %jd (%jd),",
        (intmax_t)(VAR_10 * VAR_2 + VAR_13) / VAR_5,
        (intmax_t)VAR_10 + VAR_13 / VAR_2);
   else
    FUNC_4(" %jd,", (intmax_t)VAR_10 + VAR_13 / VAR_2);
   VAR_14++;
  }
 }
 FUNC_4("\n");
 if (VAR_14)
  VAR_4 = 0;
 return (VAR_14);
}
