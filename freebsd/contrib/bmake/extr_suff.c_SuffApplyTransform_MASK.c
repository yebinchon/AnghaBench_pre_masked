
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int unmade; char* name; int iParents; int children; int parents; } ;
struct TYPE_11__ {char* name; } ;
typedef TYPE_1__ Suff ;
typedef int * LstNode ;
typedef TYPE_2__ GNode ;
typedef int Boolean ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int ,char*,int ) ;
 int * FUNC_4 (int ) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int ,char*,char*,char*,char*) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*,char*,int ) ;
 int VAR_5 ;

__attribute__((used)) static Boolean
FUNC_11(GNode *VAR_6, GNode *VAR_7, Suff *VAR_8, Suff *VAR_9)
{
    LstNode VAR_10, VAR_11;
    char *VAR_12;
    GNode *VAR_13;




    (void)FUNC_1(VAR_6->children, VAR_7);
    (void)FUNC_1(VAR_7->parents, VAR_6);
    VAR_6->unmade += 1;




    VAR_12 = FUNC_10(VAR_9->name, VAR_8->name, 0);
    VAR_10 = FUNC_3(VAR_5, VAR_12, VAR_2);
    FUNC_9(VAR_12);

    if (VAR_10 == ((void*)0)) {





 return(VAR_0);
    }

    VAR_13 = (GNode *)FUNC_2(VAR_10);

    if (FUNC_0(VAR_1)) {
 FUNC_8(VAR_4, "\tapplying %s -> %s to \"%s\"\n", VAR_9->name, VAR_8->name, VAR_6->name);
    }




    VAR_10 = FUNC_4(VAR_6->children);




    (void)FUNC_6(VAR_13, VAR_6);




    for (VAR_10 = FUNC_5(VAR_10); VAR_10 != ((void*)0); VAR_10 = VAR_11) {
 VAR_11 = FUNC_5(VAR_10);
 FUNC_7(VAR_10, VAR_6);
    }





    (void)FUNC_1(VAR_7->iParents, VAR_6);

    return(VAR_3);
}
