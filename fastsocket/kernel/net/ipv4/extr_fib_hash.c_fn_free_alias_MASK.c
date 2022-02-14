
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib_alias {int * fa_info; } ;
struct fib_node {struct fib_alias fn_embedded_alias; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct fib_alias*) ;

__attribute__((used)) static inline void FUNC_2(struct fib_alias *VAR_1, struct fib_node *VAR_2)
{
 FUNC_0(VAR_1->fa_info);
 if (VAR_1 == &VAR_2->fn_embedded_alias)
  VAR_1->fa_info = ((void*)0);
 else
  FUNC_1(VAR_0, VAR_1);
}
