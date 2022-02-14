
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct glxiic_softc {int iicbus; int smb_res; } ;


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
 int FUNC_3 (struct glxiic_softc*,int) ;
 int FUNC_4 (struct glxiic_softc*,int ) ;
 int FUNC_5 (struct glxiic_softc*) ;
 int FUNC_6 (int ,int ,int*) ;

__attribute__((used)) static int
FUNC_7(struct glxiic_softc *VAR_11, uint8_t VAR_12)
{
 uint8_t VAR_13;

 FUNC_0(VAR_11);

 if ((VAR_12 & VAR_1) != 0) {
  FUNC_1("bus error in slave rx");
  return (VAR_6);
 }

 if ((VAR_12 & VAR_4) != 0) {
  FUNC_6(VAR_11->iicbus, VAR_10, ((void*)0));
  FUNC_4(VAR_11, VAR_5);
  return (VAR_8);
 }

 if ((VAR_12 & VAR_2) != 0) {

  return (FUNC_3(VAR_11, VAR_12));
 }

 if ((VAR_12 & VAR_3) == 0) {
  FUNC_1("no pending data in slave rx");
  return (VAR_7);
 }

 VAR_13 = FUNC_2(VAR_11->smb_res, VAR_0);
 FUNC_6(VAR_11->iicbus, VAR_9, &VAR_13);

 FUNC_5(VAR_11);

 return (VAR_8);
}
