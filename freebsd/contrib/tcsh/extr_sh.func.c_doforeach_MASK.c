
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct whyle {char** w_fe; char** w_fe0; TYPE_1__ w_end; struct whyle* w_next; int w_fename; int w_start; } ;
struct command {int dummy; } ;
typedef char Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct command*) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 char** FUNC_6 (char**,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (char) ;
 int VAR_8 ;
 int FUNC_8 () ;
 char** FUNC_9 (char**) ;
 int FUNC_10 (int) ;
 char* FUNC_11 (char*) ;
 int FUNC_12 (char**) ;
 int FUNC_13 (char**) ;
 struct whyle* VAR_9 ;
 struct whyle* FUNC_14 (int,int) ;
 int VAR_10 ;

void
FUNC_15(Char **VAR_11, struct command *VAR_12)
{
    Char *VAR_13, *VAR_14;
    struct whyle *VAR_15;
    int VAR_16;

    FUNC_1(VAR_12);
    VAR_11++;
    VAR_13 = VAR_14 = FUNC_11(*VAR_11);
    if (!FUNC_7(*VAR_13))
 FUNC_10(VAR_0 | VAR_4);
    do {
 VAR_13++;
    } while (FUNC_2(*VAR_13));
    if (*VAR_13 != '\0')
 FUNC_10(VAR_0 | VAR_3);
    VAR_13 = *VAR_11++;
    if (VAR_11[0][0] != '(' || VAR_11[FUNC_3(VAR_11) - 1][0] != ')')
 FUNC_10(VAR_0 | VAR_2);
    VAR_11++;
    VAR_16 = FUNC_12(VAR_11);
    if (VAR_16) {
 VAR_11 = FUNC_6(VAR_11, VAR_16);
 if (VAR_11 == 0 && !VAR_8)
     FUNC_10(VAR_0 | VAR_1);
    }
    else {
 VAR_11 = FUNC_9(VAR_11);
 FUNC_13(VAR_11);
    }
    VAR_15 = FUNC_14(1, sizeof *VAR_15);
    VAR_15->w_fe = VAR_15->w_fe0 = VAR_11;
    FUNC_4(&VAR_15->w_start);
    VAR_15->w_fename = FUNC_0(VAR_13);
    VAR_15->w_next = VAR_9;
    VAR_15->w_end.type = VAR_5;
    VAR_9 = VAR_15;



    VAR_10 = VAR_6;
    if (VAR_7)
 FUNC_8();
    if (!VAR_8)
 FUNC_5();
}
