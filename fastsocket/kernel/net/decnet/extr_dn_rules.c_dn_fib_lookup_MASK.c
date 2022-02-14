
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flowi {int dummy; } ;
struct fib_lookup_arg {int rule; struct dn_fib_res* result; } ;
struct dn_fib_res {int r; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct flowi*,int ,struct fib_lookup_arg*) ;

int FUNC_1(struct flowi *VAR_1, struct dn_fib_res *VAR_2)
{
 struct fib_lookup_arg VAR_3 = {
  .result = VAR_2,
 };
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_0, VAR_1, 0, &VAR_3);
 VAR_2->r = VAR_3.rule;

 return VAR_4;
}
