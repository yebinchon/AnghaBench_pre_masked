
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef scalar_t__ off_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_2 (char*,scalar_t__,char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (int *,long,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_6 ;
 char* FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int ,scalar_t__,int ) ;
 int VAR_7 ;
 int FUNC_11 (int,char*) ;
 scalar_t__ FUNC_12 (int *,int *) ;
 int FUNC_13 (int,char*,...) ;
 scalar_t__ VAR_8 ;
 int FUNC_14 (int ,int) ;
 scalar_t__ FUNC_15 (char*,struct stat*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ VAR_9 ;

void
FUNC_18(char *VAR_10, char *VAR_11, int VAR_12)
{
 FILE *VAR_13, *VAR_14;
 struct stat VAR_15;
 int (*VAR_16) (FILE *);

 if(VAR_6 && FUNC_4(VAR_10))
     return;
 if (VAR_12) {
     char *VAR_17;
     if (FUNC_15(VAR_10, &VAR_15) == 0) {
  if ((VAR_17 = FUNC_9(VAR_10)) == ((void*)0))
      return;
  VAR_10 = VAR_17;
     }
     FUNC_1(*VAR_11 == 'w' ? "put" : "append", VAR_10);
 }

 if (VAR_8)
  VAR_11 = "r+";
 VAR_13 = FUNC_6(VAR_10, VAR_11);
 VAR_16 = FUNC_3;
 if (VAR_13 == ((void*)0)) {
  FUNC_11(553, VAR_10);
  FUNC_1(*VAR_11 == 'w' ? "put" : "append", VAR_10);
  return;
 }
 VAR_4 = -1;
 if (VAR_8) {
  if (VAR_9 == VAR_3) {
   off_t VAR_18, VAR_19;
   int VAR_20;

   VAR_19 = VAR_8;
   VAR_18 = 0;
   while (VAR_18++ < VAR_19) {
    if ((VAR_20=FUNC_8(VAR_13)) == VAR_0) {
     FUNC_11(550, VAR_10);
     goto done;
    }
    if (VAR_20 == '\n')
     VAR_18++;
   }





   if (FUNC_7(VAR_13, 0L, VAR_1) < 0) {
    FUNC_11(550, VAR_10);
    goto done;
   }
  } else if (FUNC_10(FUNC_5(VAR_13), VAR_8, VAR_2) < 0) {
   FUNC_11(550, VAR_10);
   goto done;
  }
 }
 VAR_14 = FUNC_2(VAR_10, (off_t)-1, "r");
 if (VAR_14 == ((void*)0))
  goto done;
 FUNC_14(FUNC_5(VAR_14), 1);
 if (FUNC_12(VAR_14, VAR_13) == 0) {
     if((*VAR_16)(VAR_13) < 0)
  FUNC_11(552, VAR_10);
     else {
  if (VAR_12)
   FUNC_13(226, "Transfer complete (unique file name:%s).",
       VAR_10);
  else
   FUNC_13(226, "Transfer complete.");
     }
 } else
     (*VAR_16)(VAR_13);
 FUNC_3(VAR_14);
 VAR_5 = -1;
 VAR_7 = -1;
done:
 FUNC_0(*VAR_11 == 'w' ? "put" : "append", VAR_10, VAR_4);
}
