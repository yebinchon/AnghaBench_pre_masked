
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mv_thermal_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mv_thermal_softc*,int ) ;
 int FUNC_1 (struct mv_thermal_softc*,int ,int) ;
 int FUNC_2 (struct mv_thermal_softc*) ;

__attribute__((used)) static int
FUNC_3(struct mv_thermal_softc *VAR_6)
{
 uint32_t VAR_7;


 VAR_7 = FUNC_0(VAR_6, VAR_0);
 VAR_7 &= ~VAR_4;
 VAR_7 |= VAR_5 | VAR_3;


 VAR_7 |= VAR_1 << VAR_2;

 FUNC_1(VAR_6, VAR_0, VAR_7);


 FUNC_2(VAR_6);

 return (0);
}
