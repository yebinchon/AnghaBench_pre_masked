
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint16_t ;
struct mv88e61xxphy_softc {int dummy; } ;
typedef enum mv88e61xxphy_vtu_membership_type { ____Placeholder_mv88e61xxphy_vtu_membership_type } mv88e61xxphy_vtu_membership_type ;






 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (struct mv88e61xxphy_softc*,int ,unsigned int) ;
 int FUNC_1 (struct mv88e61xxphy_softc*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_2(struct mv88e61xxphy_softc *VAR_3, unsigned VAR_4,
    enum mv88e61xxphy_vtu_membership_type VAR_5)
{
 unsigned VAR_6, VAR_7;
 uint16_t VAR_8;
 uint16_t VAR_9;

 switch (VAR_5) {
 case 129:
  VAR_8 = 0;
  break;
 case 128:
  VAR_8 = 1;
  break;
 case 130:
  VAR_8 = 2;
  break;
 case 131:
  VAR_8 = 3;
  break;
 default:
  return;
 }

 if (VAR_4 < 4) {
  VAR_7 = VAR_1;
  VAR_6 = VAR_4 * 4;
 } else {
  VAR_7 = VAR_2;
  VAR_6 = (VAR_4 - 4) * 4;
 }

 VAR_9 = FUNC_0(VAR_3, VAR_0, VAR_7);
 VAR_9 |= VAR_8 << VAR_6;
 FUNC_1(VAR_3, VAR_0, VAR_7, VAR_9);
}
