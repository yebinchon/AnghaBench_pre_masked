
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nxprtc_softc {int tmcaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nxprtc_softc*,int ,int*) ;
 int FUNC_1 (struct nxprtc_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct nxprtc_softc *VAR_4)
{
 int VAR_5;
 uint8_t VAR_6, VAR_7;


 if ((VAR_5 = FUNC_0(VAR_4, VAR_3, &VAR_7)) != 0)
  return (VAR_5);

 VAR_6 = VAR_1 | VAR_0;

 if ((VAR_7 & VAR_2) != VAR_6) {
  if ((VAR_5 = FUNC_1(VAR_4, VAR_4->tmcaddr, 0)) != 0)
   return (VAR_5);
  if ((VAR_5 = FUNC_1(VAR_4, VAR_3, VAR_6)) != 0)
   return (VAR_5);
 }
 return (0);
}
