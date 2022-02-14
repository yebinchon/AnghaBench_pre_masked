
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arange {scalar_t__ low; scalar_t__ high; struct arange* next; } ;
struct funcinfo {char* name; struct arange arange; struct funcinfo* prev_func; } ;
struct comp_unit {struct funcinfo* function_table; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bfd_boolean
FUNC_0 (struct comp_unit *VAR_2,
      bfd_vma VAR_3,
      struct funcinfo **VAR_4,
      const char **VAR_5)
{
  struct funcinfo* VAR_6;
  struct funcinfo* VAR_7 = ((void*)0);
  struct arange *VAR_8;

  for (VAR_6 = VAR_2->function_table;
       VAR_6;
       VAR_6 = VAR_6->prev_func)
    {
      for (VAR_8 = &VAR_6->arange;
    VAR_8;
    VAR_8 = VAR_8->next)
 {
   if (VAR_3 >= VAR_8->low && VAR_3 < VAR_8->high)
     {
       if (!VAR_7 ||
    ((VAR_8->high - VAR_8->low) < (VAR_7->arange.high - VAR_7->arange.low)))
  VAR_7 = VAR_6;
     }
 }
    }

  if (VAR_7)
    {
      *VAR_5 = VAR_7->name;
      *VAR_4 = VAR_7;
      return VAR_1;
    }
  else
    {
      return VAR_0;
    }
}
