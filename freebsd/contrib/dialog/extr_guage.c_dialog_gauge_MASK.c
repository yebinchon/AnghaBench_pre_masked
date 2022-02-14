
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int keep_win; scalar_t__ input; scalar_t__ caller; int win; } ;
struct TYPE_7__ {int percent; TYPE_3__ obj; } ;
typedef TYPE_1__ MY_OBJ ;
typedef int DIALOG_CALLBACK ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int **,int ) ;
 void* FUNC_4 (char const*,char const*,int,int,int) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int*) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (TYPE_3__*,int,int,int*) ;
 int VAR_3 ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (TYPE_1__*) ;

int
FUNC_16(const char *VAR_4,
      const char *VAR_5,
      int VAR_6,
      int VAR_7,
      int VAR_8)
{
    int VAR_9;
    int VAR_10, VAR_11;
    void *VAR_12 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
    MY_OBJ *VAR_13 = (MY_OBJ *) VAR_12;

    FUNC_0(("# gauge args:\n"));
    FUNC_2("title", VAR_4);
    FUNC_2("message", VAR_5);
    FUNC_1("height", VAR_6);
    FUNC_1("width", VAR_7);
    FUNC_1("percent", VAR_8);

    FUNC_3((DIALOG_CALLBACK **) & VAR_13, VAR_3);
    FUNC_11(VAR_13, VAR_8);

    FUNC_10(VAR_13->obj.win);
    do {
 VAR_10 = FUNC_7(VAR_13->obj.win, &VAR_9);
    }
    while (FUNC_15(VAR_13) && FUNC_13(&(VAR_13->obj), VAR_10, VAR_9, &VAR_11));

    FUNC_6(VAR_13);

    return (VAR_0);
}
