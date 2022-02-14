
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct rtgenmsg {int rtgen_family; } ;
struct netlink_callback {int* args; int nlh; } ;
struct neigh_table {int family; struct neigh_table* next; } ;


 int FUNC_0 (int*,int ,int) ;
 scalar_t__ FUNC_1 (struct neigh_table*,struct sk_buff*,struct netlink_callback*) ;
 struct neigh_table* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_2, struct netlink_callback *VAR_3)
{
 struct neigh_table *VAR_4;
 int VAR_5, VAR_6, VAR_7;

 FUNC_3(&VAR_1);
 VAR_6 = ((struct rtgenmsg *) FUNC_2(VAR_3->nlh))->rtgen_family;
 VAR_7 = VAR_3->args[0];

 for (VAR_4 = VAR_0, VAR_5 = 0; VAR_4; VAR_4 = VAR_4->next, VAR_5++) {
  if (VAR_5 < VAR_7 || (VAR_6 && VAR_4->family != VAR_6))
   continue;
  if (VAR_5 > VAR_7)
   FUNC_0(&VAR_3->args[1], 0, sizeof(VAR_3->args) -
      sizeof(VAR_3->args[0]));
  if (FUNC_1(VAR_4, VAR_2, VAR_3) < 0)
   break;
 }
 FUNC_4(&VAR_1);

 VAR_3->args[0] = VAR_5;
 return VAR_2->len;
}
