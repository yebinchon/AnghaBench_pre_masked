
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef unsigned int u_int ;
struct iomux_softc {int dummy; } ;


 unsigned int FUNC_0 (struct iomux_softc*,scalar_t__) ;
 int FUNC_1 (struct iomux_softc*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct iomux_softc *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 u_int VAR_3, VAR_4, VAR_5, VAR_6;


 if (VAR_1 == 0 && VAR_2 == 0)
  return;
 if ((VAR_2 & 0xff000000) == 0xff000000) {
  VAR_3 = VAR_2 & 0x000000ff;
  VAR_6 = (VAR_2 & 0x0000ff00) >> 8;
  VAR_5 = (VAR_2 & 0x00ff0000) >> 16;
  VAR_4 = ((1u << VAR_6) - 1) << VAR_5;
  VAR_2 = (FUNC_0(VAR_0, VAR_1) & ~VAR_4) | (VAR_3 << VAR_5);
 }
 FUNC_1(VAR_0, VAR_1, VAR_2);
}
