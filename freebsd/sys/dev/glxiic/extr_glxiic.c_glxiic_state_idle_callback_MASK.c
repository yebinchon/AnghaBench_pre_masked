
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct glxiic_softc {int dummy; } ;


 int FUNC_0 (struct glxiic_softc*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct glxiic_softc*,int) ;

__attribute__((used)) static int
FUNC_3(struct glxiic_softc *VAR_4, uint8_t VAR_5)
{

 FUNC_0(VAR_4);

 if ((VAR_5 & VAR_0) != 0) {
  FUNC_1("bus error in idle");
  return (VAR_2);
 }

 if ((VAR_5 & VAR_1) != 0) {
  return (FUNC_2(VAR_4, VAR_5));
 }

 return (VAR_3);
}
