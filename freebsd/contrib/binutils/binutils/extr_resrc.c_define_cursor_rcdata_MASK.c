
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int rc_uint_type ;
struct TYPE_9__ {int language; } ;
struct TYPE_7__ {TYPE_4__* cursor; } ;
struct TYPE_8__ {TYPE_3__ res_info; TYPE_1__ u; int type; } ;
typedef TYPE_2__ rc_res_resource ;
typedef TYPE_3__ rc_res_res_info ;
typedef int rc_res_id ;
typedef int rc_rcdata_item ;
struct TYPE_10__ {int length; int const* data; void* yhotspot; void* xhotspot; } ;
typedef TYPE_4__ rc_cursor ;
typedef int bfd_byte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int *,int ,int ,int ,int ) ;
 int * FUNC_1 (int *,int*) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_3 ;
 void* FUNC_3 (int *,int *,int) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4 (rc_res_id VAR_5, const rc_res_res_info *VAR_6,
        rc_rcdata_item *VAR_7)
{
  rc_cursor *VAR_8;
  rc_res_resource *VAR_9;
  rc_uint_type VAR_10;
  bfd_byte *VAR_11;

  VAR_11 = FUNC_1 (VAR_7, &VAR_10);

  VAR_8 = (rc_cursor *) FUNC_2 (sizeof (rc_cursor));
  VAR_8->xhotspot = FUNC_3 (&VAR_4, VAR_11, VAR_10);
  VAR_8->yhotspot = FUNC_3 (&VAR_4, VAR_11 + 2, VAR_10 - 2);
  VAR_8->length = VAR_10 - VAR_0;
  VAR_8->data = (const bfd_byte *) (VAR_7 + VAR_0);

  VAR_9 = FUNC_0 (&VAR_3, VAR_2, VAR_5, VAR_6->language, 0);
  VAR_9->type = VAR_1;
  VAR_9->u.cursor = VAR_8;
  VAR_9->res_info = *VAR_6;
}
