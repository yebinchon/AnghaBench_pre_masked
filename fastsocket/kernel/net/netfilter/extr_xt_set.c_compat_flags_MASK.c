
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
struct TYPE_3__ {int dim; int flags; } ;
struct TYPE_4__ {int* flags; TYPE_1__ compat; } ;
struct xt_set_info_v0 {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_0(struct xt_set_info_v0 *VAR_5)
{
 u_int8_t VAR_6;


 VAR_5->u.compat.dim = VAR_1;
 if (VAR_5->u.flags[0] & VAR_3)
  VAR_5->u.compat.flags |= VAR_2;
 for (VAR_6 = 0; VAR_6 < VAR_0-1 && VAR_5->u.flags[VAR_6]; VAR_6++) {
  VAR_5->u.compat.dim++;
  if (VAR_5->u.flags[VAR_6] & VAR_4)
   VAR_5->u.compat.flags |= (1<<VAR_5->u.compat.dim);
 }
}
