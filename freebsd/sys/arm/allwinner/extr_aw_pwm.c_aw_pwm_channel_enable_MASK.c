
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct aw_pwm_softc {int enabled; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct aw_pwm_softc*,int ) ;
 int FUNC_1 (struct aw_pwm_softc*,int ,int) ;
 struct aw_pwm_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, u_int VAR_4, bool VAR_5)
{
 struct aw_pwm_softc *VAR_6;
 uint32_t VAR_7;

 VAR_6 = FUNC_2(VAR_3);

 if (VAR_5 && VAR_6->enabled)
  return (0);

 VAR_7 = FUNC_0(VAR_6, VAR_0);
 if (VAR_5)
  VAR_7 |= VAR_2 | VAR_1;
 else
  VAR_7 &= ~(VAR_2 | VAR_1);

 FUNC_1(VAR_6, VAR_0, VAR_7);

 VAR_6->enabled = VAR_5;

 return (0);
}
