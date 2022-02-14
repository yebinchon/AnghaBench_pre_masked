
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int windres_bfd ;
typedef int rc_uint_type ;
struct TYPE_5__ {TYPE_3__* acc; } ;
struct TYPE_6__ {TYPE_1__ u; int type; } ;
typedef TYPE_2__ rc_res_resource ;
struct TYPE_7__ {int flags; struct TYPE_7__* next; void* id; void* key; } ;
typedef TYPE_3__ rc_accelerator ;
typedef int bfd_byte ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int *,int const*,int) ;

__attribute__((used)) static rc_res_resource *
FUNC_4 (windres_bfd *VAR_2, const bfd_byte *VAR_3, rc_uint_type VAR_4)
{
  rc_accelerator *VAR_5, **VAR_6;
  rc_res_resource *VAR_7;

  VAR_5 = ((void*)0);
  VAR_6 = &VAR_5;

  while (1)
    {
      rc_accelerator *VAR_8;

      if (VAR_4 < 8)
 FUNC_2 (FUNC_0("accelerator"));

      VAR_8 = (rc_accelerator *) FUNC_1 (sizeof (rc_accelerator));

      VAR_8->flags = FUNC_3 (VAR_2, VAR_3, 2);
      VAR_8->key = FUNC_3 (VAR_2, VAR_3 + 2, 2);
      VAR_8->id = FUNC_3 (VAR_2, VAR_3 + 4, 2);

      VAR_8->next = ((void*)0);
      *VAR_6 = VAR_8;
      VAR_6 = &VAR_8->next;

      if ((VAR_8->flags & VAR_0) != 0)
 break;

      VAR_3 += 8;
      VAR_4 -= 8;
    }

  VAR_7 = (rc_res_resource *) FUNC_1 (sizeof (rc_res_resource));
  VAR_7->type = VAR_1;
  VAR_7->u.acc = VAR_5;

  return VAR_7;
}
