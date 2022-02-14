
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int csub; int ctype; int nval; } ;
typedef int Node ;
typedef TYPE_1__ Cell ;
typedef scalar_t__ Awkfloat ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 char* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*) ;

Cell *FUNC_7(Node **VAR_3, int VAR_4)
{
 Awkfloat VAR_5;
 Cell *VAR_6;
 int VAR_7;
 char *VAR_8;

 VAR_6 = FUNC_1(VAR_3[0]);
 VAR_5 = FUNC_3(VAR_6);
 if ((Awkfloat)VAR_1 < VAR_5)
  FUNC_0("trying to access out of range field %s", VAR_6->nval);
 VAR_7 = (int) VAR_5;
 if (VAR_7 == 0 && !FUNC_5(VAR_8 = FUNC_4(VAR_6)))
  FUNC_0("illegal field $(%s), name \"%s\"", VAR_8, VAR_6->nval);

 FUNC_6(VAR_6);
 VAR_6 = FUNC_2(VAR_7);
 VAR_6->ctype = VAR_2;
 VAR_6->csub = VAR_0;
 return(VAR_6);
}
