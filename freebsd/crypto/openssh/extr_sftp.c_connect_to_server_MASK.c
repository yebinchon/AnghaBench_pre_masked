
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int VAR_13 ;
 int FUNC_3 (char*,char**) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char*,char*,...) ;
 int VAR_14 ;
 int FUNC_7 (int*) ;
 int VAR_15 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ,int*) ;
 int VAR_16 ;
 int VAR_17 ;
 char* FUNC_10 (int ) ;
 int VAR_18 ;

__attribute__((used)) static void
FUNC_11(char *VAR_19, char **VAR_20, int *VAR_21, int *VAR_22)
{
 int VAR_23, VAR_24;
 int VAR_25[2];

 if (FUNC_9(VAR_0, VAR_10, 0, VAR_25) == -1)
  FUNC_4("socketpair: %s", FUNC_10(VAR_13));
 *VAR_21 = *VAR_22 = VAR_25[0];
 VAR_23 = VAR_24 = VAR_25[1];


 if ((VAR_16 = FUNC_5()) == -1)
  FUNC_4("fork: %s", FUNC_10(VAR_13));
 else if (VAR_16 == 0) {
  if ((FUNC_2(VAR_23, VAR_11) == -1) ||
      (FUNC_2(VAR_24, VAR_12) == -1)) {
   FUNC_6(VAR_17, "dup2: %s\n", FUNC_10(VAR_13));
   FUNC_0(1);
  }
  FUNC_1(*VAR_21);
  FUNC_1(*VAR_22);
  FUNC_1(VAR_23);
  FUNC_1(VAR_24);
  FUNC_8(VAR_3, VAR_9);
  FUNC_8(VAR_4, VAR_8);
  FUNC_3(VAR_19, VAR_20);
  FUNC_6(VAR_17, "exec: %s: %s\n", VAR_19, FUNC_10(VAR_13));
  FUNC_0(1);
 }

 FUNC_8(VAR_4, VAR_14);
 FUNC_8(VAR_3, VAR_14);
 FUNC_8(VAR_2, VAR_14);
 FUNC_8(VAR_5, VAR_18);
 FUNC_8(VAR_6, VAR_18);
 FUNC_8(VAR_7, VAR_18);
 FUNC_8(VAR_1, VAR_15);
 FUNC_1(VAR_23);
 FUNC_1(VAR_24);
}
