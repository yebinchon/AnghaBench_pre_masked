
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* rc_uint_type ;
struct TYPE_10__ {struct TYPE_10__* next; } ;
typedef TYPE_2__ rc_toolbar_item ;
struct TYPE_11__ {scalar_t__ nitems; TYPE_2__* items; void* button_height; void* button_width; } ;
typedef TYPE_3__ rc_toolbar ;
struct TYPE_13__ {int language; } ;
struct TYPE_9__ {TYPE_3__* toolbar; } ;
struct TYPE_12__ {TYPE_5__ res_info; TYPE_1__ u; int type; } ;
typedef TYPE_4__ rc_res_resource ;
typedef TYPE_5__ rc_res_res_info ;
typedef int rc_res_id ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int *,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;

void
FUNC_2 (rc_res_id VAR_3, rc_res_res_info *VAR_4, rc_uint_type VAR_5, rc_uint_type VAR_6,
  rc_toolbar_item *VAR_7)
{
  rc_toolbar *VAR_8;
  rc_res_resource *VAR_9;

  VAR_8 = (rc_toolbar *) FUNC_1 (sizeof (rc_toolbar));
  VAR_8->button_width = VAR_5;
  VAR_8->button_height = VAR_6;
  VAR_8->nitems = 0;
  VAR_8->items = VAR_7;
  while (VAR_7 != ((void*)0))
  {
    VAR_8->nitems+=1;
    VAR_7 = VAR_7->next;
  }
  VAR_9 = FUNC_0 (&VAR_2, VAR_1, VAR_3, VAR_4->language, 0);
  VAR_9->type = VAR_0;
  VAR_9->u.toolbar = VAR_8;
  VAR_9->res_info = *VAR_4;
}
