
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct query_info {int dummy; } ;
struct module_qstate {int mesh_info; TYPE_1__* env; } ;
struct mesh_state {int dummy; } ;
struct mesh_area {int dummy; } ;
struct TYPE_2__ {struct mesh_area* mesh; } ;


 struct mesh_state* FUNC_0 (struct mesh_area*,int *,struct query_info*,int ,int,int) ;
 int FUNC_1 (struct module_qstate*,struct mesh_state*) ;
 int FUNC_2 (int ) ;

int
FUNC_3(struct module_qstate* VAR_0, struct query_info* VAR_1,
 uint16_t VAR_2, int VAR_3, int VAR_4)
{
 struct mesh_area* VAR_5 = VAR_0->env->mesh;
 struct mesh_state* VAR_6 = ((void*)0);
 if(!FUNC_2(VAR_0->mesh_info))
  VAR_6 = FUNC_0(VAR_5, ((void*)0), VAR_1, VAR_2, VAR_3, VAR_4);
 return FUNC_1(VAR_0, VAR_6);
}
