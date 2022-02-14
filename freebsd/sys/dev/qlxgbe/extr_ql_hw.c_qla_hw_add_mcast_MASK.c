
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
 int VAR_2 ;
 int FUNC_0 (int *,scalar_t__*,int ) ;

__attribute__((used)) static int
FUNC_1(qla_host_t *VAR_3, uint8_t *VAR_4, uint32_t VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {

  if ((VAR_3->hw.mcast[VAR_6].addr[0] == 0) &&
   (VAR_3->hw.mcast[VAR_6].addr[1] == 0) &&
   (VAR_3->hw.mcast[VAR_6].addr[2] == 0) &&
   (VAR_3->hw.mcast[VAR_6].addr[3] == 0) &&
   (VAR_3->hw.mcast[VAR_6].addr[4] == 0) &&
   (VAR_3->hw.mcast[VAR_6].addr[5] == 0)) {

   FUNC_0(VAR_4, VAR_3->hw.mcast[VAR_6].addr, VAR_1);
   VAR_3->hw.nmcast++;

   VAR_4 = VAR_4 + VAR_0;
   VAR_5--;

   if (VAR_5 == 0)
    break;
  }

 }
 return 0;
}
