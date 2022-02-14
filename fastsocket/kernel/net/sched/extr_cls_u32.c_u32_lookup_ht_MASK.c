
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tc_u_hnode {scalar_t__ handle; struct tc_u_hnode* next; } ;
struct tc_u_common {struct tc_u_hnode* hlist; } ;



__attribute__((used)) static __inline__ struct tc_u_hnode *
FUNC_0(struct tc_u_common *VAR_0, u32 VAR_1)
{
 struct tc_u_hnode *VAR_2;

 for (VAR_2 = VAR_0->hlist; VAR_2; VAR_2 = VAR_2->next)
  if (VAR_2->handle == VAR_1)
   break;

 return VAR_2;
}
