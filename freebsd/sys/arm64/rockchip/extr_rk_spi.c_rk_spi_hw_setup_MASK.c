
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rk_spi_softc {int max_freq; int clk_spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct rk_spi_softc*,int ,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_3(struct rk_spi_softc *VAR_14, uint32_t VAR_15, uint32_t VAR_16)
{
 uint32_t VAR_17;
 uint32_t VAR_18;

 VAR_17 = VAR_5 | VAR_9 | VAR_4 |
     VAR_1 | VAR_3 | VAR_8 |
     VAR_2;

 if (VAR_15 & VAR_12)
  VAR_17 |= VAR_6;
 if (VAR_15 & VAR_13)
  VAR_17 |= VAR_7;


 if (VAR_14->max_freq < VAR_16*2) {
  FUNC_2(VAR_14->clk_spi, 2 * VAR_16, VAR_0);
  FUNC_1(VAR_14->clk_spi, &VAR_14->max_freq);
 }

 VAR_18 = ((VAR_14->max_freq + VAR_16 - 1) / VAR_16);
 VAR_18 = (VAR_18 + 1) & 0xfffe;
 FUNC_0(VAR_14, VAR_10, VAR_18);

 FUNC_0(VAR_14, VAR_11, VAR_17);
}
