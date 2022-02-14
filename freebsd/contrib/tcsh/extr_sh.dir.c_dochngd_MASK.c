
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct directory {scalar_t__* di_name; struct directory* di_prev; struct directory* di_next; scalar_t__ di_count; } ;
struct command {int dummy; } ;
struct TYPE_3__ {struct directory* di_prev; struct directory* di_next; } ;
typedef scalar_t__ Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__* FUNC_0 (scalar_t__*) ;
 int FUNC_1 (struct command*) ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (char*) ;
 TYPE_1__* VAR_11 ;
 struct directory* FUNC_3 (scalar_t__*) ;
 scalar_t__* FUNC_4 (scalar_t__*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct directory*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 char* FUNC_7 (scalar_t__*) ;
 int FUNC_8 (scalar_t__***,char*,char*) ;
 int FUNC_9 (int,...) ;
 int FUNC_10 (int ) ;
 scalar_t__* FUNC_11 (int ) ;
 struct directory* FUNC_12 (int,int) ;

void
FUNC_13(Char **VAR_14, struct command *VAR_15)
{
    Char *VAR_16;
    struct directory *VAR_17;
    int VAR_18 = FUNC_8(&VAR_14, "plvn", "[-|<dir>]");

    FUNC_1(VAR_15);
    VAR_13 = 0;
    VAR_16 = (VAR_18 & VAR_0) ? FUNC_11(VAR_9) : *VAR_14;

    if (VAR_16 == ((void*)0)) {
 if (!VAR_10)
     FUNC_9(VAR_2 | VAR_5);
 else if ((VAR_16 = FUNC_11(VAR_8)) == VAR_7 || *VAR_16 == 0)
     FUNC_9(VAR_2 | VAR_3);
 if (FUNC_2(FUNC_7(VAR_16)) < 0)
     FUNC_9(VAR_2 | VAR_1);
 VAR_16 = FUNC_0(VAR_16);
    }
    else if ((VAR_18 & VAR_0) == 0 && VAR_14[1] != ((void*)0)) {
 FUNC_9(VAR_2 | VAR_6);

 return;
    }
    else if ((VAR_17 = FUNC_3(VAR_16)) != 0) {
 char *VAR_19;

 VAR_13 = 1;
 if (FUNC_2(VAR_19 = FUNC_7(VAR_17->di_name)) < 0)
     FUNC_9(VAR_4, VAR_19, FUNC_10(VAR_12));
 VAR_11->di_prev->di_next = VAR_11->di_next;
 VAR_11->di_next->di_prev = VAR_11->di_prev;
 FUNC_5(VAR_11);
 FUNC_6(VAR_17, VAR_18);
 return;
    }
    else
 if ((VAR_16 = FUNC_4(VAR_16, VAR_18 & VAR_0)) == ((void*)0))
     return;
    VAR_17 = FUNC_12(sizeof(struct directory), 1);
    VAR_17->di_name = VAR_16;
    VAR_17->di_count = 0;
    VAR_17->di_next = VAR_11->di_next;
    VAR_17->di_prev = VAR_11->di_prev;
    VAR_17->di_prev->di_next = VAR_17;
    VAR_17->di_next->di_prev = VAR_17;
    FUNC_5(VAR_11);
    FUNC_6(VAR_17, VAR_18);
}
