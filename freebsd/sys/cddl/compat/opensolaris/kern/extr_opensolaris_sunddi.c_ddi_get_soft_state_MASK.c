
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddi_soft_state {int ss_lock; } ;


 void* FUNC_0 (struct ddi_soft_state*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void *
FUNC_3(void *VAR_0, int VAR_1)
{
 struct ddi_soft_state *VAR_2 = VAR_0;
 void *VAR_3;

 FUNC_1(&VAR_2->ss_lock);
 VAR_3 = FUNC_0(VAR_2, VAR_1);
 FUNC_2(&VAR_2->ss_lock);
 return (VAR_3);
}
