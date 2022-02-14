
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct directory {struct directory* di_prev; struct directory* di_next; int di_name; } ;
struct command {int dummy; } ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct command*) ;
 scalar_t__ FUNC_1 (char*) ;
 struct directory* VAR_7 ;
 struct directory* FUNC_2 (int *) ;
 int FUNC_3 (struct directory*) ;
 struct directory VAR_8 ;
 int FUNC_4 (struct directory*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int ***,char*,char*) ;
 int FUNC_8 (int,...) ;
 int FUNC_9 (int ) ;
 int * FUNC_10 (int ) ;

void
FUNC_11(Char **VAR_11, struct command *VAR_12)
{
    Char *VAR_13;
    struct directory *VAR_14, *VAR_15 = ((void*)0);
    int VAR_16 = FUNC_7(&VAR_11, "plvn", " [-|+<n>]");

    FUNC_0(VAR_12);
    VAR_10 = 1;
    VAR_13 = (VAR_16 & VAR_0) ? FUNC_10(VAR_6) : *VAR_11;

    if (VAR_13 == ((void*)0))
 VAR_14 = VAR_7;
    else if ((VAR_16 & VAR_0) == 0 && VAR_11[1] != ((void*)0)) {
 FUNC_8(VAR_3 | VAR_5);

 return;
    }
    else if ((VAR_14 = FUNC_2(VAR_13)) == 0)
 FUNC_8(VAR_3 | VAR_1);
    if (VAR_14->di_prev == &VAR_8 && VAR_14->di_next == &VAR_8)
 FUNC_8(VAR_3 | VAR_2);
    if (VAR_14 == VAR_7) {
 char *VAR_17;

 if ((VAR_15 = VAR_14->di_prev) == &VAR_8)
     VAR_15 = VAR_8.di_prev;
 if (FUNC_1(VAR_17 = FUNC_6(VAR_15->di_name)) < 0)
     FUNC_8(VAR_4, VAR_17, FUNC_9(VAR_9));
    }
    VAR_14->di_prev->di_next = VAR_14->di_next;
    VAR_14->di_next->di_prev = VAR_14->di_prev;
    FUNC_3(VAR_14);
    if (VAR_14 == VAR_7) {
        FUNC_4(VAR_15, VAR_16);
    }
    else {
 FUNC_5(VAR_16);
    }
}
