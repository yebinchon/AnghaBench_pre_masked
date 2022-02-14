
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {scalar_t__ st_value; } ;
typedef scalar_t__ intmax_t ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct symbol *VAR_2 = VAR_0;
 const struct symbol *VAR_3 = VAR_1;
 return (int)(intmax_t)(VAR_2->st_value - VAR_3->st_value);
}
