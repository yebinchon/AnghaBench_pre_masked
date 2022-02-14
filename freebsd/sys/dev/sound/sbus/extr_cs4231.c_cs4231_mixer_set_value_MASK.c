
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct mix_table {scalar_t__ avail; scalar_t__ reg; scalar_t__ neg; int bits; int shift; int mute; } ;
struct cs4231_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cs4231_softc*,int) ;
 int FUNC_1 (struct cs4231_softc*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct cs4231_softc *VAR_4, const struct mix_table *VAR_5,
    u_int8_t VAR_6)
{
 u_int8_t VAR_7, VAR_8;
 u_int8_t VAR_9, VAR_10, VAR_11;

 if (VAR_5->avail == 0 || VAR_5->reg == VAR_2)
  return;
 VAR_8 = VAR_5->reg;
 if (VAR_5->neg != 0)
  VAR_11 = 100 - VAR_6;
 else
  VAR_11 = VAR_6;
 VAR_7 = (1 << VAR_5->bits) - 1;
 VAR_11 = ((VAR_11 * VAR_7) + 50) / 100;
 VAR_10 = VAR_5->shift;
 VAR_11 <<= VAR_10;
 if (VAR_6 == 0)
  VAR_11 |= VAR_5->mute;
 VAR_9 = FUNC_0(VAR_4, VAR_8);
 VAR_9 &= ~(VAR_5->mute | (VAR_7 << VAR_10));
 VAR_11 |= VAR_9;
 if (VAR_8 == VAR_1 || VAR_8 == VAR_3) {
  if ((VAR_11 & (VAR_7 << VAR_10)) != 0)
   VAR_11 |= VAR_0;
  else
   VAR_11 &= ~VAR_0;
 }
 FUNC_1(VAR_4, VAR_8, VAR_11);
}
