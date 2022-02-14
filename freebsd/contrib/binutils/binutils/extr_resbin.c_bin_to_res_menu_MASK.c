
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int windres_bfd ;
typedef int rc_uint_type ;
struct TYPE_5__ {TYPE_3__* menu; } ;
struct TYPE_6__ {TYPE_1__ u; int type; } ;
typedef TYPE_2__ rc_res_resource ;
struct TYPE_7__ {int items; scalar_t__ help; } ;
typedef TYPE_3__ rc_menu ;
typedef int bfd_byte ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int const*,int,int*) ;
 int FUNC_2 (int *,int const*,int,int*) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int const*,int) ;
 scalar_t__ FUNC_7 (int *,int const*,int) ;

rc_res_resource *
FUNC_8 (windres_bfd *VAR_1, const bfd_byte *VAR_2, rc_uint_type VAR_3)
{
  rc_res_resource *VAR_4;
  rc_menu *VAR_5;
  rc_uint_type VAR_6, VAR_7;

  VAR_4 = (rc_res_resource *) FUNC_4 (sizeof *VAR_4);
  VAR_4->type = VAR_0;

  VAR_5 = (rc_menu *) FUNC_4 (sizeof (rc_menu));
  VAR_4->u.menu = VAR_5;

  if (VAR_3 < 2)
    FUNC_5 (FUNC_0("menu header"));

  VAR_6 = FUNC_6 (VAR_1, VAR_2, 2);

  if (VAR_6 == 0)
    {
      if (VAR_3 < 4)
 FUNC_5 (FUNC_0("menu header"));
      VAR_5->help = 0;
      VAR_5->items = FUNC_2 (VAR_1, VAR_2 + 4, VAR_3 - 4, &VAR_7);
    }
  else if (VAR_6 == 1)
    {
      rc_uint_type VAR_8;

      if (VAR_3 < 8)
 FUNC_5 (FUNC_0("menuex header"));
      VAR_5->help = FUNC_7 (VAR_1, VAR_2 + 4, 4);
      VAR_8 = FUNC_6 (VAR_1, VAR_2 + 2, 2);
      if (VAR_8 + 4 >= VAR_3)
 FUNC_5 (FUNC_0("menuex offset"));
      VAR_5->items = FUNC_1 (VAR_1, VAR_2 + 4 + VAR_8,
      VAR_3 - (4 + VAR_8), &VAR_7);
    }
  else
    FUNC_3 (FUNC_0("unsupported menu version %d"), (int) VAR_6);

  return VAR_4;
}
