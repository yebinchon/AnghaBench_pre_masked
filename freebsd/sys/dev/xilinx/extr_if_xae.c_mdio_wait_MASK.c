
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xae_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct xae_softc*,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(struct xae_softc *VAR_2)
{
 uint32_t VAR_3;
 int VAR_4;

 VAR_4 = 200;

 do {
  VAR_3 = FUNC_1(VAR_2, VAR_1);
  if (VAR_3 & VAR_0)
   break;
  FUNC_0(1);
 } while (VAR_4--);

 if (VAR_4 <= 0) {
  FUNC_2("Failed to get MDIO ready\n");
  return (1);
 }

 return (0);
}
