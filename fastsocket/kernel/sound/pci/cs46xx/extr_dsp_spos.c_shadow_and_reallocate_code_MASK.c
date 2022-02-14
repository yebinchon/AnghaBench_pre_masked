
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_cs46xx {struct dsp_spos_instance* dsp_spos_instance; } ;
struct TYPE_2__ {int offset; int* data; int size; } ;
struct dsp_spos_instance {TYPE_1__ code; } ;


 unsigned int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_3 (struct snd_cs46xx * VAR_4, u32 * VAR_5, u32 VAR_6,
           u32 VAR_7)
{
 unsigned int VAR_8 = 0, VAR_9, VAR_10 = 0;
 u32 VAR_11,VAR_12,VAR_13;
 u32 VAR_14,VAR_15,VAR_16;
 struct dsp_spos_instance * VAR_17 = VAR_4->dsp_spos_instance;

 if (FUNC_1(VAR_6 %2))
  return -VAR_0;

 while (VAR_8 < VAR_6) {
  VAR_12 = VAR_5[VAR_8++];
  VAR_11 = VAR_5[VAR_8++];

  if (VAR_17->code.offset > 0) {
   VAR_14 = (VAR_11 >> 6) & 0x03fff;
   VAR_15 = VAR_14 >> 10;


   if (VAR_15 == 0 &&
       (VAR_14 & VAR_2) == 0 &&
       (VAR_14 & VAR_1) != 0) {
    VAR_16 = VAR_12 & 0x7f;
    for (VAR_9 = 0;VAR_9 < FUNC_0(VAR_3); ++VAR_9) {
     if (VAR_3[VAR_9] == VAR_16) {

      VAR_13 = (VAR_11 & 0x00FFF) << 5;
      VAR_13 |= VAR_12 >> 15;

      FUNC_2("handle_wideop[1]: %05x:%05x addr %04x\n",VAR_11,VAR_12,VAR_13);

      if ( !(VAR_13 & 0x8000) ) {
       VAR_13 += (VAR_17->code.offset / 2) - VAR_7;
      } else {
       FUNC_2("handle_wideop[1]: ROM symbol not reallocated\n");
      }

      VAR_11 &= 0xFF000;
      VAR_12 &= 0x07FFF;

      VAR_11 |= ( (VAR_13 >> 5) & 0x00FFF);
      VAR_12 |= ( (VAR_13 << 15) & 0xF8000);

      VAR_13 = (VAR_11 & 0x00FFF) << 5;
      VAR_13 |= VAR_12 >> 15;

      FUNC_2("handle_wideop:[2] %05x:%05x addr %04x\n",VAR_11,VAR_12,VAR_13);
      VAR_10 ++;
     }
    }
   }
  }

  VAR_17->code.data[VAR_17->code.size++] = VAR_12;
  VAR_17->code.data[VAR_17->code.size++] = VAR_11;
 }

 FUNC_2("dsp_spos: %d instructions reallocated\n",VAR_10);
 return VAR_10;
}
