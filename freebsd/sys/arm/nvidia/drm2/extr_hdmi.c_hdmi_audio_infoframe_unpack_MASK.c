
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct hdmi_audio_infoframe {int channels; int coding_type; int sample_size; int sample_frequency; int coding_type_ext; int channel_allocation; int level_shift_value; int downmix_inhibit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (struct hdmi_audio_infoframe*) ;
 scalar_t__ FUNC_2 (void*,int ) ;

__attribute__((used)) static int FUNC_3(struct hdmi_audio_infoframe *VAR_5,
           void *VAR_6)
{
 uint8_t *VAR_7 = VAR_6;
 int VAR_8;

 if (VAR_7[0] != VAR_4 ||
     VAR_7[1] != 1 ||
     VAR_7[2] != VAR_2) {
  return -VAR_1;
 }

 if (FUNC_2(VAR_6, FUNC_0(VAR_0)) != 0)
  return -VAR_1;

 VAR_8 = FUNC_1(VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_7 += VAR_3;

 VAR_5->channels = VAR_7[0] & 0x7;
 VAR_5->coding_type = (VAR_7[0] >> 4) & 0xf;
 VAR_5->sample_size = VAR_7[1] & 0x3;
 VAR_5->sample_frequency = (VAR_7[1] >> 2) & 0x7;
 VAR_5->coding_type_ext = VAR_7[2] & 0x1f;
 VAR_5->channel_allocation = VAR_7[3];
 VAR_5->level_shift_value = (VAR_7[4] >> 3) & 0xf;
 VAR_5->downmix_inhibit = VAR_7[4] & 0x80 ? 1 : 0;

 return 0;
}
