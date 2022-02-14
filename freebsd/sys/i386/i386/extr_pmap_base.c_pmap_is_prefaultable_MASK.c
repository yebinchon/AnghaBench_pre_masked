
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int pmap_t ;
typedef int boolean_t ;
struct TYPE_2__ {int (* pm_is_prefaultable ) (int ,int ) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,int ) ;

boolean_t
FUNC_1(pmap_t VAR_1, vm_offset_t VAR_2)
{

 return (VAR_0->pm_is_prefaultable(VAR_1, VAR_2));
}
