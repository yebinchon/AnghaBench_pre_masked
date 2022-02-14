
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arange {scalar_t__ low; scalar_t__ high; struct arange* next; } ;
struct comp_unit {struct arange arange; scalar_t__ error; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bfd_boolean
FUNC_0 (struct comp_unit *VAR_2, bfd_vma VAR_3)
{
  struct arange *VAR_4;

  if (VAR_2->error)
    return VAR_0;

  VAR_4 = &VAR_2->arange;
  do
    {
      if (VAR_3 >= VAR_4->low && VAR_3 < VAR_4->high)
 return VAR_1;
      VAR_4 = VAR_4->next;
    }
  while (VAR_4);

  return VAR_0;
}
