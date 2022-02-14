
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct ocs_lun_crn {int dummy; } ;
struct TYPE_4__ {struct ocs_lun_crn** lun_crn; } ;
struct TYPE_5__ {int ocs; TYPE_1__ ini_node; } ;
typedef TYPE_2__ ocs_node_t ;


 size_t VAR_0 ;
 int FUNC_0 (int ,struct ocs_lun_crn*,int) ;

void
FUNC_1(ocs_node_t *VAR_1)
{
 uint32_t VAR_2;
 struct ocs_lun_crn *VAR_3 = ((void*)0);

 for(VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_3 = VAR_1->ini_node.lun_crn[VAR_2];
  if (VAR_3) {
   FUNC_0(VAR_1->ocs, VAR_3, sizeof(*VAR_3));
  }
 }

 return;
}
