
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bug_entry {int dummy; } ;


 struct bug_entry* VAR_0 ;
 struct bug_entry const* VAR_1 ;
 unsigned long FUNC_0 (struct bug_entry const*) ;
 struct bug_entry const* FUNC_1 (unsigned long) ;

const struct bug_entry *FUNC_2(unsigned long VAR_2)
{
 const struct bug_entry *VAR_3;

 for (VAR_3 = VAR_0; VAR_3 < VAR_1; ++VAR_3)
  if (VAR_2 == FUNC_0(VAR_3))
   return VAR_3;

 return FUNC_1(VAR_2);
}
