
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* nnext; } ;
typedef TYPE_1__ Node ;
typedef int FILE ;
typedef int Cell ;


 int FUNC_0 (char*,int ) ;
 int * VAR_0 ;
 int * FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (TYPE_1__*) ;
 int * FUNC_9 (int ,TYPE_1__*) ;
 int * VAR_3 ;
 int FUNC_10 (int *) ;

Cell *FUNC_11(Node **VAR_4, int VAR_5)
{
 Node *VAR_6;
 Cell *VAR_7;
 FILE *VAR_8;

 if (VAR_4[1] == ((void*)0))
  VAR_8 = VAR_3;
 else
  VAR_8 = FUNC_9(FUNC_8(VAR_4[1]), VAR_4[2]);
 for (VAR_6 = VAR_4[0]; VAR_6 != ((void*)0); VAR_6 = VAR_6->nnext) {
  VAR_7 = FUNC_1(VAR_6);
  FUNC_5(FUNC_6(VAR_7), VAR_8);
  FUNC_10(VAR_7);
  if (VAR_6->nnext == ((void*)0))
   FUNC_5(FUNC_7(VAR_2), VAR_8);
  else
   FUNC_5(FUNC_7(VAR_1), VAR_8);
 }
 if (VAR_4[1] != ((void*)0))
  FUNC_3(VAR_8);
 if (FUNC_2(VAR_8))
  FUNC_0("write error on %s", FUNC_4(VAR_8));
 return(VAR_0);
}
