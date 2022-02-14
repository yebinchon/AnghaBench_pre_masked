
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlocale_refcounted {int retain_count; } ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) __attribute__((unused)) static void*
FUNC_1(void *VAR_0)
{
 struct xlocale_refcounted *VAR_1 = VAR_0;
 FUNC_0(&(VAR_1->retain_count), 1);
 return (VAR_0);
}
