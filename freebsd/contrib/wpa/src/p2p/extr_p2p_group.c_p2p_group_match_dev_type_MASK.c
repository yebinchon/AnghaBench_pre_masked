
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct p2p_group_member {struct p2p_group_member* next; } ;
struct p2p_group {struct p2p_group_member* members; int p2p; } ;


 scalar_t__ FUNC_0 (int ,struct wpabuf*) ;
 scalar_t__ FUNC_1 (struct p2p_group_member*,struct wpabuf*) ;

int FUNC_2(struct p2p_group *VAR_0, struct wpabuf *VAR_1)
{
 struct p2p_group_member *VAR_2;

 if (FUNC_0(VAR_0->p2p, VAR_1))
  return 1;

 for (VAR_2 = VAR_0->members; VAR_2; VAR_2 = VAR_2->next) {
  if (FUNC_1(VAR_2, VAR_1))
   return 1;
 }


 return 0;
}
