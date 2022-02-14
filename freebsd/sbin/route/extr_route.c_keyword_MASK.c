
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keytab {int kt_i; int * kt_cp; } ;


 struct keytab* VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*) ;

int
FUNC_1(const char *VAR_1)
{
 const struct keytab *VAR_2 = VAR_0;

 while (VAR_2->kt_cp != ((void*)0) && FUNC_0(VAR_2->kt_cp, VAR_1) != 0)
  VAR_2++;
 return (VAR_2->kt_i);
}
