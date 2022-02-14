
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct query_info {int dummy; } ;
struct module_qstate {int mesh_info; TYPE_2__* env; } ;
struct TYPE_3__ {int count; } ;
struct mesh_state {TYPE_1__ super_set; int cb_list; int reply_list; } ;
struct mesh_area {scalar_t__ num_detached_states; } ;
struct TYPE_4__ {struct mesh_area* mesh; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct module_qstate*,struct query_info*,int ,int,int,struct module_qstate**,struct mesh_state**) ;
 int FUNC_2 (int ,struct mesh_state*) ;

int FUNC_3(struct module_qstate* VAR_0, struct query_info* VAR_1,
        uint16_t VAR_2, int VAR_3, int VAR_4, struct module_qstate** VAR_5)
{
 struct mesh_area* VAR_6 = VAR_0->env->mesh;
 struct mesh_state* VAR_7 = ((void*)0);
 int VAR_8;
 if(!FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, &VAR_7))
  return 0;
 VAR_8 = (VAR_7->super_set.count == 0);
 if(!FUNC_2(VAR_0->mesh_info, VAR_7))
  return 0;

 if(!VAR_7->reply_list && !VAR_7->cb_list && VAR_8 &&
  VAR_7->super_set.count == 1) {

  FUNC_0(VAR_6->num_detached_states > 0);
  VAR_6->num_detached_states--;
 }

 return 1;
}
