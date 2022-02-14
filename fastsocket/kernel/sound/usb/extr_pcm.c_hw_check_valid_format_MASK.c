
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct snd_usb_substream {int dev; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_mask {void** bits; } ;
struct snd_interval {scalar_t__ min; scalar_t__ max; scalar_t__ openmax; scalar_t__ openmin; } ;
struct audioformat {int formats; scalar_t__ channels; scalar_t__ rate_min; scalar_t__ rate_max; int datainterval; int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 struct snd_mask* FUNC_1 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_2 (char*,unsigned int,...) ;
 scalar_t__ FUNC_3 (struct snd_mask*) ;
 int FUNC_4 (struct snd_mask*,struct snd_mask*) ;
 int FUNC_5 (struct snd_mask*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct snd_usb_substream *VAR_5,
     struct snd_pcm_hw_params *VAR_6,
     struct audioformat *VAR_7)
{
 struct snd_interval *VAR_8 = FUNC_0(VAR_6, VAR_3);
 struct snd_interval *VAR_9 = FUNC_0(VAR_6, VAR_0);
 struct snd_mask *VAR_10 = FUNC_1(VAR_6, VAR_1);
 struct snd_interval *VAR_11 = FUNC_0(VAR_6, VAR_2);
 struct snd_mask VAR_12;
 unsigned int VAR_13;


 FUNC_5(&VAR_12);
 VAR_12.bits[0] = (u32)VAR_7->formats;
 VAR_12.bits[1] = (u32)(VAR_7->formats >> 32);
 FUNC_4(&VAR_12, VAR_10);
 if (FUNC_3(&VAR_12)) {
  FUNC_2("   > check: no supported format %d\n", VAR_7->format);
  return 0;
 }

 if (VAR_7->channels < VAR_9->min || VAR_7->channels > VAR_9->max) {
  FUNC_2("   > check: no valid channels %d (%d/%d)\n", VAR_7->channels, VAR_9->min, VAR_9->max);
  return 0;
 }

 if (VAR_7->rate_min > VAR_8->max || (VAR_7->rate_min == VAR_8->max && VAR_8->openmax)) {
  FUNC_2("   > check: rate_min %d > max %d\n", VAR_7->rate_min, VAR_8->max);
  return 0;
 }
 if (VAR_7->rate_max < VAR_8->min || (VAR_7->rate_max == VAR_8->min && VAR_8->openmin)) {
  FUNC_2("   > check: rate_max %d < min %d\n", VAR_7->rate_max, VAR_8->min);
  return 0;
 }

 if (FUNC_6(VAR_5->dev) != VAR_4) {
  VAR_13 = 125 * (1 << VAR_7->datainterval);
  if (VAR_13 > VAR_11->max || (VAR_13 == VAR_11->max && VAR_11->openmax)) {
   FUNC_2("   > check: ptime %u > max %u\n", VAR_13, VAR_11->max);
   return 0;
  }
 }
 return 1;
}
