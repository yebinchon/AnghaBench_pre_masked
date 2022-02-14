
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_1__* mcast; } ;
struct TYPE_7__ {TYPE_2__ hw; } ;
typedef TYPE_3__ qla_host_t ;
struct TYPE_5__ {int addr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static int
FUNC_1(qla_host_t *VAR_1, uint8_t *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (FUNC_0(VAR_1->hw.mcast[VAR_3].addr, VAR_2) == 0)
   return (0);
 }
 return (-1);
}
