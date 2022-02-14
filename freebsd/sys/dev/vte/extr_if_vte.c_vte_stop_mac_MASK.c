
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct vte_softc {int vte_dev; } ;


 int FUNC_0 (struct vte_softc*,int ) ;
 int FUNC_1 (struct vte_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct vte_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_5(struct vte_softc *VAR_4)
{
 uint16_t VAR_5;
 int VAR_6;

 FUNC_3(VAR_4);


 VAR_5 = FUNC_0(VAR_4, VAR_2);
 if ((VAR_5 & (VAR_0 | VAR_1)) != 0) {
  VAR_5 &= ~(VAR_0 | VAR_1);
  FUNC_1(VAR_4, VAR_2, VAR_5);
  for (VAR_6 = VAR_3; VAR_6 > 0; VAR_6--) {
   VAR_5 = FUNC_0(VAR_4, VAR_2);
   if ((VAR_5 & (VAR_0 | VAR_1)) == 0)
    break;
   FUNC_2(10);
  }
  if (VAR_6 == 0)
   FUNC_4(VAR_4->vte_dev,
       "could not disable RX/TX MAC(0x%04x)!\n", VAR_5);
 }
}
