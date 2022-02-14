
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct netlink_callback {int* args; } ;
struct dn_zone {struct dn_zone* dz_next; } ;
struct dn_hash {struct dn_zone* dh_zone_list; } ;
struct dn_fib_table {scalar_t__ data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct netlink_callback*,struct dn_fib_table*,struct dn_zone*) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct dn_fib_table *VAR_1, struct sk_buff *VAR_2,
    struct netlink_callback *VAR_3)
{
 int VAR_4, VAR_5;
 struct dn_zone *VAR_6;
 struct dn_hash *VAR_7 = (struct dn_hash *)VAR_1->data;

 VAR_5 = VAR_3->args[2];
 FUNC_2(&VAR_0);
 for(VAR_6 = VAR_7->dh_zone_list, VAR_4 = 0; VAR_6; VAR_6 = VAR_6->dz_next, VAR_4++) {
  if (VAR_4 < VAR_5)
   continue;
  if (VAR_4 > VAR_5)
   FUNC_1(&VAR_3->args[3], 0, sizeof(VAR_3->args) - 3*sizeof(VAR_3->args[0]));

  if (FUNC_0(VAR_2, VAR_3, VAR_1, VAR_6) < 0) {
   VAR_3->args[2] = VAR_4;
   FUNC_3(&VAR_0);
   return -1;
  }
 }
 FUNC_3(&VAR_0);
 VAR_3->args[2] = VAR_4;

 return VAR_2->len;
}
