
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* sval; int fval; } ;
typedef TYPE_1__ Cell ;
typedef double Awkfloat ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 double FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (char*,char*,double,int,scalar_t__) ;
 int FUNC_4 (char*,char*,int) ;
 scalar_t__ VAR_6 ;

void FUNC_5(int VAR_7, char **VAR_8)
{
 Cell *VAR_9;
 int VAR_10;
 char VAR_11[50];

 VAR_0 = &FUNC_3("ARGC", "", (Awkfloat) VAR_7, VAR_4, VAR_6)->fval;
 VAR_9 = FUNC_3("ARGV", "", 0.0, VAR_2, VAR_6);
 VAR_1 = FUNC_2(VAR_3);
 VAR_9->sval = (char *) VAR_1;
 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  FUNC_4(VAR_11, "%d", VAR_10);
  if (FUNC_1(*VAR_8))
   FUNC_3(VAR_11, *VAR_8, FUNC_0(*VAR_8), VAR_5|VAR_4, VAR_1);
  else
   FUNC_3(VAR_11, *VAR_8, 0.0, VAR_5, VAR_1);
  VAR_8++;
 }
}
