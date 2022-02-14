
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ipu_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct ipu_softc*,int) ;
 int FUNC_6 (struct ipu_softc*,int,int) ;

__attribute__((used)) static void
FUNC_7(struct ipu_softc *VAR_5, int VAR_6, int VAR_7,
 int VAR_8, int VAR_9,
 int VAR_10,
 int VAR_11,
 int VAR_12,
 int VAR_13, int VAR_14)
{
 uint32_t VAR_15, VAR_16;

 VAR_15 = (VAR_6 ? VAR_4 : VAR_2)
     + (VAR_7 - 1) * sizeof(uint32_t);
 VAR_16 = FUNC_3(VAR_10) |
     FUNC_0(VAR_9) |
     FUNC_4(VAR_12) |
     FUNC_2(VAR_11);
 VAR_16 |= FUNC_1(VAR_14) | VAR_13;
 if (VAR_8 == 0)
  VAR_16 |= VAR_0;
 FUNC_6(VAR_5, VAR_15, VAR_16);

 VAR_15 = (VAR_6 ? VAR_3 : VAR_1)
     + (VAR_7 - 1) / 2 * sizeof(uint32_t);
 VAR_16 = FUNC_5(VAR_5, VAR_15);
 if (VAR_7 % 2) {
  VAR_16 &= ~(0xffff);
  VAR_16 |= VAR_8;
 }
 else {
  VAR_16 &= ~(0xffff << 16);
  VAR_16 |= (VAR_8 << 16);
 }
 FUNC_6(VAR_5, VAR_15, VAR_16);
}
