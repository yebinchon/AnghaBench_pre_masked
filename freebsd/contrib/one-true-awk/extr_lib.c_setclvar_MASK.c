
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tval; int sval; int fval; } ;
typedef TYPE_1__ Cell ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_5 (char*,char*,double,int ,int ) ;
 int VAR_2 ;

void FUNC_6(char *VAR_3)
{
 char *VAR_4;
 Cell *VAR_5;

 for (VAR_4=VAR_3; *VAR_4 != '='; VAR_4++)
  ;
 *VAR_4++ = 0;
 VAR_4 = FUNC_3(VAR_4, '\0');
 VAR_5 = FUNC_5(VAR_3, VAR_4, 0.0, VAR_1, VAR_2);
 FUNC_4(VAR_5, VAR_4);
 if (FUNC_2(VAR_5->sval)) {
  VAR_5->fval = FUNC_0(VAR_5->sval);
  VAR_5->tval |= VAR_0;
 }
    FUNC_1( ("command line set %s to |%s|\n", VAR_3, VAR_4) );
}
