
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int windres_bfd ;
typedef int unichar ;
struct bin_res_id {struct bin_res_id* id; struct bin_res_id* sig; } ;
typedef int rc_uint_type ;
struct TYPE_5__ {int length; int * name; } ;
struct TYPE_6__ {TYPE_1__ n; scalar_t__ id; } ;
struct TYPE_7__ {int named; TYPE_2__ u; } ;
typedef TYPE_3__ rc_res_id ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int*,int,struct bin_res_id*,scalar_t__) ;
 int * FUNC_1 (int *,int*,int,int*) ;
 scalar_t__ FUNC_2 (int *,struct bin_res_id*,int) ;

__attribute__((used)) static void
FUNC_3 (windres_bfd *VAR_1, rc_uint_type *VAR_2, rc_uint_type VAR_3, rc_res_id *VAR_4)
{
  struct bin_res_id VAR_5;
  unsigned short VAR_6;
  unichar *VAR_7 = ((void*)0);
  rc_uint_type VAR_8;

  FUNC_0 (VAR_1, VAR_2, VAR_3, &VAR_5, VAR_0 - 2);
  VAR_6 = (unsigned short) FUNC_2 (VAR_1, VAR_5.sig, 2);
  if (VAR_6 == 0xFFFF)
    {
      FUNC_0 (VAR_1, VAR_2, VAR_3, VAR_5.id, VAR_0 - 2);
      VAR_4->named = 0;
      VAR_4->u.id = FUNC_2 (VAR_1, VAR_5.id, 2);
    }
  else

    {
      VAR_2[0] -= 2;
      VAR_7 = FUNC_1 (VAR_1, VAR_2, VAR_3, &VAR_8);
      VAR_4->named = 1;
      VAR_4->u.n.length = VAR_8;
      VAR_4->u.n.name = VAR_7;
    }
}
