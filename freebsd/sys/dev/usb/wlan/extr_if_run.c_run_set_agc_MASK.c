
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct run_softc {int mac_ver; } ;


 int FUNC_0 (struct run_softc*,int,int*) ;
 int FUNC_1 (struct run_softc*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct run_softc *VAR_0, uint8_t VAR_1)
{
 uint8_t VAR_2;

 if (VAR_0->mac_ver == 0x3572) {
  FUNC_0(VAR_0, 27, &VAR_2);
  VAR_2 &= ~(0x3 << 5);
  FUNC_1(VAR_0, 27, VAR_2 | 0 << 5);
  FUNC_1(VAR_0, 66, VAR_1);
  FUNC_1(VAR_0, 27, VAR_2 | 1 << 5);
  FUNC_1(VAR_0, 66, VAR_1);
 } else
  FUNC_1(VAR_0, 66, VAR_1);
}
