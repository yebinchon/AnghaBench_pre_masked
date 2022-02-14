
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct netlink_callback {int* args; } ;
struct fn_zone {struct fn_zone* fz_next; } ;
struct fn_hash {struct fn_zone* fn_zone_list; } ;
struct fib_table {scalar_t__ tb_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct netlink_callback*,struct fib_table*,struct fn_zone*) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct fib_table *VAR_1, struct sk_buff *VAR_2, struct netlink_callback *VAR_3)
{
 int VAR_4, VAR_5;
 struct fn_zone *VAR_6;
 struct fn_hash *VAR_7 = (struct fn_hash *)VAR_1->tb_data;

 VAR_5 = VAR_3->args[2];
 FUNC_2(&VAR_0);
 for (VAR_6 = VAR_7->fn_zone_list, VAR_4=0; VAR_6; VAR_6 = VAR_6->fz_next, VAR_4++) {
  if (VAR_4 < VAR_5) continue;
  if (FUNC_0(VAR_2, VAR_3, VAR_1, VAR_6) < 0) {
   VAR_3->args[2] = VAR_4;
   FUNC_3(&VAR_0);
   return -1;
  }
  FUNC_1(&VAR_3->args[3], 0,
         sizeof(VAR_3->args) - 3*sizeof(VAR_3->args[0]));
 }
 FUNC_3(&VAR_0);
 VAR_3->args[2] = VAR_4;
 return VAR_2->len;
}
