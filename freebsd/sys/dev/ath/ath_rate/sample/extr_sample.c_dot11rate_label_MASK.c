
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* info; } ;
struct TYPE_4__ {scalar_t__ phy; } ;
typedef TYPE_2__ HAL_RATE_TABLE ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static const char *
FUNC_0(const HAL_RATE_TABLE *VAR_1, int VAR_2)
{
 if (VAR_2 < 0)
  return "";
 return VAR_1->info[VAR_2].phy == VAR_0 ? "MCS" : "Mb ";
}
