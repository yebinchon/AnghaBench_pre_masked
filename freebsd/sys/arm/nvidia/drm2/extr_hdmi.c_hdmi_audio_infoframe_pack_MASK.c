
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct hdmi_audio_infoframe {size_t length; int channels; int type; int version; int coding_type; int sample_frequency; int sample_size; int coding_type_ext; int channel_allocation; int level_shift_value; scalar_t__ downmix_inhibit; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (void*,size_t) ;
 int FUNC_2 (void*,int ,size_t) ;

ssize_t FUNC_3(struct hdmi_audio_infoframe *VAR_2,
      void *VAR_3, size_t VAR_4)
{
 unsigned char VAR_5;
 uint8_t *VAR_6 = VAR_3;
 size_t VAR_7;

 VAR_7 = VAR_1 + VAR_2->length;

 if (VAR_4 < VAR_7)
  return -VAR_0;

 FUNC_2(VAR_3, 0, VAR_4);

 if (VAR_2->channels >= 2)
  VAR_5 = VAR_2->channels - 1;
 else
  VAR_5 = 0;

 VAR_6[0] = VAR_2->type;
 VAR_6[1] = VAR_2->version;
 VAR_6[2] = VAR_2->length;
 VAR_6[3] = 0;


 VAR_6 += VAR_1;

 VAR_6[0] = ((VAR_2->coding_type & 0xf) << 4) | (VAR_5 & 0x7);
 VAR_6[1] = ((VAR_2->sample_frequency & 0x7) << 2) |
   (VAR_2->sample_size & 0x3);
 VAR_6[2] = VAR_2->coding_type_ext & 0x1f;
 VAR_6[3] = VAR_2->channel_allocation;
 VAR_6[4] = (VAR_2->level_shift_value & 0xf) << 3;

 if (VAR_2->downmix_inhibit)
  VAR_6[4] |= FUNC_0(7);

 FUNC_1(VAR_3, VAR_7);

 return VAR_7;
}
