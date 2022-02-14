
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spc {scalar_t__* valp; scalar_t__ val; int flags; int mylevel; } ;
typedef scalar_t__ cc_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct spc* VAR_3 ;

void
FUNC_4()
{
    struct spc *VAR_4;

    FUNC_3();
    for (VAR_4 = &VAR_3[1]; VAR_4 < &VAR_3[VAR_0+1]; VAR_4++) {
 if (VAR_4->valp && VAR_4->val != *VAR_4->valp) {
     VAR_4->val = *VAR_4->valp;
     if (VAR_4->val == (cc_t)(VAR_2))
  VAR_4->flags = VAR_1;
     else
  VAR_4->flags = VAR_4->mylevel;
     FUNC_1(VAR_4 - VAR_3, VAR_4->flags, VAR_4->val);
 }
    }
    FUNC_2();
    FUNC_0(1);
}
