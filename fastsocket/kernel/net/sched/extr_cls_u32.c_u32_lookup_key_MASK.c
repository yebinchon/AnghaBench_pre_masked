
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tc_u_knode {scalar_t__ handle; struct tc_u_knode* next; } ;
struct tc_u_hnode {unsigned int divisor; struct tc_u_knode** ht; } ;


 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static __inline__ struct tc_u_knode *
FUNC_1(struct tc_u_hnode *VAR_0, u32 VAR_1)
{
 unsigned VAR_2;
 struct tc_u_knode *VAR_3 = ((void*)0);

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 > VAR_0->divisor)
  goto out;

 for (VAR_3 = VAR_0->ht[VAR_2]; VAR_3; VAR_3 = VAR_3->next)
  if (VAR_3->handle == VAR_1)
   break;
out:
 return VAR_3;
}
