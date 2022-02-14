
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int rc_uint_type ;
struct TYPE_10__ {int id; } ;
struct TYPE_11__ {TYPE_1__ u; scalar_t__ named; } ;
typedef TYPE_2__ rc_res_id ;
typedef int rc_rcdata_item ;
typedef int rc_dialog_ex ;
struct TYPE_12__ {int help; int * data; TYPE_2__ text; } ;
typedef TYPE_3__ rc_dialog_control ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 TYPE_3__* FUNC_1 (TYPE_2__,int,int,int,int ,int ,TYPE_2__,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,char*) ;

rc_dialog_control *
FUNC_4 (rc_res_id VAR_4, rc_uint_type VAR_5, rc_uint_type VAR_6,
       rc_uint_type VAR_7, rc_uint_type VAR_8,
       rc_uint_type VAR_9, rc_uint_type VAR_10,
       rc_rcdata_item *VAR_11, rc_dialog_ex *VAR_12)
{
  rc_dialog_control *VAR_13;
  rc_res_id VAR_14;
  rc_res_id VAR_15;

  if (VAR_8 == 0)
    VAR_8 = VAR_1 | VAR_2 | VAR_3;
  FUNC_3 (&VAR_14, "");
  VAR_15.named = 0;
  VAR_15.u.id = VAR_0;
  VAR_13 = FUNC_1 (VAR_14, VAR_5, VAR_6, VAR_7, 0, 0, VAR_15, VAR_8, VAR_9);
  VAR_13->text = VAR_4;
  if (VAR_10 && ! VAR_12)
    FUNC_2 (FUNC_0("help ID requires DIALOGEX"));
  if (VAR_11 && ! VAR_12)
    FUNC_2 (FUNC_0("control data requires DIALOGEX"));
  VAR_13->help = VAR_10;
  VAR_13->data = VAR_11;

  return VAR_13;
}
