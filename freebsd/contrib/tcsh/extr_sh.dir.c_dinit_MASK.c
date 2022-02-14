
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {scalar_t__ st_ino; int st_dev; } ;
struct directory {scalar_t__* di_name; TYPE_1__* di_prev; TYPE_1__* di_next; scalar_t__ di_count; } ;
struct TYPE_2__ {struct directory* di_prev; struct directory* di_next; } ;
typedef scalar_t__ Char ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__* FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* FUNC_2 (scalar_t__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__* FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 (scalar_t__*,int ) ;
 int FUNC_7 (scalar_t__*) ;
 scalar_t__* FUNC_8 (scalar_t__*,int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_9 (struct directory*,int ) ;
 int FUNC_10 (char*) ;
 int VAR_5 ;
 char* FUNC_11 (char*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (int ,scalar_t__*,int) ;
 char* FUNC_13 (scalar_t__*) ;
 int FUNC_14 (char*,struct stat*) ;
 int FUNC_15 (int ) ;
 struct directory* FUNC_16 (int,int) ;
 int FUNC_17 (int) ;
 int VAR_8 ;
 int FUNC_18 (char*,int ,int ) ;

void
FUNC_19(Char *VAR_9)
{
    Char *VAR_10, *VAR_11;
    struct directory *VAR_12;


    VAR_11 = FUNC_3();
    if (VAR_11 == ((void*)0)) {
 FUNC_18("%s: %s\n", VAR_7, FUNC_15(VAR_5));
 if (VAR_9 && *VAR_9) {
     char *VAR_13 = FUNC_13(VAR_9);
     FUNC_10(VAR_13);
     if (FUNC_4(VAR_13) == -1)
  VAR_10 = ((void*)0);
     else
  VAR_10 = FUNC_2(VAR_9);
 }
 else
     VAR_10 = ((void*)0);
 if (VAR_10 == ((void*)0)) {
     FUNC_10("/");
     if (FUNC_4("/") == -1)

  FUNC_17(1);
     VAR_10 = FUNC_1("/");
 }
    }
    else {
 FUNC_6(VAR_11, VAR_8);
 VAR_10 = FUNC_8(VAR_11, VAR_0);
 FUNC_5(VAR_11);
 FUNC_7(VAR_11);

    }

    VAR_12 = FUNC_16(sizeof(struct directory), 1);
    VAR_12->di_name = VAR_10;
    VAR_12->di_count = 0;
    VAR_4.di_next = VAR_4.di_prev = VAR_12;
    VAR_12->di_next = VAR_12->di_prev = &VAR_4;
    VAR_6 = 0;
    FUNC_9(VAR_12, 0);
    FUNC_12(VAR_1, VAR_12->di_name, VAR_3|VAR_2);
}
