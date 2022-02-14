
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct directory {scalar_t__* di_name; struct directory* di_prev; struct directory* di_next; scalar_t__ di_count; } ;
struct command {int dummy; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct command*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*) ;
 struct directory* VAR_12 ;
 int FUNC_3 (struct directory*) ;
 struct directory* FUNC_4 (scalar_t__*) ;
 scalar_t__* FUNC_5 (scalar_t__*,int) ;
 struct directory VAR_13 ;
 int FUNC_6 (struct directory*,int) ;
 int VAR_14 ;
 int VAR_15 ;
 char* FUNC_7 (scalar_t__*) ;
 int FUNC_8 (scalar_t__***,char*,char*) ;
 int FUNC_9 (int,...) ;
 int FUNC_10 (int ) ;
 scalar_t__* FUNC_11 (int ) ;
 struct directory* FUNC_12 (int,int) ;

void
FUNC_13(Char **VAR_16, struct command *VAR_17)
{
    struct directory *VAR_18;
    Char *VAR_19;
    int VAR_20 = FUNC_8(&VAR_16, "plvn", " [-|<dir>|+<n>]");

    FUNC_0(VAR_17);
    VAR_15 = 1;
    VAR_19 = (VAR_20 & VAR_0) ? FUNC_11(VAR_10) : *VAR_16;

    if (VAR_19 == ((void*)0)) {
 if (FUNC_1(VAR_11)) {
     if ((VAR_19 = FUNC_11(VAR_9)) == VAR_7 || *VAR_19 == 0)
  FUNC_9(VAR_2 | VAR_4);
     if (FUNC_2(FUNC_7(VAR_19)) < 0)
  FUNC_9(VAR_2 | VAR_1);
     if ((VAR_19 = FUNC_5(VAR_19, VAR_20 & VAR_0)) == ((void*)0))
  return;
     VAR_18 = FUNC_12(sizeof(struct directory), 1);
     VAR_18->di_name = VAR_19;
     VAR_18->di_count = 0;
     VAR_18->di_prev = VAR_12;
     VAR_18->di_next = VAR_12->di_next;
     VAR_12->di_next = VAR_18;
     VAR_18->di_next->di_prev = VAR_18;
 }
 else {
     char *VAR_21;

     if ((VAR_18 = VAR_12->di_prev) == &VAR_13)
  VAR_18 = VAR_13.di_prev;
     if (VAR_18 == VAR_12)
  FUNC_9(VAR_2 | VAR_3);
     if (FUNC_2(VAR_21 = FUNC_7(VAR_18->di_name)) < 0)
  FUNC_9(VAR_5, VAR_21, FUNC_10(VAR_14));
     VAR_18->di_prev->di_next = VAR_18->di_next;
     VAR_18->di_next->di_prev = VAR_18->di_prev;
     VAR_18->di_next = VAR_12->di_next;
     VAR_18->di_prev = VAR_12;
     VAR_12->di_next->di_prev = VAR_18;
     VAR_12->di_next = VAR_18;
 }
    }
    else if ((VAR_20 & VAR_0) == 0 && VAR_16[1] != ((void*)0)) {
 FUNC_9(VAR_2 | VAR_6);

 return;
    }
    else if ((VAR_18 = FUNC_4(VAR_19)) != ((void*)0)) {
 char *VAR_22;

 if (FUNC_2(VAR_22 = FUNC_7(VAR_18->di_name)) < 0)
     FUNC_9(VAR_5, VAR_22, FUNC_10(VAR_14));



 if (FUNC_1(VAR_8))
     FUNC_3(VAR_18);
    }
    else {
 Char *VAR_23;

 if ((VAR_23 = FUNC_5(VAR_19, VAR_20 & VAR_0)) == ((void*)0))
     return;
 VAR_18 = FUNC_12(sizeof(struct directory), 1);
 VAR_18->di_name = VAR_23;
 VAR_18->di_count = 0;
 VAR_18->di_prev = VAR_12;
 VAR_18->di_next = VAR_12->di_next;
 VAR_12->di_next = VAR_18;
 VAR_18->di_next->di_prev = VAR_18;
    }
    FUNC_6(VAR_18, VAR_20);
}
