
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct p2p_group_member {int addr; struct p2p_group_member* next; } ;
struct p2p_group {struct p2p_group_member* members; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int ,int ) ;

__attribute__((used)) static struct p2p_group_member * FUNC_1(
 struct p2p_group *VAR_1, const u8 *VAR_2)
{
 struct p2p_group_member *VAR_3;

 for (VAR_3 = VAR_1->members; VAR_3; VAR_3 = VAR_3->next) {
  if (FUNC_0(VAR_2, VAR_3->addr, VAR_0) == 0)
   return VAR_3;
 }

 return ((void*)0);
}
