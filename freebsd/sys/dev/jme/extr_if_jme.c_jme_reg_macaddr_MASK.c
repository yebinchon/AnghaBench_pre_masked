
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jme_softc {int* jme_eaddr; int jme_dev; } ;


 int FUNC_0 (struct jme_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2(struct jme_softc *VAR_2)
{
 uint32_t VAR_3, VAR_4;


 VAR_3 = FUNC_0(VAR_2, VAR_0);
 VAR_4 = FUNC_0(VAR_2, VAR_1);
 VAR_4 &= 0xFFFF;
 if ((VAR_3 == 0 && VAR_4 == 0) ||
     (VAR_3 == 0xFFFFFFFF && VAR_4 == 0xFFFF)) {
  FUNC_1(VAR_2->jme_dev,
      "Failed to retrieve Ethernet address.\n");
 } else {







  VAR_2->jme_eaddr[0] = (VAR_3 >> 0) & 0xFF;
  VAR_2->jme_eaddr[1] = (VAR_3 >> 8) & 0xFF;
  VAR_2->jme_eaddr[2] = (VAR_3 >> 16) & 0xFF;
  VAR_2->jme_eaddr[3] = (VAR_3 >> 24) & 0xFF;
  VAR_2->jme_eaddr[4] = (VAR_4 >> 0) & 0xFF;
  VAR_2->jme_eaddr[5] = (VAR_4 >> 8) & 0xFF;
 }
}
