
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ freq; } ;
struct cf_level {TYPE_1__ total_set; } ;
struct aw_thermal_softc {scalar_t__ throttle; scalar_t__ min_freq; } ;


 int VAR_0 ;
 int FUNC_0 (struct aw_thermal_softc*,int ) ;
 int FUNC_1 (struct aw_thermal_softc*,int ) ;
 int FUNC_2 (struct aw_thermal_softc*,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_3(void *VAR_2, const struct cf_level *VAR_3, int *VAR_4)
{
 struct aw_thermal_softc *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = VAR_2;

 if (VAR_1 == 0 || VAR_5->throttle == 0 ||
     VAR_3->total_set.freq == VAR_5->min_freq)
  return;

 VAR_6 = FUNC_1(VAR_5, 0);
 VAR_7 = FUNC_0(VAR_5, 0);

 if (VAR_6 < VAR_7)
  FUNC_2(VAR_5, 0);
 else
  *VAR_4 = VAR_0;
}
