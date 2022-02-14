
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int nmcast; TYPE_1__* mcast; } ;
typedef TYPE_2__ qla_host_t ;
struct TYPE_5__ {scalar_t__* addr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *,int ,int) ;

__attribute__((used)) static int
FUNC_2(qla_host_t *VAR_1, uint8_t *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (FUNC_0(VAR_1->mcast[VAR_3].addr, VAR_2) == 0) {

   if (FUNC_1(VAR_1, VAR_2, 0, VAR_3))
    return (-1);

   VAR_1->mcast[VAR_3].addr[0] = 0;
   VAR_1->mcast[VAR_3].addr[1] = 0;
   VAR_1->mcast[VAR_3].addr[2] = 0;
   VAR_1->mcast[VAR_3].addr[3] = 0;
   VAR_1->mcast[VAR_3].addr[4] = 0;
   VAR_1->mcast[VAR_3].addr[5] = 0;

   VAR_1->nmcast--;

   return 0;
  }
 }
 return 0;
}
