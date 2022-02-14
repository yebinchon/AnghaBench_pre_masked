
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct sc_info {TYPE_1__* cfg; } ;
struct TYPE_2__ {int subvendor; int subdevice; } ;


 int VAR_0 ;
 int FUNC_0 (struct sc_info*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct sc_info *VAR_1, u_int32_t VAR_2)
{
 if (VAR_1->cfg->subvendor == 0x153b && VAR_1->cfg->subdevice == 0x1150)
 FUNC_0(VAR_1, VAR_0, VAR_2, 2);
 else
 FUNC_0(VAR_1, VAR_0, VAR_2, 4);
 return;
}
