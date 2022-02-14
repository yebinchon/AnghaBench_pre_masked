
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int parents; int children; int unmade; int name; } ;
typedef int LstNode ;
typedef int Lst ;
typedef TYPE_1__ GNode ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,TYPE_1__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,TYPE_1__*) ;
 int FUNC_11 (int ,int ) ;
 int VAR_1 ;
 int FUNC_12 (TYPE_1__*) ;
 int VAR_2 ;
 TYPE_1__* FUNC_13 (char*,int ) ;
 int VAR_3 ;
 int FUNC_14 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_15(LstNode VAR_4, GNode *VAR_5)
{
    GNode *VAR_6 = (GNode *)FUNC_4(VAR_4);
    GNode *VAR_7;
    char *VAR_8;
    Lst VAR_9;

    if (!FUNC_2(VAR_6->name))
 return;




    VAR_9 = FUNC_7(VAR_0);
    FUNC_1(VAR_6->name, FUNC_12(VAR_6), VAR_9);

    while (!FUNC_9(VAR_9)) {



 VAR_8 = (char *)FUNC_5(VAR_9);

 if (FUNC_0(VAR_1)) {
     FUNC_14(VAR_3, "%s...", VAR_8);
 }
 VAR_7 = FUNC_13(VAR_8, VAR_2);


 (void)FUNC_8(VAR_5->children, VAR_4, VAR_7);
 (void)FUNC_3(VAR_7->parents, VAR_5);
 VAR_5->unmade++;
    }




    FUNC_6(VAR_9, ((void*)0));

    if (FUNC_0(VAR_1)) {
 FUNC_14(VAR_3, "\n");
    }





    VAR_5->unmade--;
    FUNC_11(VAR_5->children, VAR_4);
    FUNC_11(VAR_6->parents, FUNC_10(VAR_6->parents, VAR_5));
}
