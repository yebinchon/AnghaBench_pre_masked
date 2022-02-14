
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flowi {int dummy; } ;
struct fib_table {int (* tb_lookup ) (struct fib_table*,struct flowi*,struct fib_result*) ;} ;
struct fib_rule {int action; int table; int fr_net; } ;
struct fib_result {int dummy; } ;
struct fib_lookup_arg {scalar_t__ result; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 struct fib_table* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct fib_table*,struct flowi*,struct fib_result*) ;

__attribute__((used)) static int FUNC_2(struct fib_rule *VAR_4, struct flowi *VAR_5,
       int VAR_6, struct fib_lookup_arg *VAR_7)
{
 int VAR_8 = -VAR_1;
 struct fib_table *VAR_9;

 switch (VAR_4->action) {
 case 129:
  break;

 case 128:
  VAR_8 = -VAR_3;
  goto errout;

 case 130:
  VAR_8 = -VAR_0;
  goto errout;

 case 131:
 default:
  VAR_8 = -VAR_2;
  goto errout;
 }

 if ((VAR_9 = FUNC_0(VAR_4->fr_net, VAR_4->table)) == ((void*)0))
  goto errout;

 VAR_8 = VAR_9->tb_lookup(VAR_9, VAR_5, (struct fib_result *) VAR_7->result);
 if (VAR_8 > 0)
  VAR_8 = -VAR_1;
errout:
 return VAR_8;
}
