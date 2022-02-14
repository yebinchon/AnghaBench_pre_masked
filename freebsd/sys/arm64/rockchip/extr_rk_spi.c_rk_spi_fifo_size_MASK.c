
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rk_spi_softc {int dummy; } ;


 int FUNC_0 (struct rk_spi_softc*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct rk_spi_softc*,int ,int) ;

__attribute__((used)) static uint32_t
FUNC_2(struct rk_spi_softc *VAR_1)
{
 uint32_t VAR_2, VAR_3;

 for (VAR_2 = 2; VAR_2 < 32; VAR_2++) {
  FUNC_1(VAR_1, VAR_0, VAR_2);
  VAR_3 = FUNC_0(VAR_1, VAR_0);
  if (VAR_3 != VAR_2)
   break;
 }
 FUNC_1(VAR_1, VAR_0, 0);

 if (VAR_2 == 31)
  return 0;

 return VAR_2;
}
