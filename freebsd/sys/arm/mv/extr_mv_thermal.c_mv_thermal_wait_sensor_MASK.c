
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mv_thermal_softc {TYPE_1__* config; } ;
struct TYPE_2__ {int valid_mask; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct mv_thermal_softc*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct mv_thermal_softc *VAR_2)
{
 uint32_t VAR_3;
 uint32_t VAR_4;

 VAR_4 = 100000;
 while (--VAR_4 > 0) {
  VAR_3 = FUNC_1(VAR_2, VAR_1);
  if ((VAR_3 & VAR_2->config->valid_mask) == VAR_2->config->valid_mask)
   break;
  FUNC_0(100);
 }
 if (VAR_4 == 0) {
  return (VAR_0);
 }

 return (0);
}
