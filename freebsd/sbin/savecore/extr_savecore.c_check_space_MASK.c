
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int f_bsize; scalar_t__ f_bfree; scalar_t__ f_bavail; } ;
typedef int off_t ;
typedef scalar_t__ intmax_t ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 scalar_t__ FUNC_3 (int,struct statfs*) ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (int ,char*,...) ;
 scalar_t__ FUNC_6 (int,int) ;
 int FUNC_7 (char*,char**,int) ;
 int * FUNC_8 (int,char*,int ,char*) ;

__attribute__((used)) static int
FUNC_9(const char *VAR_4, int VAR_5, off_t VAR_6, int VAR_7)
{
 char VAR_8[100];
 struct statfs VAR_9;
 FILE *VAR_10;
 off_t VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

 if (FUNC_3(VAR_5, &VAR_9) < 0) {
  FUNC_5(VAR_0, "%s: %m", VAR_4);
  FUNC_0(1);
 }
 VAR_13 = ((off_t) VAR_9.f_bavail * VAR_9.f_bsize) / 1024;
 VAR_14 = ((off_t) VAR_9.f_bfree * VAR_9.f_bsize) / 1024;

 if ((VAR_10 = FUNC_8(VAR_5, "minfree", VAR_2, "r")) == ((void*)0))
  VAR_12 = 0;
 else {
  if (FUNC_2(VAR_8, sizeof(VAR_8), VAR_10) == ((void*)0))
   VAR_12 = 0;
  else {
   char *VAR_16;

   VAR_3 = 0;
   VAR_12 = FUNC_7(VAR_8, &VAR_16, 10);
   if (VAR_12 == 0 && VAR_3 != 0)
    VAR_12 = -1;
   else {
    while (*VAR_16 != '\0' && FUNC_4(*VAR_16))
     VAR_16++;
    if (*VAR_16 != '\0' || VAR_12 < 0)
     VAR_12 = -1;
   }
   if (VAR_12 < 0)
    FUNC_5(VAR_1,
        "`minfree` didn't contain a valid size "
        "(`%s`). Defaulting to 0", VAR_8);
  }
  (void)FUNC_1(VAR_10);
 }

 VAR_11 = VAR_12 > 0 ? VAR_13 - VAR_12 : VAR_14;
 VAR_15 = VAR_6 / 1024 + 2;
 VAR_15 -= FUNC_6(VAR_5, VAR_7);
 if (VAR_11 < VAR_15) {
  FUNC_5(VAR_1,
      "no dump: not enough free space on device (need at least "
      "%jdkB for dump; %jdkB available; %jdkB reserved)",
      (intmax_t)VAR_15,
      (intmax_t)VAR_11 + VAR_12,
      (intmax_t)VAR_12);
  return (0);
 }
 if (VAR_13 - VAR_15 < 0)
  FUNC_5(VAR_1,
      "dump performed, but free space threshold crossed");
 return (1);
}
