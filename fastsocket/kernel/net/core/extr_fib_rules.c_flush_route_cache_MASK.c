
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib_rules_ops {int (* flush_cache ) (struct fib_rules_ops*) ;} ;


 int FUNC_0 (struct fib_rules_ops*) ;

__attribute__((used)) static void FUNC_1(struct fib_rules_ops *VAR_0)
{
 if (VAR_0->flush_cache)
  VAR_0->flush_cache(VAR_0);
}
