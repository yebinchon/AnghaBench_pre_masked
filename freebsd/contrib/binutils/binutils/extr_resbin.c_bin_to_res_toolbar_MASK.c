
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int windres_bfd ;
typedef int rc_uint_type ;
struct TYPE_8__ {int id; } ;
struct TYPE_9__ {TYPE_1__ u; scalar_t__ named; } ;
struct TYPE_11__ {struct TYPE_11__* next; struct TYPE_11__* prev; TYPE_2__ id; } ;
typedef TYPE_4__ rc_toolbar_item ;
struct TYPE_12__ {int nitems; TYPE_4__* items; void* button_height; void* button_width; } ;
typedef TYPE_5__ rc_toolbar ;
struct TYPE_10__ {TYPE_5__* toolbar; } ;
struct TYPE_13__ {TYPE_3__ u; int type; } ;
typedef TYPE_6__ rc_res_resource ;
typedef int bfd_byte ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 void* FUNC_1 (int *,int const*,int) ;

__attribute__((used)) static rc_res_resource *
FUNC_2 (windres_bfd *VAR_1, const bfd_byte *VAR_2, rc_uint_type VAR_3)
{
  rc_toolbar *VAR_4;
  rc_res_resource *VAR_5;
  rc_uint_type VAR_6;

  VAR_4 = (rc_toolbar *) FUNC_0 (sizeof (rc_toolbar));
  VAR_4->button_width = FUNC_1 (VAR_1, VAR_2, 4);
  VAR_4->button_height = FUNC_1 (VAR_1, VAR_2 + 4, 4);
  VAR_4->nitems = FUNC_1 (VAR_1, VAR_2 + 8, 4);
  VAR_4->items = ((void*)0);

  VAR_2 += 12;
  VAR_3 -= 12;
  for (VAR_6=0 ; VAR_6 < VAR_4->nitems; VAR_6++)
  {
    rc_toolbar_item *VAR_7;
    VAR_7 = (rc_toolbar_item *) FUNC_0 (sizeof (rc_toolbar_item));
    VAR_7->id.named = 0;
    VAR_7->id.u.id = (int) FUNC_1 (VAR_1, VAR_2, 4);
    VAR_7->prev = VAR_7->next = ((void*)0);
    VAR_2 += 4;
    VAR_3 -= 4;
    if(VAR_4->items) {
      rc_toolbar_item *VAR_8 = VAR_4->items;
      while (VAR_8->next != ((void*)0))
 VAR_8 = VAR_8->next;
      VAR_7->prev = VAR_8;
      VAR_8->next = VAR_7;
    }
    else
      VAR_4->items = VAR_7;
  }
  VAR_5 = (rc_res_resource *) FUNC_0 (sizeof *VAR_5);
  VAR_5->type = VAR_0;
  VAR_5->u.toolbar = VAR_4;
  return VAR_5;
}
