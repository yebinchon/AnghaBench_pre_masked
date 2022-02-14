
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int tval; int sval; void* fval; } ;
typedef int Node ;
typedef int FILE ;
typedef TYPE_1__ Cell ;
typedef int Awkfloat ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char**,int*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 () ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;
 int * FUNC_10 (int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char**,int*,int *) ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (TYPE_1__*,char*) ;
 int VAR_4 ;
 int FUNC_15 (TYPE_1__*) ;

Cell *FUNC_16(Node **VAR_5, int VAR_6)
{
 Cell *VAR_7, *VAR_8;
 extern Cell **VAR_9;
 FILE *VAR_10;
 char *VAR_11;
 int VAR_12 = VAR_3;
 int VAR_13;

 if ((VAR_11 = (char *) FUNC_9(VAR_12)) == ((void*)0))
  FUNC_0("out of memory in getline");

 FUNC_3(VAR_4);
 VAR_7 = FUNC_7();
 if (VAR_5[1] != ((void*)0)) {
  VAR_8 = FUNC_2(VAR_5[2]);
  VAR_13 = FUNC_11(VAR_5[1]);
  if (VAR_13 == '|')
   VAR_13 = VAR_0;
  VAR_10 = FUNC_10(VAR_13, FUNC_6(VAR_8));
  FUNC_15(VAR_8);
  if (VAR_10 == ((void*)0))
   VAR_6 = -1;
  else
   VAR_6 = FUNC_12(&VAR_11, &VAR_12, VAR_10);
  if (VAR_6 <= 0) {
   ;
  } else if (VAR_5[0] != ((void*)0)) {
   VAR_8 = FUNC_2(VAR_5[0]);
   FUNC_14(VAR_8, VAR_11);
   if (FUNC_8(VAR_8->sval)) {
    VAR_8->fval = FUNC_1(VAR_8->sval);
    VAR_8->tval |= VAR_1;
   }
   FUNC_15(VAR_8);
  } else {
   FUNC_14(VAR_9[0], VAR_11);
   if (FUNC_8(VAR_9[0]->sval)) {
    VAR_9[0]->fval = FUNC_1(VAR_9[0]->sval);
    VAR_9[0]->tval |= VAR_1;
   }
  }
 } else {
  if (VAR_5[0] == ((void*)0))
   VAR_6 = FUNC_5(&VAR_2, &VAR_3, 1);
  else {
   VAR_6 = FUNC_5(&VAR_11, &VAR_12, 0);
   VAR_8 = FUNC_2(VAR_5[0]);
   FUNC_14(VAR_8, VAR_11);
   if (FUNC_8(VAR_8->sval)) {
    VAR_8->fval = FUNC_1(VAR_8->sval);
    VAR_8->tval |= VAR_1;
   }
   FUNC_15(VAR_8);
  }
 }
 FUNC_13(VAR_7, (Awkfloat) VAR_6);
 FUNC_4(VAR_11);
 return VAR_7;
}
