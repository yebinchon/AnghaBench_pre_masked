
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef int WINDOW ;
struct TYPE_12__ {TYPE_1__* getc_redirect; int getc_callbacks; int screen_output; } ;
struct TYPE_11__ {int timeout_secs; int help_file; } ;
struct TYPE_10__ {int keep_win; int * win; int (* handle_getc ) (TYPE_1__*,int,int,int*) ;} ;
typedef TYPE_1__ DIALOG_CALLBACK ;
 int const FUNC_0 (char) ;
 int FUNC_1 (char*) ;

 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (char*,int ,int ,int ) ;
 TYPE_9__ VAR_5 ;
 TYPE_8__ VAR_6 ;
 int FUNC_5 (int *,int,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int const) ;
 int FUNC_13 (int const) ;
 int FUNC_14 (int *,int) ;
 scalar_t__ FUNC_15 () ;
 TYPE_1__* FUNC_16 (TYPE_1__*) ;
 TYPE_1__* FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (int *,int*) ;
 int VAR_7 ;
 int FUNC_19 (TYPE_1__*,int,int,int*) ;
 scalar_t__ FUNC_20 (scalar_t__*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int *,int,int) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int *,int) ;

int
FUNC_26(WINDOW *VAR_8, int *VAR_9)
{
    WINDOW *VAR_10 = VAR_8;
    int VAR_11 = 130;
    int VAR_12;
    int VAR_13;
    int VAR_14;
    bool VAR_15 = VAR_1;
    bool VAR_16 = VAR_1;
    DIALOG_CALLBACK *VAR_17 = 0;
    int VAR_18 = (VAR_6.timeout_secs * 1000);
    time_t VAR_19 = FUNC_20((time_t *) 0) + VAR_6.timeout_secs;
    time_t VAR_20;

    if (FUNC_15())
 FUNC_25(VAR_8, VAR_3);
    else if (VAR_18 > 0)
 FUNC_25(VAR_8, VAR_18);

    while (!VAR_15) {
 bool VAR_21 = VAR_1;




 VAR_11 = FUNC_18(VAR_8, VAR_9);
 if (VAR_16) {
     VAR_15 = VAR_2;
     continue;
 }

 VAR_12 = VAR_11;
 VAR_13 = *VAR_9;

 VAR_11 = FUNC_5(VAR_8, VAR_11, VAR_9);
 FUNC_8(VAR_11, *VAR_9);

 VAR_20 = FUNC_20((time_t *) 0);





 if (!*VAR_9 || *VAR_9 != VAR_13) {
     switch (VAR_11) {
     case 136:
  VAR_16 = VAR_2;
  FUNC_14(VAR_8, VAR_1);
  continue;
     case 135:
  (void) FUNC_21(VAR_8);
  (void) FUNC_24(VAR_4);
  break;
     case 130:
  if (VAR_18 > 0
      && VAR_20 >= VAR_19) {
      FUNC_1(("# dlg_getc: timeout expired\n"));
      VAR_11 = VAR_0;
      VAR_15 = VAR_2;
  } else if (!FUNC_22(VAR_7)
      || !FUNC_22(VAR_5.screen_output)) {
      FUNC_1(("# dlg_getc: input or output is invalid\n"));
      VAR_11 = VAR_0;
      VAR_15 = VAR_2;
  } else if (FUNC_2()) {
      if (FUNC_11(VAR_8))
   FUNC_6(VAR_8);
      else
   VAR_15 = VAR_2;
  } else {
      VAR_15 = (VAR_18 <= 0);
  }
  break;
     case 131:
  if (VAR_6.help_file) {
      int VAR_22, VAR_23;
      FUNC_10(VAR_8, VAR_22, VAR_23);
      FUNC_4("HELP", VAR_6.help_file, 0, 0);
      FUNC_6(VAR_8);
      FUNC_23(VAR_8, VAR_22, VAR_23);
  }
  continue;
     case 132:

     case 129:

     case 133:

     case 128:





  if (VAR_5.getc_callbacks != 0 &&
      (FUNC_12(128) ||
       FUNC_13(129))) {
      VAR_17 = (FUNC_12(128)
    ? FUNC_16(VAR_17)
    : FUNC_17(VAR_17));
      if ((VAR_5.getc_redirect = VAR_17) != 0) {
   VAR_8 = VAR_17->win;
      } else {
   VAR_8 = VAR_10;
      }
      FUNC_6(VAR_8);
      break;
  }

     default:
  VAR_21 = VAR_2;
  break;





     }
 } else {
     VAR_21 = VAR_2;
 }

 if (VAR_21) {
     if ((VAR_17 = VAR_5.getc_redirect) != 0) {
  if (!(VAR_17->handle_getc(VAR_17, VAR_11, *VAR_9, &VAR_14))) {
      VAR_15 = (VAR_17->win == VAR_10) && (!VAR_17->keep_win);
      FUNC_7(VAR_17);
      VAR_5.getc_redirect = 0;
      VAR_8 = VAR_10;
  }
     } else {
  VAR_15 = VAR_2;
     }
 }
    }
    if (VAR_16)
 FUNC_14(VAR_8, VAR_2);
    return VAR_11;
}
