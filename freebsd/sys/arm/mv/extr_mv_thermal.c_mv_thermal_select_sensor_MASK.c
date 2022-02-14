
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mv_thermal_softc {int cur_sensor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mv_thermal_softc*,int ) ;
 int FUNC_1 (struct mv_thermal_softc*,int ,int) ;
 int FUNC_2 (struct mv_thermal_softc*) ;

__attribute__((used)) static int
FUNC_3(struct mv_thermal_softc *VAR_8, int VAR_9)
{
 uint32_t VAR_10;

 if (VAR_8->cur_sensor == VAR_9)
  return (0);


 VAR_10 = FUNC_0(VAR_8, VAR_0);
 VAR_10 &= ~(VAR_7 | VAR_6);
 FUNC_1(VAR_8, VAR_0, VAR_10);
 VAR_10 &= ~(VAR_4 << VAR_5);
 if (VAR_9) {

  VAR_10 |= VAR_3 << VAR_5;
  VAR_10 &= ~(VAR_1 << VAR_2);
  VAR_10 |= (VAR_9 - 1) << VAR_2;
 }
 FUNC_1(VAR_8, VAR_0, VAR_10);
 VAR_8->cur_sensor = VAR_9;


 VAR_10 = FUNC_0(VAR_8, VAR_0);
 VAR_10 |= VAR_7 | VAR_6;
 FUNC_1(VAR_8, VAR_0, VAR_10);

 return (FUNC_2(VAR_8));
}
