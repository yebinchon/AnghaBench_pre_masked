
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_iterator {int function; int info; } ;
struct gcov_fn_info {int dummy; } ;


 struct gcov_fn_info* FUNC_0 (int ,int ) ;

__attribute__((used)) static struct gcov_fn_info *FUNC_1(struct gcov_iterator *VAR_0)
{
 return FUNC_0(VAR_0->info, VAR_0->function);
}
