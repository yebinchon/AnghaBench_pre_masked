
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int type; char* name; char* uname; int unmade; int children; int parents; int commands; } ;
typedef int * LstNode ;
typedef int Lst ;
typedef TYPE_1__ GNode ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_9 (char*,int ) ;
 int VAR_7 ;
 char* FUNC_10 (int *,char*,TYPE_1__*,int ) ;
 int VAR_8 ;
 int FUNC_11 (int ,char*,char*) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (char*,char*) ;

void
FUNC_14(GNode *VAR_9, GNode *VAR_10)
{
    LstNode VAR_11;
    if ((VAR_9->type & (VAR_3|VAR_4)) || FUNC_6(VAR_10->commands)) {
     if (VAR_9->type & VAR_4) {




  Lst VAR_12 = VAR_10->commands;
  VAR_10->commands = FUNC_5(VAR_9->commands, ((void*)0));
  (void)FUNC_2(VAR_10->commands, VAR_12, VAR_0);
  FUNC_4(VAR_12, ((void*)0));
     } else {




  (void)FUNC_2(VAR_10->commands, VAR_9->commands, VAR_0);
     }
    }

    if (FUNC_8(VAR_9->children) == VAR_5) {
 while ((VAR_11 = FUNC_7(VAR_9->children)) != ((void*)0)) {
     GNode *VAR_13, *VAR_14 = (GNode *)FUNC_3(VAR_11);







     if (VAR_14->uname == ((void*)0)) {
  VAR_14->uname = VAR_14->name;
     } else {
  FUNC_12(VAR_14->name);
     }
     VAR_14->name = FUNC_10(((void*)0), VAR_14->uname, VAR_10, VAR_7);
     if (VAR_14->name && VAR_14->uname && FUNC_13(VAR_14->name, VAR_14->uname) != 0) {

  VAR_13 = FUNC_9(VAR_14->name, VAR_6);
  if (VAR_13 != ((void*)0))
      VAR_14 = VAR_13;
     }

     (void)FUNC_0(VAR_10->children, VAR_14);
     (void)FUNC_0(VAR_14->parents, VAR_10);
     VAR_10->unmade += 1;
 }
 FUNC_1(VAR_9->children);
    }

    VAR_10->type |= VAR_9->type & ~(VAR_1|VAR_3|VAR_4|VAR_2);
}
