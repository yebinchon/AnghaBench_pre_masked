
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct a10_sramc_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct a10_sramc_softc* VAR_3 ;
 int FUNC_0 (struct a10_sramc_softc*,int ) ;
 int FUNC_1 (struct a10_sramc_softc*,int ,int ) ;

int
FUNC_2(void)
{
 struct a10_sramc_softc *VAR_4 = VAR_3;
 uint32_t VAR_5;

 if (VAR_4 == ((void*)0))
  return (VAR_1);


 VAR_5 = FUNC_0(VAR_4, VAR_2);
 VAR_5 |= VAR_0;
 FUNC_1(VAR_4, VAR_2, VAR_5);

 return (0);
}
