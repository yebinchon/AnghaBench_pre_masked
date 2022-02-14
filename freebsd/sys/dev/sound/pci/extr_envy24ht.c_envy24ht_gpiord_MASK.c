
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct sc_info {TYPE_1__* cfg; } ;
struct TYPE_2__ {int subvendor; int subdevice; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sc_info*,int ,int) ;

__attribute__((used)) static u_int32_t
FUNC_1(struct sc_info *VAR_2)
{
 if (VAR_2->cfg->subvendor == 0x153b && VAR_2->cfg->subdevice == 0x1150)
 return FUNC_0(VAR_2, VAR_1, 2);
 else
 return (FUNC_0(VAR_2, VAR_0, 1) << 16 | FUNC_0(VAR_2, VAR_1, 2));
}
