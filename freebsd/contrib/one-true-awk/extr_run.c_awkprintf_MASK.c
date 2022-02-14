
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* nnext; } ;
typedef TYPE_1__ Node ;
typedef int FILE ;
typedef int Cell ;


 int FUNC_0 (char*,...) ;
 int * VAR_0 ;
 int * FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (char**,int*,int ,TYPE_1__*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int,int,int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (TYPE_1__*) ;
 int VAR_1 ;
 int * FUNC_11 (int ,TYPE_1__*) ;
 int * VAR_2 ;
 int FUNC_12 (int *) ;

Cell *FUNC_13(Node **VAR_3, int VAR_4)
{

 FILE *VAR_5;
 Cell *VAR_6;
 Node *VAR_7;
 char *VAR_8;
 int VAR_9;
 int VAR_10=3*VAR_1;

 if ((VAR_8 = (char *) FUNC_9(VAR_10)) == ((void*)0))
  FUNC_0("out of memory in awkprintf");
 VAR_7 = VAR_3[0]->nnext;
 VAR_6 = FUNC_1(VAR_3[0]);
 if ((VAR_9 = FUNC_5(&VAR_8, &VAR_10, FUNC_8(VAR_6), VAR_7)) == -1)
  FUNC_0("printf string %.30s... too long.  can't happen.", VAR_8);
 FUNC_12(VAR_6);
 if (VAR_3[1] == ((void*)0)) {

  FUNC_7(VAR_8, VAR_9, 1, VAR_2);
  if (FUNC_2(VAR_2))
   FUNC_0("write error on stdout");
 } else {
  VAR_5 = FUNC_11(FUNC_10(VAR_3[1]), VAR_3[2]);

  FUNC_7(VAR_8, VAR_9, 1, VAR_5);
  FUNC_3(VAR_5);
  if (FUNC_2(VAR_5))
   FUNC_0("write error on %s", FUNC_4(VAR_5));
 }
 FUNC_6(VAR_8);
 return(VAR_0);
}
