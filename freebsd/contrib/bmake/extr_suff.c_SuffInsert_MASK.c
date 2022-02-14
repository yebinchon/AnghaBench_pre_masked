
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ sNum; char* name; struct TYPE_12__* ref; int refCount; } ;
typedef TYPE_1__ Suff ;
typedef int * LstNode ;
typedef TYPE_1__* Lst ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int *,TYPE_1__*) ;
 int * FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_8(Lst VAR_3, Suff *VAR_4)
{
    LstNode VAR_5;
    Suff *VAR_6 = ((void*)0);

    if (FUNC_6(VAR_3) == VAR_0) {
 return;
    }
    while ((VAR_5 = FUNC_5(VAR_3)) != ((void*)0)) {
 VAR_6 = (Suff *)FUNC_3(VAR_5);
 if (VAR_6->sNum >= VAR_4->sNum) {
     break;
 }
    }

    FUNC_2(VAR_3);
    if (FUNC_0(VAR_1)) {
 FUNC_7(VAR_2, "inserting %s(%ld)...", VAR_4->name, VAR_4->sNum);
    }
    if (VAR_5 == ((void*)0)) {
 if (FUNC_0(VAR_1)) {
     FUNC_7(VAR_2, "at end of list\n");
 }
 (void)FUNC_1(VAR_3, VAR_4);
 VAR_4->refCount++;
 (void)FUNC_1(VAR_4->ref, VAR_3);
    } else if (VAR_6->sNum != VAR_4->sNum) {
 if (FUNC_0(VAR_1)) {
     FUNC_7(VAR_2, "before %s(%ld)\n", VAR_6->name, VAR_6->sNum);
 }
 (void)FUNC_4(VAR_3, VAR_5, VAR_4);
 VAR_4->refCount++;
 (void)FUNC_1(VAR_4->ref, VAR_3);
    } else if (FUNC_0(VAR_1)) {
 FUNC_7(VAR_2, "already there\n");
    }
}
