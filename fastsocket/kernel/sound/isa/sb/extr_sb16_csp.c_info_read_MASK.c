
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb_csp {int version; int running; int codec_name; char* func_nr; int acc_rates; int mode; int acc_width; int acc_channels; int run_width; int run_channels; int qpos_left; char* qpos_right; int acc_format; scalar_t__ q_enabled; } ;
struct snd_info_entry {struct snd_sb_csp* private_data; } ;
struct snd_info_buffer {int dummy; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct snd_info_entry *VAR_17, struct snd_info_buffer *VAR_18)
{
 struct snd_sb_csp *VAR_19 = VAR_17->private_data;

 FUNC_0(VAR_18, "Creative Signal Processor [v%d.%d]\n", (VAR_19->version >> 4), (VAR_19->version & 0x0f));
 FUNC_0(VAR_18, "State: %cx%c%c%c\n", ((VAR_19->running & VAR_15) ? 'Q' : '-'),
      ((VAR_19->running & VAR_14) ? 'P' : '-'),
      ((VAR_19->running & VAR_16) ? 'R' : '-'),
      ((VAR_19->running & VAR_13) ? 'L' : '-'));
 if (VAR_19->running & VAR_13) {
  FUNC_0(VAR_18, "Codec: %s [func #%d]\n", VAR_19->codec_name, VAR_19->func_nr);
  FUNC_0(VAR_18, "Sample rates: ");
  if (VAR_19->acc_rates == VAR_8) {
   FUNC_0(VAR_18, "All\n");
  } else {
   FUNC_0(VAR_18, "%s%s%s%s\n",
        ((VAR_19->acc_rates & VAR_7) ? "8000Hz " : ""),
        ((VAR_19->acc_rates & VAR_4) ? "11025Hz " : ""),
        ((VAR_19->acc_rates & VAR_5) ? "22050Hz " : ""),
        ((VAR_19->acc_rates & VAR_6) ? "44100Hz" : ""));
  }
  if (VAR_19->mode == VAR_2) {
   FUNC_0(VAR_18, "QSound decoder %sabled\n",
        VAR_19->q_enabled ? "en" : "dis");
  } else {
   FUNC_0(VAR_18, "PCM format ID: 0x%x (%s/%s) [%s/%s] [%s/%s]\n",
        VAR_19->acc_format,
        ((VAR_19->acc_width & VAR_9) ? "16bit" : "-"),
        ((VAR_19->acc_width & VAR_10) ? "8bit" : "-"),
        ((VAR_19->acc_channels & VAR_3) ? "mono" : "-"),
        ((VAR_19->acc_channels & VAR_11) ? "stereo" : "-"),
        ((VAR_19->mode & VAR_1) ? "playback" : "-"),
        ((VAR_19->mode & VAR_0) ? "capture" : "-"));
  }
 }
 if (VAR_19->running & VAR_12) {
  FUNC_0(VAR_18, "Autoloaded Mu-Law, A-Law or Ima-ADPCM hardware codec\n");
 }
 if (VAR_19->running & VAR_16) {
  FUNC_0(VAR_18, "Processing %dbit %s PCM samples\n",
       ((VAR_19->run_width & VAR_9) ? 16 : 8),
       ((VAR_19->run_channels & VAR_3) ? "mono" : "stereo"));
 }
 if (VAR_19->running & VAR_15) {
  FUNC_0(VAR_18, "Qsound position: left = 0x%x, right = 0x%x\n",
       VAR_19->qpos_left, VAR_19->qpos_right);
 }
}
