
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int fontdir; } ;
struct TYPE_9__ {int res_info; TYPE_2__ u; int type; } ;
typedef TYPE_3__ rc_res_resource ;
struct TYPE_7__ {int id; } ;
struct TYPE_10__ {TYPE_1__ u; scalar_t__ named; } ;
typedef TYPE_4__ rc_res_id ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int *,int ,TYPE_4__,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  rc_res_resource *VAR_5;
  rc_res_id VAR_6;

  VAR_6.named = 0;
  VAR_6.u.id = 1;

  VAR_5 = FUNC_0 (&VAR_4, VAR_1, VAR_6, 0x409, 0);

  VAR_5->type = VAR_0;
  VAR_5->u.fontdir = VAR_2;
  VAR_5->res_info = VAR_3;
}
