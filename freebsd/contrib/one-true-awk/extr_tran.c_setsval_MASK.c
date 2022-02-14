
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int tval; char* sval; int fval; int nval; int * fmt; } ;
typedef TYPE_1__ Cell ;
typedef int Awkfloat ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int) ;
 TYPE_1__* VAR_7 ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ) ;
 char* FUNC_12 (char const*) ;
 int FUNC_13 (char*) ;

char *FUNC_14(Cell *VAR_8, const char *VAR_9)
{
 char *VAR_10;
 int VAR_11;
 Awkfloat VAR_12;

    FUNC_2( ("starting setsval %p: %s = \"%s\", t=%o, r,f=%d,%d\n",
  (void)VAR_8, FUNC_0(VAR_8->nval), VAR_9, VAR_8->tval, VAR_6, VAR_5) );
 if ((VAR_8->tval & (VAR_3 | VAR_4)) == 0)
  FUNC_4(VAR_8, "assign to");
 if (FUNC_6(VAR_8)) {
  VAR_6 = 0;
  VAR_11 = FUNC_1(VAR_8->nval);
  if (VAR_11 > *VAR_2)
   FUNC_8(VAR_11);
     FUNC_2( ("setting field %d to %s (%p)\n", VAR_11, VAR_9, (void *) VAR_9) );
 } else if (FUNC_7(VAR_8)) {
  VAR_5 = 0;
  VAR_6 = 1;
 } else if (VAR_8 == VAR_7) {
  if (VAR_6 == 0)
   FUNC_9();
 }
 VAR_10 = VAR_9 ? FUNC_12(VAR_9) : FUNC_12("");
 if (FUNC_3(VAR_8))
  FUNC_13(VAR_8->sval);
 VAR_8->tval &= ~(VAR_3|VAR_0|VAR_1);
 VAR_8->tval |= VAR_4;
 VAR_8->fmt = ((void*)0);
 FUNC_10(VAR_8);
    FUNC_2( ("setsval %p: %s = \"%s (%p) \", t=%o r,f=%d,%d\n",
  (void)VAR_8, FUNC_0(VAR_8->nval), VAR_10, (void ) VAR_10, VAR_8->tval, VAR_6, VAR_5) );
 VAR_8->sval = VAR_10;
 if (&VAR_8->fval == VAR_2) {
  VAR_6 = 0;
  VAR_12 = FUNC_5(VAR_8);
  FUNC_11(VAR_12);
  FUNC_2( ("setting NF to %g\n", VAR_12) );
 }

 return(VAR_8->sval);
}
