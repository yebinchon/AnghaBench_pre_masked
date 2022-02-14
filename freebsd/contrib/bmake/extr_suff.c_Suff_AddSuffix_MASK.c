
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int refCount; int r; struct TYPE_6__* s; int ** gn; scalar_t__ flags; scalar_t__ sNum; void* ref; void* parents; void* children; void* searchPath; int name; int nameLen; } ;
typedef TYPE_1__ Suff ;
typedef int * LstNode ;
typedef TYPE_1__ GNodeSuff ;
typedef int GNode ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int * FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 void* FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;
 TYPE_1__* FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_8(char *VAR_7, GNode **VAR_8)
{
    Suff *VAR_9;
    LstNode VAR_10;
    GNodeSuff VAR_11;

    VAR_10 = FUNC_1(VAR_5, VAR_7, VAR_3);
    if (VAR_10 == ((void*)0)) {
 VAR_9 = FUNC_5(sizeof(Suff));

 VAR_9->name = FUNC_6(VAR_7);
 VAR_9->nameLen = FUNC_7(VAR_9->name);
 VAR_9->searchPath = FUNC_3(VAR_0);
 VAR_9->children = FUNC_3(VAR_0);
 VAR_9->parents = FUNC_3(VAR_0);
 VAR_9->ref = FUNC_3(VAR_0);
 VAR_9->sNum = VAR_4++;
 VAR_9->flags = 0;
 VAR_9->refCount = 1;

 (void)FUNC_0(VAR_5, VAR_9);






 VAR_11.gn = VAR_8;
 VAR_11.s = VAR_9;
 VAR_11.r = VAR_0;
 FUNC_2(FUNC_4(), VAR_2, &VAR_11);




 FUNC_2(VAR_6, VAR_1, VAR_9);
    }
}
