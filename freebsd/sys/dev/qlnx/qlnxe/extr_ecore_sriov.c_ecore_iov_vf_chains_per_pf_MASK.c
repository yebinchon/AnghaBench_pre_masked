
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ max_chains_per_vf; } ;
struct ecore_hwfn {TYPE_1__ hw_info; } ;


 scalar_t__ VAR_0 ;

u8 FUNC_0(struct ecore_hwfn *VAR_1)
{
 u8 VAR_2 = VAR_1->hw_info.max_chains_per_vf;

 VAR_2 = (VAR_2) ? VAR_2
      : VAR_0;

 return VAR_2;
}
