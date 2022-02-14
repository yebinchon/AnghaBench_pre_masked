
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct netlink_callback {int* args; } ;
struct fn_zone {int fz_divisor; int * fz_hash; } ;
struct fib_table {int dummy; } ;


 scalar_t__ FUNC_0 (struct sk_buff*,struct netlink_callback*,struct fib_table*,struct fn_zone*,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int*,int ,int) ;

__attribute__((used)) static inline int
FUNC_3(struct sk_buff *VAR_0, struct netlink_callback *VAR_1,
     struct fib_table *VAR_2,
     struct fn_zone *VAR_3)
{
 int VAR_4, VAR_5;

 if (VAR_3->fz_hash == ((void*)0))
  return VAR_0->len;
 VAR_5 = VAR_1->args[3];
 for (VAR_4 = VAR_5; VAR_4 < VAR_3->fz_divisor; VAR_4++) {
  if (FUNC_1(&VAR_3->fz_hash[VAR_4]))
   continue;
  if (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_3->fz_hash[VAR_4]) < 0) {
   VAR_1->args[3] = VAR_4;
   return -1;
  }
  FUNC_2(&VAR_1->args[4], 0,
         sizeof(VAR_1->args) - 4*sizeof(VAR_1->args[0]));
 }
 VAR_1->args[3] = VAR_4;
 return VAR_0->len;
}
