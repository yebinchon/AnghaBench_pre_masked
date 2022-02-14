
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arange {scalar_t__ high; scalar_t__ low; struct arange* next; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd ;


 struct arange* FUNC_0 (int *,int) ;

__attribute__((used)) static void
FUNC_1 (bfd *VAR_0, struct arange *VAR_1, bfd_vma VAR_2, bfd_vma VAR_3)
{
  struct arange *VAR_4;


  if (VAR_1->high == 0)
    {
      VAR_1->low = VAR_2;
      VAR_1->high = VAR_3;
      return;
    }


  VAR_4 = VAR_1;
  do
    {
      if (VAR_2 == VAR_4->high)
 {
   VAR_4->high = VAR_3;
   return;
 }
      if (VAR_3 == VAR_4->low)
 {
   VAR_4->low = VAR_2;
   return;
 }
      VAR_4 = VAR_4->next;
    }
  while (VAR_4);



  VAR_4 = FUNC_0 (VAR_0, sizeof (*VAR_4));
  VAR_4->low = VAR_2;
  VAR_4->high = VAR_3;
  VAR_4->next = VAR_1->next;
  VAR_1->next = VAR_4;
}
