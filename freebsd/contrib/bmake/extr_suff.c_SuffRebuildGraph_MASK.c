
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {char* name; } ;
struct TYPE_8__ {char* name; int parents; int children; } ;
struct TYPE_7__ {int len; char* ename; } ;
typedef TYPE_1__ SuffixCmpData ;
typedef TYPE_2__ Suff ;
typedef int * LstNode ;
typedef TYPE_3__ GNode ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (char*,char*) ;
 int VAR_0 ;
 char* FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_7(void *VAR_2, void *VAR_3)
{
    GNode *VAR_4 = (GNode *)VAR_2;
    Suff *VAR_5 = (Suff *)VAR_3;
    char *VAR_6;
    LstNode VAR_7;
    Suff *VAR_8;
    SuffixCmpData VAR_9;




    VAR_6 = FUNC_5(FUNC_3(VAR_5->name, VAR_4->name));
    if (VAR_6 != ((void*)0)) {
 VAR_7 = FUNC_1(VAR_1, VAR_6, VAR_0);
 if (VAR_7 != ((void*)0)) {




     VAR_8 = (Suff *)FUNC_0(VAR_7);
     FUNC_2(VAR_8->children, VAR_5);
     FUNC_2(VAR_5->parents, VAR_8);
     return(0);
 }
    }




    VAR_9.len = FUNC_6(VAR_4->name);
    VAR_9.ename = VAR_4->name + VAR_9.len;
    VAR_6 = FUNC_4(VAR_5, &VAR_9);
    if (VAR_6 != ((void*)0)) {



 VAR_6[1] = '\0';
 VAR_7 = FUNC_1(VAR_1, VAR_4->name, VAR_0);



 VAR_6[1] = VAR_5->name[0];
 if (VAR_7 != ((void*)0)) {



     VAR_8 = (Suff *)FUNC_0(VAR_7);
     FUNC_2(VAR_5->children, VAR_8);
     FUNC_2(VAR_8->parents, VAR_5);
 }
    }
    return(0);
}
