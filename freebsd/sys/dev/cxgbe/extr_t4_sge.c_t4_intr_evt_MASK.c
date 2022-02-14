
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_iq {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct sge_iq*,int ) ;

void
FUNC_2(void *VAR_2)
{
 struct sge_iq *VAR_3 = VAR_2;

 if (FUNC_0(&VAR_3->state, VAR_1, VAR_0)) {
  FUNC_1(VAR_3, 0);
  (void) FUNC_0(&VAR_3->state, VAR_0, VAR_1);
 }
}
