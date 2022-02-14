
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge_iq {int dummy; } ;
struct TYPE_2__ {struct sge_iq fwq; } ;
struct adapter {int intr_count; scalar_t__ intr_type; TYPE_1__ sge; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct sge_iq*) ;
 int FUNC_4 (struct adapter*,int ,int ) ;

void
FUNC_5(void *VAR_2)
{
 struct adapter *VAR_3 = VAR_2;
 struct sge_iq *VAR_4 = &VAR_3->sge.fwq;

 FUNC_0(VAR_3->intr_count == 1);

 if (VAR_3->intr_type == VAR_1)
  FUNC_4(VAR_3, FUNC_1(VAR_0), 0);

 FUNC_2(VAR_2);
 FUNC_3(VAR_4);
}
