
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
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,int *) ;
 int FUNC_1 (int *,scalar_t__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *,int,int) ;

__attribute__((used)) static int
FUNC_3(qla_host_t *VAR_2, uint8_t *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {

  if (FUNC_0(VAR_2->mcast[VAR_4].addr, VAR_3) == 0)
   return 0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {

  if ((VAR_2->mcast[VAR_4].addr[0] == 0) &&
   (VAR_2->mcast[VAR_4].addr[1] == 0) &&
   (VAR_2->mcast[VAR_4].addr[2] == 0) &&
   (VAR_2->mcast[VAR_4].addr[3] == 0) &&
   (VAR_2->mcast[VAR_4].addr[4] == 0) &&
   (VAR_2->mcast[VAR_4].addr[5] == 0)) {

   if (FUNC_2(VAR_2, VAR_3, 1, VAR_4))
    return (-1);

   FUNC_1(VAR_3, VAR_2->mcast[VAR_4].addr, VAR_0);
   VAR_2->nmcast++;

   return 0;
  }
 }
 return 0;
}
