
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bfd_section {int flags; unsigned int alignment_power; struct bfd_section* next; } ;
struct bfd_link_info {int dummy; } ;
struct TYPE_4__ {struct bfd_section* sections; } ;
typedef TYPE_1__ bfd ;
struct TYPE_5__ {struct bfd_section* tls_sec; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct bfd_link_info*) ;

struct bfd_section *
FUNC_1 (bfd *VAR_1, struct bfd_link_info *VAR_2)
{
  struct bfd_section *VAR_3, *VAR_4;
  unsigned int VAR_5 = 0;

  for (VAR_3 = VAR_1->sections; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
    if ((VAR_3->flags & VAR_0) != 0)
      break;
  VAR_4 = VAR_3;

  for (; VAR_3 != ((void*)0) && (VAR_3->flags & VAR_0) != 0; VAR_3 = VAR_3->next)
    if (VAR_3->alignment_power > VAR_5)
      VAR_5 = VAR_3->alignment_power;

  FUNC_0 (VAR_2)->tls_sec = VAR_4;



  if (VAR_4 != ((void*)0))
    VAR_4->alignment_power = VAR_5;

  return VAR_4;
}
