
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct glxiic_softc {int smb_res; int iicbus; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct glxiic_softc*,int) ;
 int FUNC_4 (struct glxiic_softc*,int ) ;
 int FUNC_5 (struct glxiic_softc*) ;
 int FUNC_6 (int ,int ,int*) ;

__attribute__((used)) static int
FUNC_7(struct glxiic_softc *VAR_13, uint8_t VAR_14)
{
 uint8_t VAR_15;

 FUNC_0(VAR_13);

 if ((VAR_14 & VAR_1) != 0) {
  FUNC_1("bus error in slave tx");
  return (VAR_7);
 }

 if ((VAR_14 & VAR_5) != 0) {
  FUNC_6(VAR_13->iicbus, VAR_11, ((void*)0));
  FUNC_4(VAR_13, VAR_6);
  return (VAR_9);
 }

 if ((VAR_14 & VAR_2) != 0) {
  FUNC_6(VAR_13->iicbus, VAR_10, ((void*)0));
  return (VAR_9);
 }

 if ((VAR_14 & VAR_3) != 0) {

  return (FUNC_3(VAR_13, VAR_14));
 }

 if ((VAR_14 & VAR_4) == 0) {
  FUNC_1("not awaiting data in slave tx");
  return (VAR_8);
 }

 FUNC_6(VAR_13->iicbus, VAR_12, &VAR_15);
 FUNC_2(VAR_13->smb_res, VAR_0, VAR_15);

 FUNC_5(VAR_13);

 return (VAR_9);
}
