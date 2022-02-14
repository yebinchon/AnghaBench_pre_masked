
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nxprtc_softc*,int ,int*) ;
 int FUNC_1 (struct nxprtc_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct nxprtc_softc *VAR_6)
{
 int VAR_7;
 uint8_t VAR_8, VAR_9, VAR_10, VAR_11;
 if ((VAR_7 = FUNC_0(VAR_6, VAR_4, &VAR_11)) != 0)
  return (VAR_7);
 if ((VAR_7 = FUNC_0(VAR_6, VAR_5, &VAR_8)) != 0)
  return (VAR_7);

 VAR_10 = VAR_2;
 VAR_9 = VAR_1 | VAR_0;

 if (VAR_8 != VAR_9 || (VAR_11 & VAR_3) != VAR_10) {
  if ((VAR_7 = FUNC_1(VAR_6, VAR_6->tmcaddr, 0)) != 0)
   return (VAR_7);
  if ((VAR_7 = FUNC_1(VAR_6, VAR_4, VAR_10)) != 0)
   return (VAR_7);
  if ((VAR_7 = FUNC_1(VAR_6, VAR_5, VAR_9)) != 0)
   return (VAR_7);
 }
 return (0);
}
