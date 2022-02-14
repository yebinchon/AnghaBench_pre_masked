
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tc_u_knode {int handle; struct tc_u_knode* next; } ;
struct tc_u_hnode {struct tc_u_knode** ht; } ;


 size_t FUNC_0 (int) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(struct tc_u_hnode *VAR_0, u32 VAR_1)
{
 struct tc_u_knode *VAR_2;
 unsigned VAR_3 = 0x7FF;

 for (VAR_2=VAR_0->ht[FUNC_0(VAR_1)]; VAR_2; VAR_2 = VAR_2->next)
  if (VAR_3 < FUNC_1(VAR_2->handle))
   VAR_3 = FUNC_1(VAR_2->handle);
 VAR_3++;

 return VAR_1|(VAR_3>0xFFF ? 0xFFF : VAR_3);
}
