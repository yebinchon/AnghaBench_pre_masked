
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_audio_infoframe {char* channels; char* channel_allocation; char* level_shift_value; scalar_t__ downmix_inhibit; int coding_type_ext; int sample_frequency; int sample_size; int coding_type; } ;
struct hdmi_any_infoframe {int dummy; } ;


 char* FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (struct hdmi_any_infoframe*) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void FUNC_6(struct hdmi_audio_infoframe *VAR_0)
{
 FUNC_4((struct hdmi_any_infoframe *)VAR_0);

 if (VAR_0->channels)
  FUNC_5("    channels: %u\n", VAR_0->channels - 1);
 else
  FUNC_5("    channels: Refer to stream header\n");
 FUNC_5("    coding type: %s\n",
   FUNC_1(VAR_0->coding_type));
 FUNC_5("    sample size: %s\n",
   FUNC_3(VAR_0->sample_size));
 FUNC_5("    sample frequency: %s\n",
   FUNC_2(VAR_0->sample_frequency));
 FUNC_5("    coding type ext: %s\n",
   FUNC_0(VAR_0->coding_type_ext));
 FUNC_5("    channel allocation: 0x%x\n",
   VAR_0->channel_allocation);
 FUNC_5("    level shift value: %u dB\n",
   VAR_0->level_shift_value);
 FUNC_5("    downmix inhibit: %s\n",
   VAR_0->downmix_inhibit ? "Yes" : "No");
}
