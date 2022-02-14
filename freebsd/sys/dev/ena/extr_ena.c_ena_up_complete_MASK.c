
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ena_adapter {int hw_stats; TYPE_1__* ifp; } ;
typedef int counter_u64_t ;
struct TYPE_2__ {int if_mtu; } ;


 int FUNC_0 (int ,struct ena_adapter*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct ena_adapter*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct ena_adapter*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct ena_adapter *VAR_1)
{
 int VAR_2;

 if (FUNC_5(FUNC_0(VAR_0, VAR_1))) {
  VAR_2 = FUNC_4(VAR_1);
  if (VAR_2 != 0)
   return (VAR_2);
 }

 VAR_2 = FUNC_1(VAR_1->ifp, VAR_1->ifp->if_mtu);
 if (FUNC_6(VAR_2 != 0))
  return (VAR_2);

 FUNC_2(VAR_1);
 FUNC_3((counter_u64_t *)&VAR_1->hw_stats,
     sizeof(VAR_1->hw_stats));

 return (0);
}
