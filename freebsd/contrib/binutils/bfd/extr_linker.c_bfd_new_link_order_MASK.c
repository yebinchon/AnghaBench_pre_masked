
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bfd_link_order {struct bfd_link_order* next; int type; } ;
typedef int bfd_size_type ;
typedef int bfd ;
struct TYPE_6__ {struct bfd_link_order* link_order; } ;
struct TYPE_5__ {struct bfd_link_order* link_order; } ;
struct TYPE_7__ {TYPE_2__ map_tail; TYPE_1__ map_head; } ;
typedef TYPE_3__ asection ;


 int VAR_0 ;
 struct bfd_link_order* FUNC_0 (int *,int) ;

struct bfd_link_order *
FUNC_1 (bfd *VAR_1, asection *VAR_2)
{
  bfd_size_type VAR_3 = sizeof (struct bfd_link_order);
  struct bfd_link_order *VAR_4;

  VAR_4 = FUNC_0 (VAR_1, VAR_3);
  if (!VAR_4)
    return ((void*)0);

  VAR_4->type = VAR_0;

  if (VAR_2->map_tail.link_order != ((void*)0))
    VAR_2->map_tail.link_order->next = VAR_4;
  else
    VAR_2->map_head.link_order = VAR_4;
  VAR_2->map_tail.link_order = VAR_4;

  return VAR_4;
}
