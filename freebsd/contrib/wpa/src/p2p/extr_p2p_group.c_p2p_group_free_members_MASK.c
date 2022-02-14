
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_group_member {struct p2p_group_member* next; } ;
struct p2p_group {scalar_t__ num_members; struct p2p_group_member* members; } ;


 int FUNC_0 (struct p2p_group_member*) ;

__attribute__((used)) static void FUNC_1(struct p2p_group *VAR_0)
{
 struct p2p_group_member *VAR_1, *VAR_2;
 VAR_1 = VAR_0->members;
 VAR_0->members = ((void*)0);
 VAR_0->num_members = 0;
 while (VAR_1) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
  FUNC_0(VAR_2);
 }
}
