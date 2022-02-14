
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int language; } ;
struct TYPE_6__ {int * acc; } ;
struct TYPE_7__ {TYPE_3__ res_info; TYPE_1__ u; int type; } ;
typedef TYPE_2__ rc_res_resource ;
typedef TYPE_3__ rc_res_res_info ;
typedef int rc_res_id ;
typedef int rc_accelerator ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *,int ,int ,int ,int ) ;
 int VAR_2 ;

void
FUNC_1 (rc_res_id VAR_3, const rc_res_res_info *VAR_4,
      rc_accelerator *VAR_5)
{
  rc_res_resource *VAR_6;

  VAR_6 = FUNC_0 (&VAR_2, VAR_1, VAR_3,
    VAR_4->language, 0);
  VAR_6->type = VAR_0;
  VAR_6->u.acc = VAR_5;
  VAR_6->res_info = *VAR_4;
}
