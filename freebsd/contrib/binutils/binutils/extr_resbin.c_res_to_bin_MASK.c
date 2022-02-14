
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int windres_bfd ;
typedef int rc_uint_type ;
struct TYPE_5__ {int data; int length; } ;
struct TYPE_6__ {int rcdata; int toolbar; int versioninfo; int stringtable; int menu; int group_icon; int fontdir; int dialog; int group_cursor; int cursor; int acc; TYPE_1__ data; } ;
struct TYPE_7__ {int type; TYPE_2__ u; } ;
typedef TYPE_3__ rc_res_resource ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *,int ,int ) ;

rc_uint_type
FUNC_12 (windres_bfd *VAR_0, rc_uint_type VAR_1, const rc_res_resource *VAR_2)
{
  switch (VAR_2->type)
    {
    case 142:
    case 139:
    case 135:
    case 133:
      return FUNC_4 (VAR_0, VAR_1, VAR_2->u.data.length, VAR_2->u.data.data);
    case 143:
      return FUNC_0 (VAR_0, VAR_1, VAR_2->u.acc);
    case 141:
      return FUNC_1 (VAR_0, VAR_1, VAR_2->u.cursor);
    case 137:
      return FUNC_5 (VAR_0, VAR_1, VAR_2->u.group_cursor);
    case 140:
      return FUNC_2 (VAR_0, VAR_1, VAR_2->u.dialog);
    case 138:
      return FUNC_3 (VAR_0, VAR_1, VAR_2->u.fontdir);
    case 136:
      return FUNC_6 (VAR_0, VAR_1, VAR_2->u.group_icon);
    case 134:
      return FUNC_7 (VAR_0, VAR_1, VAR_2->u.menu);
    case 131:
      return FUNC_9 (VAR_0, VAR_1, VAR_2->u.stringtable);
    case 128:
      return FUNC_11 (VAR_0, VAR_1, VAR_2->u.versioninfo);
    case 130:
      return FUNC_10 (VAR_0, VAR_1, VAR_2->u.toolbar);
    case 129:
    case 132:
    default:
      return FUNC_8 (VAR_0, VAR_1, VAR_2->u.rcdata);
    }
}
