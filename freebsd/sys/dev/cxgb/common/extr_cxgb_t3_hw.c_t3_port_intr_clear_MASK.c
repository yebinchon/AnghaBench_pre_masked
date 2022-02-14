
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_4__ {scalar_t__ offset; } ;
struct port_info {TYPE_3__ phy; TYPE_1__ mac; } ;
typedef int adapter_t ;
struct TYPE_5__ {int (* intr_clear ) (TYPE_3__*) ;} ;


 scalar_t__ VAR_0 ;
 struct port_info* FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,scalar_t__,int) ;

void FUNC_3(adapter_t *VAR_1, int VAR_2)
{
 struct port_info *VAR_3 = FUNC_0(VAR_1, VAR_2);

 FUNC_2(VAR_1, VAR_0 + VAR_3->mac.offset, 0xffffffff);
 VAR_3->phy.ops->intr_clear(&VAR_3->phy);
}
