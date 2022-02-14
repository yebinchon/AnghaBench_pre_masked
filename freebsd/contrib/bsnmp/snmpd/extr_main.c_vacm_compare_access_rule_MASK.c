
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct vacm_access {scalar_t__* ctx_prefix; scalar_t__ sec_model; scalar_t__ sec_level; TYPE_1__* group; } ;
struct TYPE_2__ {scalar_t__* groupname; } ;


 size_t FUNC_0 (scalar_t__*) ;

__attribute__((used)) static int
FUNC_1(struct vacm_access *VAR_0, struct vacm_access *VAR_1)
{
 uint32_t VAR_2;

 if (FUNC_0(VAR_0->group->groupname) < FUNC_0(VAR_1->group->groupname))
  return (-1);
 if (FUNC_0(VAR_0->group->groupname) > FUNC_0(VAR_1->group->groupname))
  return (1);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->group->groupname); VAR_2++) {
  if (VAR_0->group->groupname[VAR_2] < VAR_1->group->groupname[VAR_2])
   return (-1);
  if (VAR_0->group->groupname[VAR_2] > VAR_1->group->groupname[VAR_2])
   return (1);
 }

 if (FUNC_0(VAR_0->ctx_prefix) < FUNC_0(VAR_1->ctx_prefix))
  return (-1);
 if (FUNC_0(VAR_0->ctx_prefix) > FUNC_0(VAR_1->ctx_prefix))
  return (1);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->ctx_prefix); VAR_2++) {
  if (VAR_0->ctx_prefix[VAR_2] < VAR_1->ctx_prefix[VAR_2])
   return (-1);
  if (VAR_0->ctx_prefix[VAR_2] > VAR_1->ctx_prefix[VAR_2])
   return (1);
 }

 if (VAR_0->sec_model < VAR_1->sec_model)
  return (-1);
 if (VAR_0->sec_model > VAR_1->sec_model)
  return (1);

 if (VAR_0->sec_level < VAR_1->sec_level)
  return (-1);
 if (VAR_0->sec_level > VAR_1->sec_level)
  return (1);

 return (0);
}
