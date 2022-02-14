
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * var; int * fixed; } ;
typedef TYPE_3__ rc_versioninfo ;
typedef int rc_ver_info ;
typedef int rc_uint_type ;
struct TYPE_6__ {int language; } ;
struct TYPE_7__ {TYPE_3__* versioninfo; } ;
struct TYPE_9__ {TYPE_1__ res_info; TYPE_2__ u; int type; } ;
typedef TYPE_4__ rc_res_resource ;
typedef int rc_res_id ;
typedef int rc_fixed_versioninfo ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int *,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;

void
FUNC_2 (rc_res_id VAR_3, rc_uint_type VAR_4,
      rc_fixed_versioninfo *VAR_5,
      rc_ver_info *VAR_6)
{
  rc_res_resource *VAR_7;

  VAR_7 = FUNC_0 (&VAR_2, VAR_1, VAR_3, VAR_4, 0);
  VAR_7->type = VAR_0;
  VAR_7->u.versioninfo = ((rc_versioninfo *)
        FUNC_1 (sizeof (rc_versioninfo)));
  VAR_7->u.versioninfo->fixed = VAR_5;
  VAR_7->u.versioninfo->var = VAR_6;
  VAR_7->res_info.language = VAR_4;
}
