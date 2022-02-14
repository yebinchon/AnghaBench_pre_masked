
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int fa ;
struct TYPE_9__ {int fval; int tval; } ;
typedef int Node ;
typedef TYPE_1__ Cell ;
typedef int Awkfloat ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 TYPE_1__* FUNC_0 (int *) ;
 char* FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 () ;
 int * FUNC_3 (char*,int) ;
 int FUNC_4 (int *,char const*) ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int *,char const*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,char const*) ;
 int FUNC_8 (int *,char const*) ;
 int FUNC_9 (TYPE_1__*) ;

Cell *FUNC_10(Node **VAR_10, int VAR_11)
{
 Cell *VAR_12, *VAR_13;
 char *VAR_14, *VAR_15;
 int VAR_16;
 fa *VAR_17;
 int (*VAR_18)(fa *, const char *) = FUNC_4, VAR_19 = 0;

 if (VAR_11 == VAR_2) {
  VAR_18 = FUNC_5;
  VAR_19 = 1;
 }
 VAR_12 = FUNC_0(VAR_10[1]);
 VAR_14 = FUNC_1(VAR_12);
 if (VAR_10[0] == ((void*)0))
  VAR_16 = (*VAR_18)((fa *) VAR_10[2], VAR_14);
 else {
  VAR_13 = FUNC_0(VAR_10[2]);
  VAR_15 = FUNC_1(VAR_13);
  VAR_17 = FUNC_3(VAR_15, VAR_19);
  VAR_16 = (*VAR_18)(VAR_17, VAR_14);
  FUNC_9(VAR_13);
 }
 FUNC_9(VAR_12);
 if (VAR_11 == VAR_2) {
  int VAR_20 = VAR_6 - VAR_14 + 1;
  if (VAR_7 < 0)
   VAR_20 = 0;
  FUNC_6(VAR_9, (Awkfloat) VAR_20);
  FUNC_6(VAR_8, (Awkfloat) VAR_7);
  VAR_12 = FUNC_2();
  VAR_12->tval = VAR_4;
  VAR_12->fval = VAR_20;
  return VAR_12;
 } else if ((VAR_11 == VAR_1 && VAR_16 == 1) || (VAR_11 == VAR_3 && VAR_16 == 0))
  return(VAR_5);
 else
  return(VAR_0);
}
