
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int windres_bfd ;
struct bin_toolbar {struct bin_toolbar* nitems; struct bin_toolbar* button_height; struct bin_toolbar* button_width; } ;
typedef int rc_uint_type ;
struct TYPE_6__ {int id; } ;
struct TYPE_7__ {TYPE_1__ u; } ;
struct TYPE_8__ {struct TYPE_8__* next; TYPE_2__ id; } ;
typedef TYPE_3__ rc_toolbar_item ;
struct TYPE_9__ {int button_width; int button_height; int nitems; TYPE_3__* items; } ;
typedef TYPE_4__ rc_toolbar ;
typedef struct bin_toolbar bfd_byte ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,struct bin_toolbar*,int,int) ;
 int FUNC_2 (int *,struct bin_toolbar*,int) ;

__attribute__((used)) static rc_uint_type
FUNC_3 (windres_bfd *VAR_1, rc_uint_type VAR_2, rc_toolbar *VAR_3)
{
  if (VAR_1)
    {
      struct bin_toolbar VAR_4;
      FUNC_2 (VAR_1, VAR_4.button_width, VAR_3->button_width);
      FUNC_2 (VAR_1, VAR_4.button_height, VAR_3->button_height);
      FUNC_2 (VAR_1, VAR_4.nitems, VAR_3->nitems);
      FUNC_1 (VAR_1, &VAR_4, VAR_2, VAR_0);
      if (VAR_3->nitems > 0)
 {
   rc_toolbar_item *VAR_5;
   bfd_byte *VAR_6;
   rc_uint_type VAR_7 = 0;

   VAR_6 = (bfd_byte *) FUNC_0 (VAR_3->nitems * 4);
   VAR_5=VAR_3->items;
   while(VAR_5 != ((void*)0))
     {
       FUNC_2 (VAR_1, VAR_6 + VAR_7, VAR_5->id.u.id);
       VAR_7 += 4;
       VAR_5 = VAR_5->next;
     }
   FUNC_1 (VAR_1, VAR_6, VAR_2 + VAR_0, VAR_7);
  }
    }
  VAR_2 += VAR_0 + VAR_3->nitems * 4;

  return VAR_2;
}
