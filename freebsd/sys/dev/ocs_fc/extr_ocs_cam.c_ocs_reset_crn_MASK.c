
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint64_t ;
typedef size_t uint32_t ;
struct ocs_lun_crn {scalar_t__ crnseed; } ;
struct TYPE_4__ {struct ocs_lun_crn** lun_crn; } ;
struct TYPE_5__ {TYPE_1__ ini_node; } ;
typedef TYPE_2__ ocs_node_t ;


 size_t VAR_0 ;

void
FUNC_0(ocs_node_t *VAR_1, uint64_t VAR_2)
{
 uint32_t VAR_3;
 struct ocs_lun_crn *VAR_4 = ((void*)0);
 VAR_3 = VAR_2 % VAR_0;

 VAR_4 = VAR_1->ini_node.lun_crn[VAR_3];
 if (VAR_4)
  VAR_4->crnseed = 0;

 return;
}
