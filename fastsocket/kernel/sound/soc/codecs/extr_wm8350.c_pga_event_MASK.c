
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350_output {int active; int ramp; } ;
struct wm8350_data {struct wm8350_output out2; struct wm8350_output out1; } ;
struct snd_soc_dapm_widget {int shift; struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int delayed_work; struct wm8350_data* private_data; } ;
struct snd_kcontrol {int dummy; } ;


 int FUNC_0 () ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_2,
       struct snd_kcontrol *VAR_3, int VAR_4)
{
 struct snd_soc_codec *VAR_5 = VAR_2->codec;
 struct wm8350_data *VAR_6 = VAR_5->private_data;
 struct wm8350_output *VAR_7;

 switch (VAR_2->shift) {
 case 0:
 case 1:
  VAR_7 = &VAR_6->out1;
  break;
 case 2:
 case 3:
  VAR_7 = &VAR_6->out2;
  break;

 default:
  FUNC_0();
  return -1;
 }

 switch (VAR_4) {
 case 129:
  VAR_7->ramp = VAR_1;
  VAR_7->active = 1;

  if (!FUNC_1(&VAR_5->delayed_work))
   FUNC_3(&VAR_5->delayed_work,
           FUNC_2(1));
  break;

 case 128:
  VAR_7->ramp = VAR_0;
  VAR_7->active = 0;

  if (!FUNC_1(&VAR_5->delayed_work))
   FUNC_3(&VAR_5->delayed_work,
           FUNC_2(1));
  break;
 }

 return 0;
}
