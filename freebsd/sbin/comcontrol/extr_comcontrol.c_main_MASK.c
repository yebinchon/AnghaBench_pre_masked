
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (int,int ,int*) ;
 int FUNC_3 (char) ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,...) ;

int
FUNC_9(int VAR_9, char *VAR_10[])
{
 int VAR_11;
 int VAR_12 = 0;
 int VAR_13 = 1, VAR_14 = 1;
 int VAR_15 = -1, VAR_16 = -1;

 if (VAR_9 < 2)
  FUNC_7();

 if (FUNC_6(VAR_10[1], "-") == 0)
  VAR_11 = VAR_3;
 else {
  VAR_11 = FUNC_4(VAR_10[1], VAR_2|VAR_1, 0);
  if (VAR_11 < 0) {
   FUNC_8("couldn't open file %s", VAR_10[1]);
   return 1;
  }
 }
 if (VAR_9 == 2) {
  if (FUNC_2(VAR_11, VAR_5, &VAR_15) < 0) {
   VAR_13 = 0;
   if (VAR_8 != VAR_0) {
    VAR_12 = 1;
    FUNC_8("TIOCMGDTRWAIT");
   }
  }
  if (FUNC_2(VAR_11, VAR_4, &VAR_16) < 0) {
   VAR_14 = 0;
   if (VAR_8 != VAR_0) {
    VAR_12 = 1;
    FUNC_8("TIOCGDRAINWAIT");
   }
  }
  if (VAR_13)
   FUNC_5("dtrwait %d ", VAR_15);
  if (VAR_14)
   FUNC_5("drainwait %d ", VAR_16);
  FUNC_5("\n");
 } else {
  while (VAR_10[2] != ((void*)0)) {
   if (!FUNC_6(VAR_10[2],"dtrwait")) {
    if (VAR_15 >= 0)
     FUNC_7();
    if (VAR_10[3] == ((void*)0) || !FUNC_3(VAR_10[3][0]))
     FUNC_7();
    VAR_15 = FUNC_0(VAR_10[3]);
    VAR_10 += 2;
   } else if (!FUNC_6(VAR_10[2],"drainwait")) {
    if (VAR_16 >= 0)
     FUNC_7();
    if (VAR_10[3] == ((void*)0) || !FUNC_3(VAR_10[3][0]))
     FUNC_7();
    VAR_16 = FUNC_0(VAR_10[3]);
    VAR_10 += 2;
   } else
    FUNC_7();
  }
  if (VAR_15 >= 0) {
   if (FUNC_2(VAR_11, VAR_6, &VAR_15) < 0) {
    VAR_12 = 1;
    FUNC_8("TIOCMSDTRWAIT");
   }
  }
  if (VAR_16 >= 0) {
   if (FUNC_2(VAR_11, VAR_7, &VAR_16) < 0) {
    VAR_12 = 1;
    FUNC_8("TIOCSDRAINWAIT");
   }
  }
 }

 FUNC_1(VAR_11);
 return VAR_12;
}
