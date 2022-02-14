
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct futex_address {int fa_key; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static bool
FUNC_1(const struct futex_address *VAR_0,
    const struct futex_address *VAR_1)
{

 return (FUNC_0(&VAR_0->fa_key, &VAR_1->fa_key));
}
