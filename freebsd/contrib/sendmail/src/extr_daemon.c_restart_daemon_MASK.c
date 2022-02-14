
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigfunc_t ;
typedef int ARGV_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 char* VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_20 ;
 char** VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_23 ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (int,int,int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;
 int FUNC_10 (scalar_t__,int) ;
 char* FUNC_11 (int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ,char*,...) ;

void
FUNC_14()
{
 bool VAR_24;
 int VAR_25;
 char *VAR_26;
 sigfunc_t VAR_27, VAR_28, VAR_29;
 extern int VAR_30;


 FUNC_9();
 FUNC_8(1);

 VAR_26 = VAR_11;
 VAR_11 = ((void*)0);
 VAR_9 = 0;

 if (VAR_21[0][0] != '/')
 {
  if (VAR_7 > 3)
   FUNC_13(VAR_6, VAR_8,
      "could not restart: need full path");
  FUNC_6(0, 1, VAR_3);

 }
 if (VAR_7 > 3)
  FUNC_13(VAR_6, VAR_8, "restarting %s due to %s",
     VAR_21[0],
     VAR_26 == ((void*)0) ? "implicit call" : VAR_26);

 FUNC_3(1);





 FUNC_2();
 VAR_24 = !(VAR_22 && VAR_12 != 0 &&
   (VAR_10 == 0 || VAR_10 == VAR_12));

 if (FUNC_4(VAR_24) != VAR_1)
 {
  if (VAR_7 > 0)
   FUNC_13(VAR_5, VAR_8,
      "could not drop privileges: %s",
      FUNC_11(VAR_23));
  FUNC_6(0, 1, VAR_2);

 }

 FUNC_10(VAR_20 + 1, VAR_30);
 FUNC_0(VAR_13, VAR_28);
 FUNC_0(VAR_14, VAR_27);
 FUNC_0(VAR_15, VAR_27);
 FUNC_0(VAR_16, VAR_27);
 FUNC_0(VAR_17, VAR_27);
 FUNC_0(VAR_18, VAR_27);





 FUNC_8(0);

 (void) FUNC_5(VAR_21[0], (ARGV_T) VAR_21, (ARGV_T) VAR_4);
 VAR_25 = VAR_23;


 FUNC_8(1);


 (void) FUNC_12(VAR_13, VAR_28);






 VAR_23 = VAR_25;
 if (VAR_7 > 0)
  FUNC_13(VAR_5, VAR_8, "could not exec %s: %s",
     VAR_21[0], FUNC_11(VAR_23));
 FUNC_6(0, 1, VAR_3);

}
