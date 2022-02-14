
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct mv_thermal_softc {TYPE_1__* config; } ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {scalar_t__ calib_mul; scalar_t__ calib_add; scalar_t__ calib_div; scalar_t__ signed_value; } ;


 scalar_t__ FUNC_0 (struct mv_thermal_softc*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct mv_thermal_softc*,int) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct mv_thermal_softc *VAR_2, int VAR_3, int *VAR_4)
{
 uint32_t VAR_5;
 int64_t VAR_6, VAR_7;

 VAR_7 = FUNC_2(VAR_2, VAR_3);
 if (VAR_7 != 0)
  return (VAR_7);

 VAR_5 = FUNC_0(VAR_2, VAR_0) & VAR_1;

 if (VAR_2->config->signed_value)
  VAR_6 = FUNC_3(VAR_5, FUNC_1(VAR_1) - 1);
 else
  VAR_6 = VAR_5;

 *VAR_4 = ((VAR_6 * VAR_2->config->calib_mul) - VAR_2->config->calib_add) /
  VAR_2->config->calib_div;

 return (0);
}
