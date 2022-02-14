
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vi_info {int tick; TYPE_1__* pi; } ;
struct adapter {int dummy; } ;
struct TYPE_2__ {struct adapter* adapter; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct adapter*,struct vi_info*) ;

void
FUNC_2(void *VAR_1)
{
 struct vi_info *VAR_2 = VAR_1;
 struct adapter *VAR_3 = VAR_2->pi->adapter;

 FUNC_1(VAR_3, VAR_2);

 FUNC_0(&VAR_2->tick, VAR_0);
}
