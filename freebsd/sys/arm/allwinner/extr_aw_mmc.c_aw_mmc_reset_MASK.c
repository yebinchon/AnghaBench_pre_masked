
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct aw_mmc_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aw_mmc_softc*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct aw_mmc_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(struct aw_mmc_softc *VAR_4)
{
 uint32_t VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_4, VAR_0);
 VAR_5 |= VAR_1;
 FUNC_1(VAR_4, VAR_0, VAR_5);
 VAR_6 = VAR_2;
 while (--VAR_6 > 0) {
  if ((FUNC_0(VAR_4, VAR_0) & VAR_1) == 0)
   break;
  FUNC_2(100);
 }
 if (VAR_6 == 0)
  return (VAR_3);

 return (0);
}
