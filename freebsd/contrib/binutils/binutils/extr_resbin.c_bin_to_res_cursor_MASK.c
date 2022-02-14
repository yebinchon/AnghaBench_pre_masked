
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int windres_bfd ;
typedef int rc_uint_type ;
struct TYPE_5__ {TYPE_3__* cursor; } ;
struct TYPE_6__ {TYPE_1__ u; int type; } ;
typedef TYPE_2__ rc_res_resource ;
struct TYPE_7__ {int length; int const* data; void* yhotspot; void* xhotspot; } ;
typedef TYPE_3__ rc_cursor ;
typedef int bfd_byte ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int *,int const*,int) ;

rc_res_resource *
FUNC_4 (windres_bfd *VAR_1, const bfd_byte *VAR_2, rc_uint_type VAR_3)
{
  rc_cursor *VAR_4;
  rc_res_resource *VAR_5;

  if (VAR_3 < 4)
    FUNC_2 (FUNC_0("cursor"));

  VAR_4 = (rc_cursor *) FUNC_1 (sizeof (rc_cursor));
  VAR_4->xhotspot = FUNC_3 (VAR_1, VAR_2, 2);
  VAR_4->yhotspot = FUNC_3 (VAR_1, VAR_2 + 2, 2);
  VAR_4->length = VAR_3 - 4;
  VAR_4->data = VAR_2 + 4;

  VAR_5 = (rc_res_resource *) FUNC_1 (sizeof *VAR_5);
  VAR_5->type = VAR_0;
  VAR_5->u.cursor = VAR_4;

  return VAR_5;
}
