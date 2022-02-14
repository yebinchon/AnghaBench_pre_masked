
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 () ;
 char* VAR_6 ;
 int * VAR_7 ;
 int FUNC_6 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_11 ;
 int * VAR_12 ;
 char* FUNC_9 (char*,char) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int * FUNC_11 (char*) ;
 char* FUNC_12 (int ) ;
 int * VAR_13 ;

void
FUNC_13(char *VAR_14, int VAR_15)
{
 FUNC_0();
 if (VAR_4)
  FUNC_6(VAR_8);
 else
  FUNC_6(FUNC_1(VAR_1, VAR_0));
 VAR_13 = VAR_12;

 if (VAR_15)
  VAR_9++;
 else
 if (FUNC_10(VAR_14, "-") == 0) {




  VAR_13 = FUNC_3(VAR_3, "r");
  if (VAR_13 == ((void*)0)) {
   (void)FUNC_4(VAR_11, "cannot open %s: %s\n",
       VAR_3, FUNC_12(VAR_5));
   VAR_13 = FUNC_3(VAR_2, "r");
   if (VAR_13 == ((void*)0)) {
    (void)FUNC_4(VAR_11, "cannot open %s: %s\n",
        VAR_2, FUNC_12(VAR_5));
    FUNC_2(1);
   }
  }
  VAR_10++;
 }

 if (FUNC_8(FUNC_5()) != 0) {
  FUNC_4(VAR_11, "setuid failed\n");
  FUNC_2(1);
 }
 VAR_7 = FUNC_11(VAR_14);
 if (VAR_7 == ((void*)0)) {
  FUNC_4(VAR_11, "Cannot allocate space for magtape buffer\n");
  FUNC_2(1);
 }
}
