
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct glxiic_softc {int addr; int iicbus; int smb_res; } ;


 int FUNC_0 (struct glxiic_softc*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct glxiic_softc*,int ) ;
 int FUNC_4 (int ,int ,int*) ;

__attribute__((used)) static int
FUNC_5(struct glxiic_softc *VAR_11, uint8_t VAR_12)
{
 uint8_t VAR_13, VAR_14;

 FUNC_0(VAR_11);

 VAR_13 = FUNC_2(VAR_11->smb_res, VAR_0);

 if ((VAR_13 & VAR_2) != 0) {
  if ((VAR_12 & VAR_3) != 0) {
   VAR_14 = VAR_11->addr | VAR_10;
   FUNC_3(VAR_11,
       VAR_5);
  } else {
   VAR_14 = VAR_11->addr & ~VAR_10;
   FUNC_3(VAR_11,
       VAR_4);
  }
  FUNC_4(VAR_11->iicbus, VAR_9, &VAR_14);
 } else if ((VAR_13 & VAR_1) != 0) {
  VAR_14 = 0;
  FUNC_3(VAR_11, VAR_4);
  FUNC_4(VAR_11->iicbus, VAR_8, &VAR_14);
 } else {
  FUNC_1("unknown slave match");
  return (VAR_6);
 }

 return (VAR_7);
}
