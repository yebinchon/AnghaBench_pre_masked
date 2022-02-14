
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ichwd_softc {int tco_version; unsigned int timeout; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ichwd_softc*,int ) ;
 int FUNC_1 (struct ichwd_softc*,int ) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 int FUNC_3 (struct ichwd_softc*,int ,int) ;
 int FUNC_4 (struct ichwd_softc*,int ,int) ;

__attribute__((used)) static __inline void
FUNC_5(struct ichwd_softc *VAR_5, unsigned int VAR_6)
{

 if (VAR_6 < VAR_2)
  VAR_6 = VAR_2;

 if (VAR_5->tco_version == 1) {
  uint8_t VAR_7 = FUNC_0(VAR_5, VAR_3);

  VAR_7 &= (~VAR_0 & 0xff);
  if (VAR_6 > VAR_0)
   VAR_6 = VAR_0;
  VAR_7 |= VAR_6;
  FUNC_3(VAR_5, VAR_3, VAR_7);
 } else {
  uint16_t VAR_8 = FUNC_1(VAR_5, VAR_4);

  VAR_8 &= (~VAR_1 & 0xffff);
  if (VAR_6 > VAR_1)
   VAR_6 = VAR_1;
  VAR_8 |= VAR_6;
  FUNC_4(VAR_5, VAR_4, VAR_8);
 }

 VAR_5->timeout = VAR_6;

 FUNC_2(VAR_5->device, "timeout set to %u ticks\n", VAR_6);
}
