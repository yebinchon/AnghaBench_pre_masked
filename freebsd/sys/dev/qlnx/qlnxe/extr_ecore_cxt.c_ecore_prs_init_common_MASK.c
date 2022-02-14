
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ is_target; } ;
struct TYPE_6__ {TYPE_2__ fcoe_pf_params; } ;
struct TYPE_4__ {scalar_t__ personality; } ;
struct ecore_hwfn {TYPE_3__ pf_params; TYPE_1__ hw_info; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ecore_hwfn*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ecore_hwfn *VAR_2)
{
 if ((VAR_2->hw_info.personality == VAR_0) &&
     VAR_2->pf_params.fcoe_pf_params.is_target)
  FUNC_0(VAR_2, VAR_1, 0);
}
