
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct dc_softc {int dummy; } ;


 int FUNC_0 (struct dc_softc*,int ) ;
 int FUNC_1 (struct dc_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct dc_softc *VAR_5, int VAR_6, uint16_t *VAR_7)
{
 int VAR_8;
 uint32_t VAR_9;

 FUNC_1(VAR_5, VAR_1, VAR_0 | VAR_6);

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  FUNC_2(1);
  VAR_9 = FUNC_0(VAR_5, VAR_3);
  if (!(VAR_9 & VAR_2)) {
   *VAR_7 = (uint16_t)(VAR_9 & 0xFFFF);
   return;
  }
 }
}
