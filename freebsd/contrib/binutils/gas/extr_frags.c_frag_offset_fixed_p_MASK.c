
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fr_type; int fr_offset; int fr_var; struct TYPE_4__* fr_next; scalar_t__ fr_fix; scalar_t__ fr_address; } ;
typedef TYPE_1__ fragS ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

bfd_boolean
FUNC_0 (const fragS *VAR_3, const fragS *VAR_4, bfd_vma *VAR_5)
{
  const fragS *VAR_6;
  bfd_vma VAR_7;



  VAR_7 = VAR_3->fr_address - VAR_4->fr_address;
  if (VAR_3 == VAR_4)
    {
      *VAR_5 = VAR_7;
      return VAR_1;
    }


  VAR_6 = VAR_3;
  while (VAR_6->fr_type == VAR_2)
    {
      VAR_7 += VAR_6->fr_fix + VAR_6->fr_offset * VAR_6->fr_var;
      VAR_6 = VAR_6->fr_next;
      if (VAR_6 == ((void*)0))
 break;
      if (VAR_6 == VAR_4)
 {
   *VAR_5 = VAR_7;
   return VAR_1;
 }
    }


  VAR_7 = VAR_3->fr_address - VAR_4->fr_address;
  VAR_6 = VAR_4;
  while (VAR_6->fr_type == VAR_2)
    {
      VAR_7 -= VAR_6->fr_fix + VAR_6->fr_offset * VAR_6->fr_var;
      VAR_6 = VAR_6->fr_next;
      if (VAR_6 == ((void*)0))
 break;
      if (VAR_6 == VAR_3)
 {
   *VAR_5 = VAR_7;
   return VAR_1;
 }
    }

  return VAR_0;
}
