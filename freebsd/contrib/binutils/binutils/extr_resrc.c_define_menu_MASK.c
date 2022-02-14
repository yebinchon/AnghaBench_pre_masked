
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int language; } ;
struct TYPE_7__ {TYPE_4__* menu; } ;
struct TYPE_8__ {TYPE_3__ res_info; TYPE_1__ u; int type; } ;
typedef TYPE_2__ rc_res_resource ;
typedef TYPE_3__ rc_res_res_info ;
typedef int rc_res_id ;
typedef int rc_menuitem ;
struct TYPE_10__ {scalar_t__ help; int * items; } ;
typedef TYPE_4__ rc_menu ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;

void
FUNC_2 (rc_res_id VAR_3, const rc_res_res_info *VAR_4,
      rc_menuitem *VAR_5)
{
  rc_menu *VAR_6;
  rc_res_resource *VAR_7;

  VAR_6 = (rc_menu *) FUNC_1 (sizeof (rc_menu));
  VAR_6->items = VAR_5;
  VAR_6->help = 0;

  VAR_7 = FUNC_0 (&VAR_2, VAR_1, VAR_3, VAR_4->language, 0);
  VAR_7->type = VAR_0;
  VAR_7->u.menu = VAR_6;
  VAR_7->res_info = *VAR_4;
}
