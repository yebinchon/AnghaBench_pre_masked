
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ fwrev; } ;
struct TYPE_8__ {scalar_t__ asic_type; scalar_t__ asic_rev; } ;
struct TYPE_9__ {TYPE_1__ workaround; TYPE_2__ sli; } ;
typedef TYPE_3__ ocs_hw_t ;
typedef int int32_t ;
struct TYPE_10__ {scalar_t__ asic_type; scalar_t__ asic_rev; scalar_t__ fwrev_low; scalar_t__ fwrev_high; } ;
typedef TYPE_4__ hw_workaround_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int32_t
FUNC_0(ocs_hw_t *VAR_3, hw_workaround_t *VAR_4)
{
 return (((VAR_4->asic_type == VAR_2) || (VAR_4->asic_type == VAR_3->sli.asic_type)) &&
      ((VAR_4->asic_rev == VAR_1) || (VAR_4->asic_rev == VAR_3->sli.asic_rev)) &&
      (VAR_4->fwrev_low <= VAR_3->workaround.fwrev) &&
      ((VAR_4->fwrev_high == VAR_0) || (VAR_3->workaround.fwrev < VAR_4->fwrev_high)));
}
