
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct stat {int st_size; int st_blksize; int st_mode; } ;
typedef scalar_t__ off_t ;
typedef int line ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_4 (char*,int,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (int ,struct stat*) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (char*,char*) ;
 int FUNC_11 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_12 (char*,int,int ) ;
 scalar_t__ FUNC_13 (int ,scalar_t__,int ) ;
 int VAR_8 ;
 int FUNC_14 (int,char*) ;
 int FUNC_15 (int,char*,char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_16 (int *,int *,int,int,int) ;
 int FUNC_17 (char*,int,char*,char*) ;
 scalar_t__ VAR_10 ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 scalar_t__ VAR_11 ;

void
FUNC_20(char *VAR_12, char *VAR_13)
{
 FILE *VAR_14, *VAR_15;
 struct stat VAR_16;
 int (*VAR_17)(FILE *);
 time_t VAR_18;
 char VAR_19[VAR_0];

 if (VAR_12 == 0) {
  VAR_14 = FUNC_7(VAR_13, "r"), VAR_17 = FUNC_5;
  VAR_16.st_size = 0;
 } else {
  (void) FUNC_17(VAR_19, sizeof(VAR_19), VAR_12, VAR_13);
  VAR_13 = VAR_19;
  VAR_14 = FUNC_10(VAR_19, "r"), VAR_17 = FUNC_9;
  VAR_16.st_size = -1;
  VAR_16.st_blksize = VAR_0;
 }
 if (VAR_14 == ((void*)0)) {
  if (VAR_6 != 0) {
   FUNC_14(550, VAR_13);
   if (VAR_12 == 0) {
    FUNC_1("get", VAR_13);
   }
  }
  return;
 }
 VAR_4 = -1;
 if (VAR_12 == 0) {
  if (FUNC_8(FUNC_6(VAR_14), &VAR_16) < 0) {
   FUNC_14(550, VAR_13);
   goto done;
  }
  if (!FUNC_3(VAR_16.st_mode)) {







   if (FUNC_2(VAR_16.st_mode) || VAR_7) {
    FUNC_15(550, "%s: not a plain file.", VAR_13);
    goto done;
   }
   VAR_16.st_size = -1;

  }
 }
 if (VAR_9) {
  if (VAR_11 == VAR_3) {
   off_t VAR_20, VAR_21;
   int VAR_22;

   VAR_21 = VAR_9;
   VAR_20 = 0;
   while (VAR_20++ < VAR_21) {
    if ((VAR_22=FUNC_11(VAR_14)) == VAR_1) {
     FUNC_14(550, VAR_13);
     goto done;
    }
    if (VAR_22 == '\n')
     VAR_20++;
   }
  } else if (FUNC_13(FUNC_6(VAR_14), VAR_9, VAR_2) < 0) {
   FUNC_14(550, VAR_13);
   goto done;
  }
 }
 VAR_15 = FUNC_4(VAR_13, VAR_16.st_size, "w");
 if (VAR_15 == ((void*)0))
  goto done;
 FUNC_19(&VAR_18);
 FUNC_16(VAR_14, VAR_15, VAR_16.st_blksize, VAR_16.st_size,
    VAR_9 == 0 && VAR_12 == 0 && FUNC_3(VAR_16.st_mode));
 if (VAR_12 == 0 && VAR_7 && VAR_10 && VAR_4 > 0)
  FUNC_12(VAR_13, VAR_4, VAR_18);
 (void) FUNC_5(VAR_15);
 VAR_5 = -1;
 VAR_8 = -1;
done:
 if (VAR_12 == 0)
  FUNC_0("get", VAR_13, VAR_4);
 (*VAR_17)(VAR_14);
}
