
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_4__ {int type; char* name; int flags; int mtime; int parents; } ;
typedef int * LstNode ;
typedef TYPE_1__ GNode ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_5 (char*,char) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;

time_t
FUNC_7(GNode *VAR_3)
{
    LstNode VAR_4;
    GNode *VAR_5;
    char *VAR_6,
    *VAR_7;

    if (FUNC_4(VAR_3->parents) != VAR_2) {
 VAR_3->mtime = 0;
 return (0);
    }
    while ((VAR_4 = FUNC_3(VAR_3->parents)) != ((void*)0)) {
 VAR_5 = (GNode *)FUNC_2(VAR_4);

 if (VAR_5->type & VAR_0) {







     VAR_6 = FUNC_5(VAR_5->name, '(') + 1;
     VAR_7 = FUNC_5(VAR_6, ')');

     if ((VAR_5->flags & VAR_1) &&
  FUNC_6(VAR_6, VAR_3->name, VAR_7 - VAR_6) == 0) {
         VAR_3->mtime = FUNC_0(VAR_5);
     }
 } else if (VAR_5->flags & VAR_1) {




     VAR_3->mtime = 0;
     break;
 }
    }

    FUNC_1(VAR_3->parents);

    return (VAR_3->mtime);
}
