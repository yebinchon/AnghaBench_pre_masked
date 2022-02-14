
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stackmark {int dummy; } ;
struct TYPE_3__ {int loc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int FUNC_4 () ;
 TYPE_1__* VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 char* FUNC_7 (char*) ;
 TYPE_1__ VAR_11 ;
 int * VAR_12 ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct stackmark*) ;
 scalar_t__ VAR_13 ;
 int FUNC_11 (int,char**) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (char*) ;
 int FUNC_14 () ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (struct stackmark*) ;
 scalar_t__ VAR_16 ;
 int FUNC_18 (char**) ;
 int FUNC_19 (char*) ;

int
FUNC_20(int VAR_17, char *VAR_18[])
{
 struct stackmark VAR_19, VAR_20;
 volatile int VAR_21;
 char *VAR_22;

 (void) FUNC_16(VAR_6, "");
 FUNC_5();
 VAR_21 = 0;
 if (FUNC_15(VAR_11.loc)) {
  if (VAR_21 == 0 || VAR_10 == 0 || ! VAR_15 ||
      VAR_7 == VAR_1)
   FUNC_3(VAR_8);
  FUNC_14();
  if (VAR_7 == VAR_2)
   FUNC_9("\n");
  FUNC_10(&VAR_19);
  VAR_3;
  if (VAR_21 == 1)
   goto state1;
  else if (VAR_21 == 2)
   goto state2;
  else if (VAR_21 == 3)
   goto state3;
  else
   goto state4;
 }
 VAR_9 = &VAR_11;




 VAR_14 = FUNC_4();
 VAR_15 = 1;
 VAR_4;
 FUNC_6();
 FUNC_17(&VAR_19);
 FUNC_17(&VAR_20);
 FUNC_11(VAR_17, VAR_18);
 FUNC_12(VAR_10);
 VAR_5;
 if (VAR_10)
  FUNC_0(1);
 if (VAR_18[0] && VAR_18[0][0] == '-') {
  VAR_21 = 1;
  FUNC_13("/etc/profile");
state1:
  VAR_21 = 2;
  if (VAR_13 == 0)
   FUNC_13("${HOME-}/.profile");
  else
   FUNC_13("/etc/suid_profile");
 }
state2:
 VAR_21 = 3;
 if (!VAR_13 && VAR_10) {
  if ((VAR_22 = FUNC_7("ENV")) != ((void*)0) && *VAR_22 != '\0') {
   VAR_21 = 3;
   FUNC_13(VAR_22);
  }
 }
state3:
 VAR_21 = 4;
 FUNC_10(&VAR_20);
 if (VAR_12) {
  FUNC_2(VAR_12, VAR_16 ? 0 : VAR_0);
 }
state4:
 if (VAR_16 || VAR_12 == ((void*)0)) {
  FUNC_1(1);
 }
 FUNC_3(VAR_8);

 return 0;
}
