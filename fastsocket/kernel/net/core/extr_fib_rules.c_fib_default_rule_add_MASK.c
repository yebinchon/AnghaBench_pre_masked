
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct fib_rules_ops {int rules_list; int fro_net; int rule_size; } ;
struct fib_rule {int list; int fr_net; void* flags; void* table; void* pref; int action; int refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 struct fib_rule* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *) ;

int FUNC_4(struct fib_rules_ops *VAR_3,
    u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct fib_rule *VAR_7;

 VAR_7 = FUNC_2(VAR_3->rule_size, VAR_2);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 FUNC_0(&VAR_7->refcnt, 1);
 VAR_7->action = VAR_1;
 VAR_7->pref = VAR_4;
 VAR_7->table = VAR_5;
 VAR_7->flags = VAR_6;
 VAR_7->fr_net = FUNC_1(VAR_3->fro_net);



 FUNC_3(&VAR_7->list, &VAR_3->rules_list);
 return 0;
}
