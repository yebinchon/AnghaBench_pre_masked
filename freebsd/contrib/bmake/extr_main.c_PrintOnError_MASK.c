
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_7__ {int type; int commands; int name; } ;
typedef TYPE_1__ GNode ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ,int ,int ) ;
 char* FUNC_5 (int *,char*,int ,int ) ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char const*,...) ;
 char* VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (char*,char*,int) ;

void
FUNC_10(GNode *VAR_8, const char *VAR_9)
{
    static GNode *VAR_10 = ((void*)0);
    char VAR_11[64];
    char *VAR_12;

    if (VAR_9)
 FUNC_8("%s", VAR_9);

    FUNC_8("\n%s: stopped in %s\n", VAR_6, VAR_5);

    if (VAR_10)
 return;
    if (VAR_8) {



 FUNC_4(".ERROR_TARGET", VAR_8->name, VAR_3, 0);
 FUNC_3(".ERROR_CMD", VAR_3);
 FUNC_1(VAR_8->commands, VAR_4, VAR_8);
    }
    FUNC_9(VAR_11, "${MAKE_PRINT_VAR_ON_ERROR:@v@$v='${$v}'\n@}",
     sizeof(VAR_11) - 1);
    VAR_12 = FUNC_5(((void*)0), VAR_11, VAR_3, VAR_2);
    if (VAR_12) {
 if (*VAR_12)
     FUNC_8("%s", VAR_12);
 FUNC_7(VAR_12);
    }
    FUNC_6(VAR_7);




    VAR_10 = FUNC_2(".ERROR", VAR_1);
    if (VAR_10) {
 VAR_10->type |= VAR_0;
 FUNC_0(VAR_10, VAR_10);
    }
}
