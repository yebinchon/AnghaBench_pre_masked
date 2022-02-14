
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint32_t ;
struct dwc_softc {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dwc_softc*,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(struct dwc_softc *VAR_0, uint8_t *VAR_1)
{
 uint32_t VAR_2, VAR_3, VAR_4;
 VAR_3 = FUNC_2(VAR_0, FUNC_1(0));
 VAR_2 = FUNC_2(VAR_0, FUNC_0(0)) & 0xffff;
 if ((VAR_3 != 0xffffffff) || (VAR_2 != 0xffff)) {
  VAR_1[0] = (VAR_3 >> 0) & 0xff;
  VAR_1[1] = (VAR_3 >> 8) & 0xff;
  VAR_1[2] = (VAR_3 >> 16) & 0xff;
  VAR_1[3] = (VAR_3 >> 24) & 0xff;
  VAR_1[4] = (VAR_2 >> 0) & 0xff;
  VAR_1[5] = (VAR_2 >> 8) & 0xff;
 } else {
  VAR_4 = FUNC_3() & 0x00ffffff;
  VAR_1[0] = 'b';
  VAR_1[1] = 's';
  VAR_1[2] = 'd';
  VAR_1[3] = VAR_4 >> 16;
  VAR_1[4] = VAR_4 >> 8;
  VAR_1[5] = VAR_4 >> 0;
 }

 return (0);
}
