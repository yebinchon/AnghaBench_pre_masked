
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct armada_thermal_softc {int stat_res; TYPE_1__* tdata; } ;
typedef int boolean_t ;
struct TYPE_2__ {int is_valid_shift; } ;
typedef TYPE_1__ armada_tdata_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static boolean_t
FUNC_1(struct armada_thermal_softc *VAR_1)
{
 const armada_tdata_t *VAR_2;
 uint32_t VAR_3;
 boolean_t VAR_4;

 VAR_2 = VAR_1->tdata;
 VAR_3 = FUNC_0(VAR_1->stat_res, 0);

 VAR_3 >>= VAR_2->is_valid_shift;
 VAR_4 = ((VAR_3 & VAR_0) != 0);

 return (VAR_4);
}
