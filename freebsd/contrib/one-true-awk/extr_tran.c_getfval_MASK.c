
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int tval; int fval; int nval; int sval; } ;
typedef TYPE_1__ Cell ;
typedef int Awkfloat ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 () ;

Awkfloat FUNC_10(Cell *VAR_5)
{
 if ((VAR_5->tval & (VAR_1 | VAR_2)) == 0)
  FUNC_4(VAR_5, "read value of");
 if (FUNC_6(VAR_5) && VAR_3 == 0)
  FUNC_3();
 else if (FUNC_8(VAR_5) && VAR_4 == 0)
  FUNC_9();
 if (!FUNC_7(VAR_5)) {
  VAR_5->fval = FUNC_1(VAR_5->sval);
  if (FUNC_5(VAR_5->sval) && !(VAR_5->tval&VAR_0))
   VAR_5->tval |= VAR_1;
 }
    FUNC_2( ("getfval %p: %s = %g, t=%o\n",
  (void)VAR_5, FUNC_0(VAR_5->nval), VAR_5->fval, VAR_5->tval) );
 return(VAR_5->fval);
}
