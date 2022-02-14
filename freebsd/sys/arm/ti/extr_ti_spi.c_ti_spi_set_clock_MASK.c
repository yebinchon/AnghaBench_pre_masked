
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_spi_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct ti_spi_softc*,int ) ;
 int FUNC_3 (struct ti_spi_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct ti_spi_softc *VAR_7, int VAR_8, int VAR_9)
{
 uint32_t VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_10 = VAR_6 / VAR_9;
 if (VAR_10 > VAR_5) {
  VAR_13 = 0;
  VAR_10 = 0;
  VAR_12 = 1;
  while (VAR_6 / VAR_12 > VAR_9 && VAR_10 <= 0xf) {
   VAR_10++;
   VAR_12 <<= 1;
  }
  VAR_11 = VAR_10 << VAR_2;
 } else {
  VAR_13 = VAR_10 >> 4;
  VAR_10 &= VAR_1;
  VAR_11 = VAR_0 | VAR_10 << VAR_2;
 }

 VAR_14 = FUNC_2(VAR_7, FUNC_1(VAR_8));
 VAR_14 &= ~(VAR_3 << VAR_4);
 VAR_14 |= VAR_13 << VAR_4;
 FUNC_3(VAR_7, FUNC_1(VAR_8), VAR_14);

 VAR_14 = FUNC_2(VAR_7, FUNC_0(VAR_8));
 VAR_14 &= ~(VAR_0 | VAR_1 << VAR_2);
 FUNC_3(VAR_7, FUNC_0(VAR_8), VAR_14 | VAR_11);
}
