
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_47__ TYPE_8__ ;
typedef struct TYPE_46__ TYPE_7__ ;
typedef struct TYPE_45__ TYPE_6__ ;
typedef struct TYPE_44__ TYPE_5__ ;
typedef struct TYPE_43__ TYPE_4__ ;
typedef struct TYPE_42__ TYPE_3__ ;
typedef struct TYPE_41__ TYPE_2__ ;
typedef struct TYPE_40__ TYPE_1__ ;


typedef int rc_uint_type ;
struct TYPE_45__ {int language; } ;
struct TYPE_43__ {TYPE_8__* userdata; } ;
struct TYPE_44__ {TYPE_6__ res_info; TYPE_4__ u; int type; } ;
typedef TYPE_5__ rc_res_resource ;
typedef TYPE_6__ rc_res_res_info ;
struct TYPE_40__ {int id; } ;
struct TYPE_46__ {scalar_t__ named; TYPE_1__ u; } ;
typedef TYPE_7__ rc_res_id ;
struct TYPE_41__ {int * data; int length; } ;
struct TYPE_42__ {TYPE_2__ buffer; } ;
struct TYPE_47__ {TYPE_3__ u; int type; int * next; } ;
typedef TYPE_8__ rc_rcdata_item ;
typedef int bfd_byte ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_7__,TYPE_6__ const*,TYPE_8__*) ;
 int FUNC_1 (TYPE_7__,TYPE_6__ const*,TYPE_8__*) ;
 int FUNC_2 (TYPE_7__,TYPE_6__ const*,TYPE_8__*) ;
 int FUNC_3 (TYPE_7__,TYPE_6__ const*,TYPE_8__*) ;
 int FUNC_4 (TYPE_7__,TYPE_6__ const*,TYPE_8__*) ;
 int FUNC_5 (TYPE_7__,TYPE_6__ const*,TYPE_8__*) ;
 int FUNC_6 (TYPE_7__,TYPE_6__ const*,TYPE_8__*) ;
 int FUNC_7 (TYPE_7__,TYPE_6__ const*,TYPE_8__*) ;
 TYPE_5__* FUNC_8 (int *,int,TYPE_7__*,int ) ;
 int * FUNC_9 (TYPE_8__*,int *) ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_2 ;

void
FUNC_11 (rc_res_id VAR_3, rc_res_id VAR_4,
    const rc_res_res_info *VAR_5,
    rc_rcdata_item *VAR_6)
{
  rc_res_id VAR_7[3];
  rc_res_resource *VAR_8;
  bfd_byte *VAR_9;
  rc_uint_type VAR_10;


  if (VAR_4.named == 0)
    {
      switch (VAR_4.u.id)
      {
      case 132:
 FUNC_3 (VAR_3, VAR_5, VAR_6);
 return;
      case 133:
 FUNC_2 (VAR_3, VAR_5, VAR_6);
 return;
      case 129:
 FUNC_6 (VAR_3, VAR_5, VAR_6);
 return;
      case 135:
 FUNC_0 (VAR_3, VAR_5, VAR_6);
 return;
      case 134:
 FUNC_1 (VAR_3, VAR_5, VAR_6);
 return;
      case 130:
 FUNC_5 (VAR_3, VAR_5, VAR_6);
 return;
      case 131:
 FUNC_4 (VAR_3, VAR_5, VAR_6);
 return;
      case 128:
 FUNC_7 (VAR_3, VAR_5, VAR_6);
 return;
      default:

 break;
      }
    }
  VAR_7[0] = VAR_4;
  VAR_7[1] = VAR_3;
  VAR_7[2].named = 0;
  VAR_7[2].u.id = VAR_5->language;

  VAR_8 = FUNC_8 (& VAR_2, 3, VAR_7, 0);
  VAR_8->type = VAR_1;
  VAR_8->u.userdata = ((rc_rcdata_item *)
     FUNC_10 (sizeof (rc_rcdata_item)));
  VAR_8->u.userdata->next = ((void*)0);
  VAR_8->u.userdata->type = VAR_0;
  VAR_9 = FUNC_9 (VAR_6, &VAR_10);
  VAR_8->u.userdata->u.buffer.length = VAR_10;
  VAR_8->u.userdata->u.buffer.data = VAR_9;
  VAR_8->res_info = *VAR_5;
}
