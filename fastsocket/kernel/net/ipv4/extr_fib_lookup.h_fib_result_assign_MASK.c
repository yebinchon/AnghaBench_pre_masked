
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib_result {struct fib_info* fi; } ;
struct fib_info {int fib_clntref; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fib_info*) ;

__attribute__((used)) static inline void FUNC_2(struct fib_result *VAR_0,
         struct fib_info *VAR_1)
{
 if (VAR_0->fi != ((void*)0))
  FUNC_1(VAR_0->fi);
 VAR_0->fi = VAR_1;
 if (VAR_1 != ((void*)0))
  FUNC_0(&VAR_1->fib_clntref);
}
