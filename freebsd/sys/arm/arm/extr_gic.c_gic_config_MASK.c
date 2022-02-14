
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct arm_gic_softc {int mutex; } ;
typedef enum intr_trigger { ____Placeholder_intr_trigger } intr_trigger ;
typedef enum intr_polarity { ____Placeholder_intr_polarity } intr_polarity ;


 int FUNC_0 (int) ;
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
 int FUNC_1 (struct arm_gic_softc*,int ) ;
 int FUNC_2 (struct arm_gic_softc*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct arm_gic_softc *VAR_11, u_int VAR_12, enum intr_trigger VAR_13,
    enum intr_polarity VAR_14)
{
 uint32_t VAR_15;
 uint32_t VAR_16;

 if (VAR_12 < VAR_6)
  return;

 FUNC_3(&VAR_11->mutex);

 VAR_15 = FUNC_1(VAR_11, FUNC_0(VAR_12));
 VAR_16 = (VAR_15 >> 2*(VAR_12 % 16)) & 0x3;

 if (VAR_14 == VAR_8) {
  VAR_16 &= ~VAR_2;
  VAR_16 |= VAR_1;
 } else if (VAR_14 == VAR_7) {
  VAR_16 &= ~VAR_2;
  VAR_16 |= VAR_0;
 }

 if (VAR_13 == VAR_10) {
  VAR_16 &= ~VAR_5;
  VAR_16 |= VAR_4;
 } else if (VAR_13 == VAR_9) {
  VAR_16 &= ~VAR_5;
  VAR_16 |= VAR_3;
 }


 VAR_15 = VAR_15 & ~(0x3 << 2*(VAR_12 % 16));
 VAR_15 = VAR_15 | (VAR_16 << 2*(VAR_12 % 16));
 FUNC_2(VAR_11, FUNC_0(VAR_12), VAR_15);

 FUNC_4(&VAR_11->mutex);
}
