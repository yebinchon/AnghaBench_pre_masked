
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct sc_info {TYPE_1__* cfg; int dev; } ;
struct TYPE_2__ {int subdevice; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct sc_info*,int ,int,int) ;

__attribute__((used)) static void
FUNC_2(struct sc_info *VAR_2, u_int32_t VAR_3)
{




 FUNC_1(VAR_2, VAR_1, VAR_3, 2);
 if (VAR_2->cfg->subdevice != 0x1150)
 FUNC_1(VAR_2, VAR_0, VAR_3 >> 16, 1);
 return;
}
