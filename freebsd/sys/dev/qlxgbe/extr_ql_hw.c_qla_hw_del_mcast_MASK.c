
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_6__ {int nmcast; TYPE_1__* mcast; } ;
struct TYPE_7__ {TYPE_2__ hw; } ;
typedef TYPE_3__ qla_host_t ;
struct TYPE_5__ {scalar_t__* addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,int *) ;

__attribute__((used)) static int
FUNC_1(qla_host_t *VAR_2, uint8_t *VAR_3, uint32_t VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (FUNC_0(VAR_2->hw.mcast[VAR_5].addr, VAR_3) == 0) {

   VAR_2->hw.mcast[VAR_5].addr[0] = 0;
   VAR_2->hw.mcast[VAR_5].addr[1] = 0;
   VAR_2->hw.mcast[VAR_5].addr[2] = 0;
   VAR_2->hw.mcast[VAR_5].addr[3] = 0;
   VAR_2->hw.mcast[VAR_5].addr[4] = 0;
   VAR_2->hw.mcast[VAR_5].addr[5] = 0;

   VAR_2->hw.nmcast--;

   VAR_3 = VAR_3 + VAR_0;
   VAR_4--;

   if (VAR_4 == 0)
    break;
  }
 }
 return 0;
}
