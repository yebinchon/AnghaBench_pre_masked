
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_2 (char*,int,char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,char*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_9 (char*,char**) ;
 scalar_t__ FUNC_10 (int ,scalar_t__,int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (int,char*) ;
 scalar_t__ FUNC_12 (int *,int *) ;
 int FUNC_13 (int,char*,...) ;
 scalar_t__ VAR_10 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,char*) ;
 scalar_t__ VAR_11 ;

void
FUNC_16(char *VAR_12, char *VAR_13, int VAR_14)
{
 int VAR_15;
 FILE *VAR_16, *VAR_17;
 int (*VAR_18)(FILE *);

 if (*VAR_13 == 'a') {
  if (VAR_14) {

   FUNC_15(VAR_1, "Internal: unique flag to APPE");
   VAR_14 = 0;
  }
  if (VAR_7 && VAR_8) {
   FUNC_13(550, "Appending to existing file denied.");
   goto err;
  }
  VAR_10 = 0;
 }
 if (VAR_14)
  VAR_10 = 0;
 if (VAR_7 && VAR_8) {
  if (VAR_10) {
   FUNC_13(550, "Modifying existing file denied.");
   goto err;
  } else
   VAR_14 = 1;
 }

 if (VAR_10)
  VAR_13 = "r+";
 if (VAR_14) {
  if ((VAR_15 = FUNC_9(VAR_12, &VAR_12)) < 0)
   goto err;
  VAR_16 = FUNC_4(VAR_15, VAR_13);
 } else
  VAR_16 = FUNC_6(VAR_12, VAR_13);
 VAR_18 = FUNC_3;
 if (VAR_16 == ((void*)0)) {
  FUNC_11(553, VAR_12);
  goto err;
 }
 VAR_5 = -1;
 if (VAR_10) {
  if (VAR_11 == VAR_4) {
   off_t VAR_19, VAR_20;
   int VAR_21;

   VAR_20 = VAR_10;
   VAR_19 = 0;
   while (VAR_19++ < VAR_20) {
    if ((VAR_21=FUNC_8(VAR_16)) == VAR_0) {
     FUNC_11(550, VAR_12);
     goto done;
    }
    if (VAR_21 == '\n')
     VAR_19++;
   }





   if (FUNC_7(VAR_16, 0, VAR_3) < 0) {
    FUNC_11(550, VAR_12);
    goto done;
   }
  } else if (FUNC_10(FUNC_5(VAR_16), VAR_10, VAR_2) < 0) {
   FUNC_11(550, VAR_12);
   goto done;
  }
 }
 VAR_17 = FUNC_2(VAR_12, -1, "r");
 if (VAR_17 == ((void*)0))
  goto done;
 if (FUNC_12(VAR_17, VAR_16) == 0) {
  if (VAR_14)
   FUNC_13(226, "Transfer complete (unique file name:%s).",
       VAR_12);
  else
   FUNC_13(226, "Transfer complete.");
 }
 (void) FUNC_3(VAR_17);
 VAR_6 = -1;
 VAR_9 = -1;
done:
 FUNC_0(*VAR_13 == 'a' ? "append" : "put", VAR_12, VAR_5);
 (*VAR_18)(VAR_16);
 return;
err:
 FUNC_1(*VAR_13 == 'a' ? "append" : "put" , VAR_12);
 return;
}
