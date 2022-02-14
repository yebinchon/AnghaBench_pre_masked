
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct aw_spi_softc {int dummy; } ;


 int FUNC_0 (struct aw_spi_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct aw_spi_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct aw_spi_softc *VAR_5, uint32_t VAR_6, bool VAR_7)
{
 uint32_t VAR_8;


 VAR_8 = FUNC_0(VAR_5, VAR_0);
 VAR_8 &= ~(VAR_1);
 VAR_8 |= VAR_6 << VAR_2;
 VAR_8 |= VAR_4;
 if (VAR_7)
  VAR_8 &= ~(VAR_3);
 else
  VAR_8 |= VAR_3;

 FUNC_1(VAR_5, VAR_0, VAR_8);
}
