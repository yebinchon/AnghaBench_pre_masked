
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct chipc_spi_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct chipc_spi_softc*) ;
 int FUNC_1 (struct chipc_spi_softc*,int ) ;
 int FUNC_2 (struct chipc_spi_softc*,int ,int) ;
 scalar_t__ FUNC_3 (struct chipc_spi_softc*) ;

__attribute__((used)) static int
FUNC_4(struct chipc_spi_softc *VAR_4, uint8_t VAR_5, uint8_t* VAR_6)
{
 uint32_t VAR_7;

 VAR_7 = VAR_2 | VAR_1 | VAR_5;
 FUNC_0(VAR_4);
 FUNC_2(VAR_4, VAR_0, VAR_7);
 FUNC_0(VAR_4);

 if (FUNC_3(VAR_4))
  return (-1);

 *VAR_6 = FUNC_1(VAR_4, VAR_3) & 0xff;
 return (0);
}
