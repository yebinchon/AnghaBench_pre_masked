
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jz4780_mmc_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct jz4780_mmc_softc*,int ) ;
 int FUNC_1 (struct jz4780_mmc_softc*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_2(struct jz4780_mmc_softc *VAR_5)
{
 int VAR_6;

 FUNC_1(VAR_5, VAR_3, VAR_2);

 for (VAR_6 = 1000; VAR_6 > 0; VAR_6--)
  if ((FUNC_0(VAR_5, VAR_4) & VAR_1) == 0)
   return (0);
 return (VAR_0);
}
