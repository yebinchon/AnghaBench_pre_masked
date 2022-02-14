
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int term_names; } ;
struct TYPE_10__ {TYPE_1__ type; } ;
struct TYPE_9__ {int magic; int * csp; } ;
typedef TYPE_1__ TERMTYPE ;
typedef TYPE_2__ TERMINAL_CONTROL_BLOCK ;
typedef TYPE_3__ TERMINAL ;
typedef int SCREEN ;
typedef int NCURSES_SP_NAME ;
typedef int NCURSES_SP_ARGx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (char const*) ;
 int FUNC_2 (char const*,TYPE_1__*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int) ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int,char*,char const*) ;
 int FUNC_7 (char*,int ,size_t) ;
 char* VAR_14 ;

__attribute__((used)) static bool
FUNC_8(TERMINAL_CONTROL_BLOCK * VAR_15, const char *VAR_16, int *VAR_17)
{
    bool VAR_18 = VAR_0;
    int VAR_19;
    TERMINAL *VAR_20;
    SCREEN *VAR_21;

    FUNC_4(VAR_15 != 0 && VAR_16 != 0);
    VAR_20 = (TERMINAL *) VAR_15;
    VAR_21 = VAR_15->csp;
    VAR_15->magic = VAR_2;




    VAR_19 = VAR_4;



    if (VAR_19 != VAR_5) {
 const TERMTYPE *VAR_22 = FUNC_1(VAR_16);

 if (VAR_22) {
     VAR_20->type = *VAR_22;
     VAR_19 = VAR_5;
 }
    }

    if (VAR_19 != VAR_5) {
 NCURSES_SP_NAME(FUNC_9) (NCURSES_SP_ARGx VAR_23);
 if (VAR_19 == VAR_3) {
     FUNC_5(VAR_19, "terminals database is inaccessible\n");
 } else if (VAR_19 == VAR_4) {
     FUNC_6(VAR_19, "unknown terminal type.\n", VAR_16);
 }
    }
    VAR_18 = VAR_6;

    FUNC_7(VAR_14, VAR_20->type.term_names, (size_t) VAR_1 - 1);
    VAR_14[VAR_1 - 1] = '\0';


    if (VAR_8)
 FUNC_3(VAR_20, *VAR_8);

    if (VAR_12) {




 if ((FUNC_0(VAR_9)
      || (FUNC_0(VAR_10) && FUNC_0(VAR_11)))
     && FUNC_0(VAR_7)) {
     FUNC_6(VAR_5, "terminal is not really generic.\n", VAR_16);
 } else {
     FUNC_6(VAR_4, "I need something more specific.\n", VAR_16);
 }
    }
    if (VAR_13) {
 FUNC_6(VAR_5, "I can't handle hardcopy terminals.\n", VAR_16);
    }

    return VAR_18;
}
