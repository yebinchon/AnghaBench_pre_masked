
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int rc_uint_type ;
typedef int rc_res_resource ;
struct TYPE_6__ {int id; } ;
struct TYPE_7__ {TYPE_1__ u; scalar_t__ named; } ;
typedef TYPE_2__ rc_res_id ;


 int FUNC_0 (int *,int *,int,TYPE_2__*,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1 (rc_res_resource *VAR_1, const rc_res_id *VAR_2, const rc_res_id *VAR_3,
    rc_uint_type VAR_4, int VAR_5)
{
  rc_res_id VAR_6[3];

  VAR_6[0] = *VAR_2;
  VAR_6[1] = *VAR_3;
  VAR_6[2].named = 0;
  VAR_6[2].u.id = VAR_4;
  FUNC_0 (&VAR_0, VAR_1, 3, VAR_6, VAR_5);
}
