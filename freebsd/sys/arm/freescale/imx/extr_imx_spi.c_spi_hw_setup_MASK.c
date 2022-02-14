
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
typedef int u_int ;
struct spi_softc {int ctlreg; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int FUNC_0 (struct spi_softc*,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct spi_softc*,int ,unsigned int) ;
 int FUNC_2 (struct spi_softc*,int) ;

__attribute__((used)) static void
FUNC_3(struct spi_softc *VAR_18, u_int VAR_19, u_int VAR_20, u_int VAR_21)
{
 uint32_t VAR_22;





 VAR_18->ctlreg = VAR_6 | VAR_5 | VAR_7;
 VAR_18->ctlreg |= FUNC_2(VAR_18, VAR_21);
 VAR_18->ctlreg |= 7 << VAR_4;
 FUNC_1(VAR_18, VAR_11, VAR_18->ctlreg);






 VAR_22 = 0;
 if (VAR_19 & VAR_15)
  VAR_22 |= 1u << VAR_3;
 if (VAR_20 & VAR_16)
  VAR_22 |= 1u << VAR_1;
 if (VAR_20 & VAR_17) {
  VAR_22 |= 1u << VAR_2;
  VAR_22 |= 1u << VAR_0;
 }
 FUNC_1(VAR_18, VAR_10, VAR_22);




 VAR_22 = (VAR_13 << VAR_8);
 VAR_22 |= (VAR_14 << VAR_9);
 FUNC_1(VAR_18, VAR_12, VAR_22);





 (void)FUNC_0(VAR_18, VAR_10);
}
