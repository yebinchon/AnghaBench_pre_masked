
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ichwd_softc {int tco_version; int device; int ich; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ichwd_softc*,int ) ;
 int FUNC_2 (struct ichwd_softc*,int ) ;
 int FUNC_3 (struct ichwd_softc*,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct ichwd_softc*,int ,int) ;
 int FUNC_6 (struct ichwd_softc*,int ,int) ;
 int FUNC_7 (struct ichwd_softc*,int ,int) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,int,int) ;

__attribute__((used)) static __inline int
FUNC_10(struct ichwd_softc *VAR_6)
{
 uint32_t VAR_7;
 int VAR_8 = 0;


 switch (VAR_6->tco_version) {
 case 1:
  VAR_7 = FUNC_8(VAR_6->ich, VAR_2, 1);
  VAR_7 &= ~VAR_3;
  FUNC_9(VAR_6->ich, VAR_2, VAR_7, 1);
  VAR_7 = FUNC_8(VAR_6->ich, VAR_2, 1);
  if (VAR_7 & VAR_3)
   VAR_8 = VAR_0;
  break;
 case 2:
  VAR_7 = FUNC_2(VAR_6, 0);
  VAR_7 &= ~VAR_1;
  FUNC_6(VAR_6, 0, VAR_7);
  VAR_7 = FUNC_2(VAR_6, 0);
  if (VAR_7 & VAR_1)
   VAR_8 = VAR_0;
  break;
 case 3:
  VAR_7 = FUNC_3(VAR_6, 0);
  VAR_7 &= ~VAR_4;
  FUNC_7(VAR_6, 0, VAR_7);
  VAR_7 = FUNC_3(VAR_6, 0);
  if (VAR_7 & VAR_4)
   VAR_8 = VAR_0;
  break;
 case 4:
  VAR_7 = FUNC_1(VAR_6, 0);
  VAR_7 &= ~VAR_5;
  FUNC_5(VAR_6, 0, VAR_7);
  VAR_7 = FUNC_1(VAR_6, 0);
  if (VAR_7 & VAR_5)
   VAR_8 = VAR_0;
  break;
 default:
  FUNC_4(VAR_6->device,
      "Unknown TCO Version: %d, can't set NO_REBOOT.\n",
      VAR_6->tco_version);
  break;
 }

 if (VAR_8)
  FUNC_0(VAR_6->device,
      "ICH WDT present but disabled in BIOS or hardware\n");

 return (VAR_8);
}
