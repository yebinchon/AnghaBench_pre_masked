
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int type; void* children; void* commands; } ;
struct TYPE_9__ {char* name; int parents; int children; } ;
typedef TYPE_1__ Suff ;
typedef int * LstNode ;
typedef TYPE_2__ GNode ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (void*,int *) ;
 int * FUNC_4 (int ,char*,int ) ;
 void* FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (char*,TYPE_1__**,TYPE_1__**) ;
 TYPE_2__* FUNC_8 (char*) ;
 int VAR_4 ;
 int FUNC_9 (int ,char*,char*,char*) ;
 int VAR_5 ;

GNode *
FUNC_10(char *VAR_6)
{
    GNode *VAR_7;
    Suff *VAR_8,
                  *VAR_9;
    LstNode VAR_10;

    VAR_10 = FUNC_4(VAR_5, VAR_6, VAR_3);
    if (VAR_10 == ((void*)0)) {




 VAR_7 = FUNC_8(VAR_6);
 (void)FUNC_1(VAR_5, VAR_7);
    } else {






 VAR_7 = (GNode *)FUNC_2(VAR_10);
 FUNC_3(VAR_7->commands, ((void*)0));
 FUNC_3(VAR_7->children, ((void*)0));
 VAR_7->commands = FUNC_5(VAR_0);
 VAR_7->children = FUNC_5(VAR_0);
    }

    VAR_7->type = VAR_1;

    (void)FUNC_7(VAR_6, &VAR_8, &VAR_9);




    if (FUNC_0(VAR_2)) {
 FUNC_9(VAR_4, "defining transformation from `%s' to `%s'\n",
  VAR_8->name, VAR_9->name);
    }
    FUNC_6(VAR_9->children, VAR_8);
    FUNC_6(VAR_8->parents, VAR_9);

    return (VAR_7);
}
