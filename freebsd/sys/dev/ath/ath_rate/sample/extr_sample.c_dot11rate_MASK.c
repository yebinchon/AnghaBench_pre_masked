
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* info; } ;
struct TYPE_4__ {scalar_t__ phy; int dot11Rate; } ;
typedef TYPE_2__ HAL_RATE_TABLE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(const HAL_RATE_TABLE *VAR_2, int VAR_3)
{
 if (VAR_3 < 0)
  return -1;
 return VAR_2->info[VAR_3].phy == VAR_1 ?
     VAR_2->info[VAR_3].dot11Rate : (VAR_2->info[VAR_3].dot11Rate & VAR_0) / 2;
}
