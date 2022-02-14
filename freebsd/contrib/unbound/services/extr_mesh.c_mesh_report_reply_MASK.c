
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct outbound_entry {TYPE_1__* qstate; } ;
struct mesh_area {int dummy; } ;
struct comm_reply {int dummy; } ;
typedef enum module_ev { ____Placeholder_module_ev } module_ev ;
struct TYPE_2__ {int mesh_info; struct comm_reply* reply; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mesh_area*,int ,int,struct outbound_entry*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_1(struct mesh_area* VAR_5, struct outbound_entry* VAR_6,
        struct comm_reply* VAR_7, int VAR_8)
{
 enum module_ev VAR_9 = VAR_4;
 VAR_6->qstate->reply = VAR_7;
 if(VAR_8 != VAR_1) {
  VAR_9 = VAR_3;
  if(VAR_8 == VAR_0)
   VAR_9 = VAR_2;
 }
 FUNC_0(VAR_5, VAR_6->qstate->mesh_info, VAR_9, VAR_6);
}
