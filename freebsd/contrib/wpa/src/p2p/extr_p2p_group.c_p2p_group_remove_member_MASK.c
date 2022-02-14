
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct p2p_group_member {struct p2p_group_member* next; int addr; } ;
struct p2p_group {int num_members; struct p2p_group_member* members; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (struct p2p_group_member*) ;

__attribute__((used)) static int FUNC_2(struct p2p_group *VAR_1, const u8 *VAR_2)
{
 struct p2p_group_member *VAR_3, *VAR_4;

 if (VAR_1 == ((void*)0))
  return 0;

 VAR_3 = VAR_1->members;
 VAR_4 = ((void*)0);
 while (VAR_3) {
  if (FUNC_0(VAR_3->addr, VAR_2, VAR_0) == 0)
   break;
  VAR_4 = VAR_3;
  VAR_3 = VAR_3->next;
 }

 if (VAR_3 == ((void*)0))
  return 0;

 if (VAR_4)
  VAR_4->next = VAR_3->next;
 else
  VAR_1->members = VAR_3->next;
 FUNC_1(VAR_3);
 VAR_1->num_members--;

 return 1;
}
