
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_19__ {int c_iflag; void** c_cc; int c_lflag; } ;
struct TYPE_16__ {int c_iflag; } ;
struct TYPE_18__ {TYPE_4__ vi_enter; TYPE_1__ orig; int ti_te; } ;
struct TYPE_17__ {int * gp; } ;
typedef TYPE_2__ SCR ;
typedef int GS ;
typedef TYPE_3__ CL_PRIVATE ;


 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* FUNC_2 (TYPE_2__*,int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 void* VAR_25 ;
 int FUNC_4 (char*,char*,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int VAR_26 ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_27 ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (TYPE_2__*,int ,char*,...) ;
 int * FUNC_13 (char*,int ,int ) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 (TYPE_2__*,int ,int ) ;
 int FUNC_17 () ;
 int FUNC_18 (int *,TYPE_2__*) ;
 int FUNC_19 (int ,int ) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ FUNC_20 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_21 (int ,int,TYPE_4__*) ;
 int FUNC_22 (char*) ;

__attribute__((used)) static int
FUNC_23(SCR *VAR_31)
{
 CL_PRIVATE *VAR_32;
 GS *VAR_33;
 char *VAR_34, *VAR_35, *VAR_36, *VAR_37;

 VAR_33 = VAR_31->gp;
 VAR_32 = FUNC_0(VAR_31);


 if (FUNC_1(VAR_32, VAR_0))
  goto fast;


 if (!FUNC_1(VAR_32, VAR_1) || !FUNC_10(VAR_14)) {
  FUNC_12(VAR_31, VAR_6,
      "016|Vi's standard input and output must be a terminal");
  return (1);
 }


 if (FUNC_16(VAR_31, VAR_10, 0))
  return (1);
 VAR_37 = FUNC_2(VAR_31, VAR_10);
 VAR_36 = FUNC_8("TERM");
 FUNC_4("TERM", VAR_37, 0);
 VAR_35 = FUNC_8("LINES");
 FUNC_4("LINES", ((void*)0), (u_long)FUNC_3(VAR_31, VAR_9));
 VAR_34 = FUNC_8("COLUMNS");
 FUNC_4("COLUMNS", ((void*)0), (u_long)FUNC_3(VAR_31, VAR_8));





 (void)FUNC_7(VAR_26);





 VAR_27 = 0;
 if (FUNC_13(VAR_37, VAR_29, VAR_28) == ((void*)0)) {
  if (VAR_27)
   FUNC_12(VAR_31, VAR_7, "%s", VAR_37);
  else
   FUNC_12(VAR_31, VAR_6, "%s: unknown terminal type", VAR_37);
  return (1);
 }

 if (VAR_36 == ((void*)0))
  FUNC_22("TERM");
 if (VAR_35 == ((void*)0))
  FUNC_22("LINES");
 if (VAR_34 == ((void*)0))
  FUNC_22("COLUMNS");







 (void)FUNC_18(VAR_31->gp, VAR_31);
 FUNC_14();
 FUNC_15();
 FUNC_17();
 FUNC_9(VAR_30, 1);


 (void)FUNC_11(VAR_30, VAR_18);






 VAR_32->ti_te = VAR_17;
 (void)FUNC_19(VAR_11, VAR_12);
 if (FUNC_20(VAR_13, &VAR_32->vi_enter)) {
  FUNC_12(VAR_31, VAR_7, "tcgetattr");
  goto err;
 }
 if (VAR_32->orig.c_iflag & VAR_5)
  VAR_32->vi_enter.c_iflag |= VAR_5;
 if (VAR_32->orig.c_iflag & VAR_4)
  VAR_32->vi_enter.c_iflag |= VAR_4;

 VAR_32->vi_enter.c_lflag |= VAR_3;



 VAR_32->vi_enter.c_cc[VAR_22] = VAR_25;
 VAR_32->vi_enter.c_cc[VAR_24] = VAR_25;
 if (FUNC_5(VAR_31))
  goto err;

fast:
 if (FUNC_21(VAR_13, VAR_16 | VAR_15, &VAR_32->vi_enter)) {
  if (VAR_27 == VAR_2)
   goto fast;
  FUNC_12(VAR_31, VAR_7, "tcsetattr");
err: (void)FUNC_6(VAR_31->gp);
  return (1);
 }
 return (0);
}
