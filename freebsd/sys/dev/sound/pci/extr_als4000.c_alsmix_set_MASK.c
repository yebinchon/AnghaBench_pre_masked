
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u_int32_t ;
struct snd_mixer {int dummy; } ;
struct sc_info {int dummy; } ;
struct TYPE_2__ {int bits; unsigned int oselect; scalar_t__ rreg; scalar_t__ lreg; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (struct sc_info*,scalar_t__) ;
 int FUNC_1 (struct sc_info*,scalar_t__,unsigned int) ;
 TYPE_1__* VAR_1 ;
 struct sc_info* FUNC_2 (struct snd_mixer*) ;

__attribute__((used)) static int
FUNC_3(struct snd_mixer *VAR_2, unsigned VAR_3, unsigned VAR_4, unsigned VAR_5)
{
 struct sc_info *VAR_6 = FUNC_2(VAR_2);
 u_int32_t VAR_7, VAR_8, VAR_9, VAR_10;


 VAR_10 = ((1 << VAR_1[VAR_3].bits) - 1) << (8 - VAR_1[VAR_3].bits);

 VAR_8 = (VAR_4 * VAR_10 / 100) & VAR_10;
 VAR_9 = FUNC_0(VAR_6, VAR_1[VAR_3].lreg) & ~VAR_10;
 FUNC_1(VAR_6, VAR_1[VAR_3].lreg, VAR_8 | VAR_9);

 if (VAR_1[VAR_3].rreg) {
  VAR_7 = (VAR_5 * VAR_10 / 100) & VAR_10;
  VAR_9 = FUNC_0(VAR_6, VAR_1[VAR_3].rreg) & ~VAR_10;
  FUNC_1(VAR_6, VAR_1[VAR_3].rreg, VAR_7 | VAR_9);
 } else {
  VAR_7 = 0;
 }


 VAR_9 = FUNC_0(VAR_6, VAR_0);
 if (VAR_8 == 0 && VAR_7 == 0) {
  VAR_9 &= ~VAR_1[VAR_3].oselect;
 } else {
  VAR_9 |= VAR_1[VAR_3].oselect;
 }
 FUNC_1(VAR_6, VAR_0, VAR_9);
 return 0;
}
