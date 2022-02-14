
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u_int8_t ;
typedef unsigned int u_int32_t ;
struct snd_mixer {int dummy; } ;
struct sc_info {int dummy; } ;
struct TYPE_2__ {int bits; scalar_t__ rreg; unsigned int oselect; scalar_t__ stereo; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sc_info*,int ,int) ;
 int FUNC_3 (struct sc_info*,int ,unsigned int,int) ;
 unsigned int FUNC_4 (struct sc_info*,int) ;
 int FUNC_5 (struct sc_info*,int,unsigned int) ;
 TYPE_1__* VAR_3 ;
 struct sc_info* FUNC_6 (struct snd_mixer*) ;
 int FUNC_7 (char*,unsigned int,int,unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_8(struct snd_mixer *VAR_4, unsigned VAR_5, unsigned VAR_6, unsigned VAR_7)
{
 struct sc_info *VAR_8 = FUNC_6(VAR_4);
 u_int32_t VAR_9, VAR_10, VAR_11;
 u_int8_t VAR_12;

 VAR_11 = (1 << VAR_3[VAR_5].bits) - 1;

 if (VAR_3[VAR_5].rreg == VAR_0) {


  VAR_12 = FUNC_2(VAR_8, VAR_1, 1) & 0xf0;
  VAR_10 = VAR_6 * VAR_11 / 100;

  VAR_12 |= ((VAR_10 << 1) | (~VAR_10 >> 3)) & 0x0f;
  FUNC_3(VAR_8, VAR_1, VAR_12, 1);
  return 0;
 }

 VAR_10 = (VAR_6 * VAR_11 / 100) << (8 - VAR_3[VAR_5].bits);
 if (VAR_3[VAR_5].stereo) {
  VAR_9 = (VAR_7 * VAR_11 / 100) << (8 - VAR_3[VAR_5].bits);
  FUNC_5(VAR_8, FUNC_1(VAR_3[VAR_5].rreg), VAR_10);
  FUNC_5(VAR_8, VAR_3[VAR_5].rreg, VAR_9);
  FUNC_0(FUNC_7("Mixer stereo write dev %d reg 0x%02x " "value 0x%02x:0x%02x\n",

         VAR_5, FUNC_1(VAR_3[VAR_5].rreg), VAR_10, VAR_9));
 } else {
  VAR_9 = VAR_10;
  FUNC_5(VAR_8, VAR_3[VAR_5].rreg, VAR_10);
  FUNC_0(FUNC_7("Mixer mono write dev %d reg 0x%02x " "value 0x%02x:0x%02x\n",

         VAR_5, VAR_3[VAR_5].rreg, VAR_10, VAR_10));
 }


 VAR_12 = FUNC_4(VAR_8, VAR_2);
 if (VAR_10 == 0 && VAR_9 == 0) {
  VAR_12 &= ~VAR_3[VAR_5].oselect;
 } else {
  VAR_12 |= VAR_3[VAR_5].oselect;
 }
 FUNC_5(VAR_8, VAR_2, VAR_12);

 return 0;
}
