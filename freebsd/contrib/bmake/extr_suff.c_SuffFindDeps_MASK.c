
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int type; char* path; char* name; TYPE_1__* suffix; } ;
struct TYPE_8__ {int searchPath; int refCount; } ;
typedef TYPE_1__ Suff ;
typedef int * LstNode ;
typedef int Lst ;
typedef TYPE_2__ GNode ;


 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,char*,TYPE_2__*,int ) ;
 int VAR_8 ;
 int FUNC_7 (int ,char*,char*) ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_8(GNode *VAR_10, Lst VAR_11)
{
    if (VAR_10->type & VAR_2) {



 return;
    } else {
 VAR_10->type |= VAR_2;
    }



    FUNC_6(VAR_7, VAR_10->path ? VAR_10->path : VAR_10->name, VAR_10, 0);
    FUNC_6(VAR_4, VAR_10->name, VAR_10, 0);

    if (FUNC_1(VAR_5)) {
 FUNC_7(VAR_8, "SuffFindDeps (%s)\n", VAR_10->name);
    }

    if (VAR_10->type & VAR_1) {
 FUNC_4(VAR_10, VAR_11);
    } else if (VAR_10->type & VAR_3) {
 LstNode VAR_12;
 Suff *VAR_13;

 VAR_12 = FUNC_3(VAR_9, VAR_0, VAR_6);
 if (VAR_10->suffix)
     VAR_10->suffix->refCount--;
 if (VAR_12 != ((void*)0)) {
     VAR_10->suffix = VAR_13 = (Suff *)FUNC_2(VAR_12);
     VAR_10->suffix->refCount++;
     FUNC_0(VAR_10, VAR_13->searchPath);
 } else {
     VAR_10->suffix = ((void*)0);
     FUNC_6(VAR_7, VAR_10->name, VAR_10, 0);
 }





 FUNC_6(VAR_4, "", VAR_10, 0);
    } else {
 FUNC_5(VAR_10, VAR_11);
    }
}
