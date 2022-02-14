
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ use_shadow; scalar_t__ use_colors; int screen_initialized; int no_mouse; int * screen_output; int * pipe_input; int aspect_ratio; int tab_len; int * output; } ;
struct TYPE_3__ {int keep_tite; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 () ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int) ;
 TYPE_2__ VAR_9 ;
 scalar_t__ FUNC_2 () ;
 TYPE_1__ VAR_10 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 void* FUNC_9 (int,char*) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (char*,char*,int *) ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 scalar_t__ VAR_13 ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 () ;
 int VAR_14 ;
 scalar_t__ FUNC_19 (int *,int *,int *) ;
 int FUNC_20 () ;
 int FUNC_21 (char**,int ) ;
 int FUNC_22 () ;
 int FUNC_23 (int ,char*) ;
 int * VAR_15 ;
 int * VAR_16 ;
 int VAR_17 ;
 int FUNC_24 (scalar_t__,int ,int ) ;

void
FUNC_25(FILE *VAR_18, FILE *VAR_19)
{
    int VAR_20, VAR_21;
    char *VAR_22 = 0;

    FUNC_23(VAR_1, "");

    VAR_9.output = VAR_19;
    VAR_9.tab_len = VAR_4;
    VAR_9.aspect_ratio = VAR_0;
    VAR_9.pipe_input = VAR_15;
    if (FUNC_10(VAR_18) != FUNC_10(VAR_15)) {
 if ((VAR_20 = FUNC_7(FUNC_10(VAR_18))) >= 0
     && (VAR_21 = FUNC_7(FUNC_10(VAR_15))) >= 0) {
     (void) FUNC_8(FUNC_10(VAR_18), FUNC_10(VAR_15));
     VAR_9.pipe_input = FUNC_9(VAR_21, "r");
     if (FUNC_10(VAR_15) != 0)
  (void) FUNC_8(FUNC_10(VAR_15), 0);
 } else {
     FUNC_5("cannot open tty-input");
 }
 FUNC_1(VAR_20);
    } else if (!FUNC_15(FUNC_10(VAR_15))) {
 if ((VAR_20 = FUNC_21(&VAR_22, VAR_2)) >= 0) {
     if ((VAR_21 = FUNC_7(FUNC_10(VAR_15))) >= 0) {
  VAR_9.pipe_input = FUNC_9(VAR_21, "r");
  if (FUNC_13(VAR_22, "r", VAR_15) == 0)
      FUNC_5("cannot open tty-input");
  if (FUNC_10(VAR_15) != 0)
      (void) FUNC_8(FUNC_10(VAR_15), 0);
     }
     FUNC_1(VAR_20);
 }
 FUNC_12(VAR_22);
    }
    if (!FUNC_15(FUNC_10(VAR_16))
 && (FUNC_10(VAR_16) == FUNC_10(VAR_19) || FUNC_2())) {
 if ((VAR_20 = FUNC_21(&VAR_22, VAR_3)) >= 0
     && (VAR_9.screen_output = FUNC_9(VAR_20, "w")) != 0) {
     if (FUNC_19(((void*)0), VAR_9.screen_output, VAR_15) == 0) {
  FUNC_5("cannot initialize curses");
     }
     FUNC_12(VAR_22);
 } else {
     FUNC_5("cannot open tty-output");
 }
    } else {
 VAR_9.screen_output = VAR_16;
 (void) FUNC_14();
    }
    (void) FUNC_17(VAR_17, VAR_5);
    (void) FUNC_0();
    (void) FUNC_20();

    if (!VAR_9.no_mouse) {
 FUNC_18();
    }

    VAR_9.screen_initialized = VAR_5;







    FUNC_3();
}
