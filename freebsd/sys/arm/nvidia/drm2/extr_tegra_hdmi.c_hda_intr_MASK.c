
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hdmi_softc {int audio_freq; int audio_chans; int hdmi_mode; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct hdmi_softc*,int ) ;
 int FUNC_2 (struct hdmi_softc*) ;
 int FUNC_3 (struct hdmi_softc*) ;
 int FUNC_4 (struct hdmi_softc*) ;

__attribute__((used)) static void
FUNC_5(struct hdmi_softc *VAR_1)
{
 uint32_t VAR_2;
 int VAR_3;

 if (!VAR_1->hdmi_mode)
  return;

 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if ((VAR_2 & (1 << 30)) == 0) {
  FUNC_2(VAR_1);
  return;
 }



 VAR_1->audio_freq = VAR_2 & 0x00FFFFFF;
 VAR_1->audio_chans = (VAR_2 >> 24) & 0x0f;
 FUNC_0("%d channel(s) at %dHz\n", VAR_1->audio_chans,
     VAR_1->audio_freq);

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3 != 0) {
  FUNC_2(VAR_1);
  return;
 }

 FUNC_3(VAR_1);
}
