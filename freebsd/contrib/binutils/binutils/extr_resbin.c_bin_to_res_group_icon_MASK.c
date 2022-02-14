
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int windres_bfd ;
typedef int rc_uint_type ;
struct TYPE_5__ {TYPE_3__* group_icon; } ;
struct TYPE_6__ {TYPE_1__ u; int type; } ;
typedef TYPE_2__ rc_res_resource ;
struct TYPE_7__ {struct TYPE_7__* next; void* index; int bytes; void* bits; void* planes; void* colors; void* height; void* width; } ;
typedef TYPE_3__ rc_group_icon ;
typedef int bfd_byte ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int *,int const*,int) ;
 int FUNC_5 (int *,int const*,int) ;
 void* FUNC_6 (int *,int const*,int) ;

__attribute__((used)) static rc_res_resource *
FUNC_7 (windres_bfd *VAR_1, const bfd_byte *VAR_2, rc_uint_type VAR_3)
{
  int VAR_4, VAR_5, VAR_6;
  rc_group_icon *VAR_7, **VAR_8;
  rc_res_resource *VAR_9;

  if (VAR_3 < 6)
    FUNC_3 (FUNC_0("group icon header"));

  VAR_4 = FUNC_4 (VAR_1, VAR_2 + 2, 2);
  if (VAR_4 != 1)
    FUNC_1 (FUNC_0("unexpected group icon type %d"), VAR_4);

  VAR_5 = FUNC_4 (VAR_1, VAR_2 + 4, 2);

  VAR_2 += 6;
  VAR_3 -= 6;

  VAR_7 = ((void*)0);
  VAR_8 = &VAR_7;

  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
    {
      rc_group_icon *VAR_10;

      if (VAR_3 < 14)
 FUNC_3 (FUNC_0("group icon"));

      VAR_10 = (rc_group_icon *) FUNC_2 (sizeof (rc_group_icon));

      VAR_10->width = FUNC_6 (VAR_1, VAR_2, 1);
      VAR_10->height = FUNC_6 (VAR_1, VAR_2 + 1, 1);
      VAR_10->colors = FUNC_6 (VAR_1, VAR_2 + 2, 1);
      VAR_10->planes = FUNC_4 (VAR_1, VAR_2 + 4, 2);
      VAR_10->bits = FUNC_4 (VAR_1, VAR_2 + 6, 2);
      VAR_10->bytes = FUNC_5 (VAR_1, VAR_2 + 8, 4);
      VAR_10->index = FUNC_4 (VAR_1, VAR_2 + 12, 2);

      VAR_10->next = ((void*)0);
      *VAR_8 = VAR_10;
      VAR_8 = &VAR_10->next;

      VAR_2 += 14;
      VAR_3 -= 14;
    }

  VAR_9 = (rc_res_resource *) FUNC_2 (sizeof *VAR_9);
  VAR_9->type = VAR_0;
  VAR_9->u.group_icon = VAR_7;

  return VAR_9;
}
