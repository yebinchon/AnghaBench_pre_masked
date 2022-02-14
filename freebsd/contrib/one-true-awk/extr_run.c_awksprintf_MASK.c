
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {char* sval; int tval; } ;
struct TYPE_11__ {struct TYPE_11__* nnext; } ;
typedef TYPE_1__ Node ;
typedef TYPE_2__ Cell ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char**,int*,int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_1 ;
 int FUNC_6 (TYPE_2__*) ;

Cell *FUNC_7(Node **VAR_2, int VAR_3)
{
 Cell *VAR_4;
 Node *VAR_5;
 char *VAR_6;
 int VAR_7=3*VAR_1;

 if ((VAR_6 = (char *) FUNC_5(VAR_7)) == ((void*)0))
  FUNC_0("out of memory in awksprintf");
 VAR_5 = VAR_2[0]->nnext;
 VAR_4 = FUNC_1(VAR_2[0]);
 if (FUNC_2(&VAR_6, &VAR_7, FUNC_3(VAR_4), VAR_5) == -1)
  FUNC_0("sprintf string %.30s... too long.  can't happen.", VAR_6);
 FUNC_6(VAR_4);
 VAR_4 = FUNC_4();
 VAR_4->sval = VAR_6;
 VAR_4->tval = VAR_0;
 return(VAR_4);
}
