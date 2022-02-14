
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct aw_spi_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aw_spi_softc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct aw_spi_softc*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_2(struct aw_spi_softc *VAR_7, uint32_t VAR_8)
{
 uint32_t VAR_9;


 VAR_9 = FUNC_0(VAR_7, VAR_0);
 VAR_9 |= VAR_1;
 FUNC_1(VAR_7, VAR_0, VAR_9);


 VAR_9 = FUNC_0(VAR_7, VAR_2);
 if (VAR_8 & VAR_5)
  VAR_9 |= VAR_3;
 if (VAR_8 & VAR_6)
  VAR_9 |= VAR_4;

 FUNC_1(VAR_7, VAR_2, VAR_9);
}
