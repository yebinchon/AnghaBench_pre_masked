
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* decl_t ;
struct TYPE_7__ {scalar_t__ min_occ_cycle_num; scalar_t__ max_occ_cycle_num; } ;
struct TYPE_6__ {int decls_num; TYPE_1__** decls; } ;
struct TYPE_5__ {scalar_t__ mode; } ;


 TYPE_3__* FUNC_0 (TYPE_1__*) ;
 double VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ VAR_3 ;
 double FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static double
FUNC_3 (void)
{
  decl_t VAR_4;
  double VAR_5;
  double VAR_6;
  int VAR_7;

  VAR_5 = 1.0;
  for (VAR_7 = 0; VAR_7 < VAR_2->decls_num; VAR_7++)
    {
      VAR_4 = VAR_2->decls [VAR_7];
      if (VAR_4->mode == VAR_3)
 {
   VAR_6 = FUNC_1 (FUNC_2 (FUNC_0 (VAR_4)->max_occ_cycle_num
     - FUNC_0 (VAR_4)->min_occ_cycle_num + 1.0)
                            / VAR_1);
   if (VAR_0 / VAR_6
       > VAR_5)
     VAR_5 *= VAR_6;
 }
    }
  return VAR_5;
}
