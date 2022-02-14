
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct list_proxy {scalar_t__ value; scalar_t__ purpose; scalar_t__ chain; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3 (const void* VAR_0, const void* VAR_1)
{
  tree VAR_2 = (tree) VAR_0;
  struct list_proxy *VAR_3 = (struct list_proxy *) VAR_1;

  return (FUNC_2 (VAR_2) == VAR_3->value
   && FUNC_1 (VAR_2) == VAR_3->purpose
   && FUNC_0 (VAR_2) == VAR_3->chain);
}
