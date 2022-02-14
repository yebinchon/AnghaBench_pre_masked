
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rt2860_softc {int mac_ver; } ;


 int FUNC_0 (struct rt2860_softc*,int ) ;
 int FUNC_1 (struct rt2860_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct rt2860_softc*,int) ;
 int FUNC_3 (struct rt2860_softc*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct rt2860_softc *VAR_3, int VAR_4)
{
 uint32_t VAR_5;

 if (VAR_4) {
  if (VAR_3->mac_ver == 0x5390) {
   FUNC_3(VAR_3, 152,
       FUNC_2(VAR_3, 152) & ~0x80);
  } else {
   VAR_5 = FUNC_0(VAR_3, VAR_2);
   FUNC_1(VAR_3, VAR_2, VAR_5 & ~VAR_0);
   VAR_5 = FUNC_0(VAR_3, VAR_1);
   FUNC_1(VAR_3, VAR_1, (VAR_5 & ~0x0808) | 0x08);
  }
 } else {
  if (VAR_3->mac_ver == 0x5390) {
   FUNC_3(VAR_3, 152,
       FUNC_2(VAR_3, 152) | 0x80);
  } else {
   VAR_5 = FUNC_0(VAR_3, VAR_2);
   FUNC_1(VAR_3, VAR_2, VAR_5 | VAR_0);
   VAR_5 = FUNC_0(VAR_3, VAR_1);
   FUNC_1(VAR_3, VAR_1, VAR_5 & ~0x0808);
  }
 }
}
