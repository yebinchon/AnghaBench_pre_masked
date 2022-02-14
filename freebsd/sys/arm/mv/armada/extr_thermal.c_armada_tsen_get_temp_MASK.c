
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_long ;
struct armada_thermal_softc {int stat_res; TYPE_1__* tdata; } ;
struct TYPE_2__ {int temp_shift; int temp_mask; int coef_b; int coef_m; int coef_div; scalar_t__ inverted; int (* is_valid ) (struct armada_thermal_softc*) ;} ;
typedef TYPE_1__ armada_tdata_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct armada_thermal_softc*) ;

__attribute__((used)) static int
FUNC_3(struct armada_thermal_softc *VAR_1, u_long *VAR_2)
{
 const armada_tdata_t *VAR_3;
 uint32_t VAR_4;
 u_long VAR_5;
 u_long VAR_6, VAR_7, VAR_8;

 VAR_3 = VAR_1->tdata;

 if ((VAR_3->is_valid != ((void*)0)) && !VAR_3->is_valid(VAR_1))
  return (VAR_0);

 VAR_4 = FUNC_1(VAR_1->stat_res, 0);
 VAR_4 = (VAR_4 >> VAR_3->temp_shift) & VAR_3->temp_mask;


 VAR_7 = VAR_3->coef_b;
 VAR_6 = VAR_3->coef_m;
 VAR_8 = VAR_3->coef_div;

 if (VAR_3->inverted)
  VAR_5 = ((VAR_6 * VAR_4) - VAR_7) / VAR_8;
 else
  VAR_5 = (VAR_7 - (VAR_6 * VAR_4)) / VAR_8;

 *VAR_2 = FUNC_0(VAR_5);

 return (0);
}
