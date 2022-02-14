
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int rc_uint_type ;
struct TYPE_10__ {int language; } ;
struct TYPE_7__ {int * data; int length; } ;
struct TYPE_8__ {TYPE_1__ data; } ;
struct TYPE_9__ {TYPE_4__ res_info; TYPE_2__ u; int type; } ;
typedef TYPE_3__ rc_res_resource ;
typedef TYPE_4__ rc_res_res_info ;
typedef int rc_res_id ;
typedef int rc_rcdata_item ;
typedef int bfd_byte ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int *,int ,int ,int ,int ) ;
 int * FUNC_1 (int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2 (rc_res_id VAR_3, const rc_res_res_info *VAR_4,
     rc_rcdata_item *VAR_5)
{
  rc_res_resource *VAR_6;
  rc_uint_type VAR_7;
  bfd_byte *VAR_8;

  VAR_6 = FUNC_0 (&VAR_2, VAR_1, VAR_3, VAR_4->language, 0);

  VAR_8 = FUNC_1 (VAR_5, &VAR_7);
  VAR_6->type = VAR_0;
  VAR_6->u.data.length = VAR_7;
  VAR_6->u.data.data = VAR_8;
  VAR_6->res_info = *VAR_4;
}
