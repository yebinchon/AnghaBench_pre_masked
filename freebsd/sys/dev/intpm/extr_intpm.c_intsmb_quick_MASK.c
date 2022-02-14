
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct intsmb_softc {int io_res; } ;
typedef int device_t ;


 int FUNC_0 (struct intsmb_softc*) ;
 int FUNC_1 (struct intsmb_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_2 (int ,int ,int ) ;
 struct intsmb_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct intsmb_softc*) ;
 int FUNC_5 (struct intsmb_softc*,int ,int ) ;
 int FUNC_6 (struct intsmb_softc*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_4, u_char VAR_5, int VAR_6)
{
 struct intsmb_softc *VAR_7 = FUNC_3(VAR_4);
 int VAR_8;
 u_char VAR_9;

 VAR_9 = VAR_5;


 switch(VAR_6) {
 case 128:
  VAR_9 &= ~VAR_0;
  break;
 case 129:
  VAR_9 |= VAR_0;
  break;
 default:
  return (VAR_3);
 }

 FUNC_0(VAR_7);
 VAR_8 = FUNC_4(VAR_7);
 if (VAR_8) {
  FUNC_1(VAR_7);
  return (VAR_8);
 }
 FUNC_2(VAR_7->io_res, VAR_1, VAR_9);
 FUNC_5(VAR_7, VAR_2, 0);
 VAR_8 = FUNC_6(VAR_7);
 FUNC_1(VAR_7);
 return (VAR_8);
}
