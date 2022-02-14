
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct a10_sramc_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct a10_sramc_softc* VAR_2 ;
 int FUNC_0 (struct a10_sramc_softc*,int ) ;
 int FUNC_1 (struct a10_sramc_softc*,int ,int) ;

int
FUNC_2(void)
{
 struct a10_sramc_softc *VAR_3 = VAR_2;
 uint32_t VAR_4;

 if (VAR_3 == ((void*)0))
  return (VAR_0);


 VAR_4 = FUNC_0(VAR_3, VAR_1);
 VAR_4 |= 0x5 << 2;
 FUNC_1(VAR_3, VAR_1, VAR_4);

 return (0);
}
