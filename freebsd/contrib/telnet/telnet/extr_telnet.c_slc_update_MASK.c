
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spc {int flags; scalar_t__* valp; scalar_t__ val; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct spc* VAR_2 ;

int
FUNC_0(void)
{
 struct spc *VAR_3;
 int VAR_4 = 0;

 for (VAR_3 = &VAR_2[1]; VAR_3 < &VAR_2[VAR_0+1]; VAR_3++) {
  if (!(VAR_3->flags&VAR_1))
   continue;
  VAR_3->flags &= ~VAR_1;
  if (VAR_3->valp && (*VAR_3->valp != VAR_3->val)) {
   *VAR_3->valp = VAR_3->val;
   VAR_4 = 1;
  }
 }
 return(VAR_4);
}
