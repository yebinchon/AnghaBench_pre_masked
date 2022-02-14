
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spc {scalar_t__ mylevel; scalar_t__ val; scalar_t__ flags; scalar_t__* valp; } ;
typedef scalar_t__ cc_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 struct spc* VAR_3 ;

void
FUNC_6(void)
{
    struct spc *VAR_4;

    FUNC_0();

    FUNC_4();
    for (VAR_4 = &VAR_3[1]; VAR_4 < &VAR_3[VAR_0+1]; VAR_4++) {
 if (VAR_4->mylevel != VAR_1) {
     if (VAR_4->val == (cc_t)(VAR_2))
  VAR_4->flags = VAR_1;
     else
  VAR_4->flags = VAR_4->mylevel;
     if (VAR_4->valp)
  VAR_4->val = *VAR_4->valp;
     FUNC_2(VAR_4 - VAR_3, VAR_4->flags, VAR_4->val);
 }
    }
    FUNC_3();
    (void)FUNC_5();
    FUNC_1(1);
}
