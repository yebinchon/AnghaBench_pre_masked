
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int,int *) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_3 (int,char*,int,int) ;
 int FUNC_4 (char*,unsigned long long) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_5(int VAR_5, off_t VAR_6, off_t VAR_7, char *VAR_8,
    const char *VAR_9, const char *VAR_10, FILE *VAR_11)
{
 int VAR_12, VAR_13, VAR_14;
 off_t VAR_15, VAR_16;

 VAR_16 = VAR_6;
 VAR_15 = 0;
 VAR_14 = 512;
 if ((VAR_6 % VAR_14) != 0) {
  FUNC_2(VAR_0, "textdump uneven multiple of 512 on %s",
      VAR_9);
  VAR_2++;
  return (-1);
 }
 while (VAR_6 > 0) {
  VAR_12 = FUNC_3(VAR_5, VAR_8, VAR_14, VAR_7 - (VAR_16 - VAR_6) - VAR_14);
  if (VAR_12 != VAR_14) {
   if (VAR_12 == 0)
    FUNC_2(VAR_1,
        "WARNING: EOF on dump device");
   else
    FUNC_2(VAR_0, "read error on %s: %m", VAR_9);
   VAR_2++;
   return (-1);
  }
  VAR_13 = FUNC_1(VAR_8, 1, VAR_14, VAR_11);
  if (VAR_13 != VAR_14) {
   FUNC_2(VAR_0,
       "write error on %s file: %m", VAR_10);
   FUNC_2(VAR_1,
       "WARNING: textdump may be incomplete");
   VAR_2++;
   return (-1);
  }
  if (VAR_4) {
   VAR_15 += VAR_14;
   FUNC_4("%llu\r", (unsigned long long)VAR_15);
   FUNC_0(VAR_3);
  }
  VAR_6 -= VAR_14;
 }
 return (0);
}
