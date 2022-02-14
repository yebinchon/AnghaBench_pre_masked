
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_qstate {struct mesh_state* mesh_info; } ;
struct mesh_state {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct mesh_state*,struct mesh_state*,size_t*) ;

__attribute__((used)) static int
FUNC_1(struct module_qstate* VAR_1, struct mesh_state* VAR_2)
{
 struct mesh_state* VAR_3 = VAR_1->mesh_info;
 size_t VAR_4 = 0;
 if(!VAR_2)
  return 0;
 if(VAR_2 == VAR_3 || FUNC_0(VAR_2, VAR_3, &VAR_4)) {
  if(VAR_4 > VAR_0)
   return 2;
  return 1;
 }
 return 0;
}
