
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_link_order {scalar_t__ type; struct bfd_link_order* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

unsigned int
FUNC_0 (struct bfd_link_order *VAR_2)
{
  register unsigned int VAR_3;
  register struct bfd_link_order *VAR_4;

  VAR_3 = 0;
  for (VAR_4 = VAR_2; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
    {
      if (VAR_4->type == VAR_0
   || VAR_4->type == VAR_1)
 ++VAR_3;
    }

  return VAR_3;
}
