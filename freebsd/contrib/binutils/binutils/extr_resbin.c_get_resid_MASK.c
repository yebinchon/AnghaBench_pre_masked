
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int windres_bfd ;
typedef int rc_uint_type ;
struct TYPE_5__ {int length; int name; } ;
struct TYPE_6__ {TYPE_1__ n; void* id; } ;
struct TYPE_7__ {int named; TYPE_2__ u; } ;
typedef TYPE_3__ rc_res_id ;
typedef int bfd_byte ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int const*,int,int*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int *,int const*,int) ;

__attribute__((used)) static int
FUNC_4 (windres_bfd *VAR_0, rc_res_id *VAR_1, const bfd_byte *VAR_2,
    rc_uint_type VAR_3)
{
  rc_uint_type VAR_4;

  if (VAR_3 < 2)
    FUNC_2 (FUNC_0("resource ID"));

  VAR_4 = FUNC_3 (VAR_0, VAR_2, 2);
  if (VAR_4 == 0xffff)
    {
      if (VAR_3 < 4)
 FUNC_2 (FUNC_0("resource ID"));
      VAR_1->named = 0;
      VAR_1->u.id = FUNC_3 (VAR_0, VAR_2 + 2, 2);
      return 4;
    }
  else
    {
      VAR_1->named = 1;
      VAR_1->u.n.name = FUNC_1 (VAR_0, VAR_2, VAR_3, &VAR_1->u.n.length);
      return VAR_1->u.n.length * 2 + 2;
    }
}
