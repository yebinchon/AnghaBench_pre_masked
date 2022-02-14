
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct hdmi_softc {int dev; int audio_chans; } ;
struct hdmi_audio_infoframe {int channels; } ;
typedef scalar_t__ ssize_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hdmi_softc*,int ,int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct hdmi_audio_infoframe*) ;
 scalar_t__ FUNC_3 (struct hdmi_audio_infoframe*,int*,int) ;

__attribute__((used)) static void
FUNC_4(struct hdmi_softc *VAR_5)
{
 struct hdmi_audio_infoframe VAR_6;
 uint8_t VAR_7[14], *VAR_8, *VAR_9;
 ssize_t VAR_10;


 VAR_10 = FUNC_2(&VAR_6);
 VAR_6.channels = VAR_5->audio_chans;
 VAR_10 = FUNC_3(&VAR_6, VAR_7, sizeof(VAR_7));
 if (VAR_10 < 0) {
  FUNC_1(VAR_5->dev, "Cannot pack audio infoframe\n");
  return;
 }
 VAR_8 = VAR_7 + 0;
 VAR_9 = VAR_7 + 3;
 FUNC_0(VAR_5, VAR_2,
     (VAR_8[2] << 16) | (VAR_8[1] << 8) | (VAR_8[0] << 0));
 FUNC_0(VAR_5, VAR_4,
     (VAR_9[3] << 24) |(VAR_9[2] << 16) | (VAR_9[1] << 8) | (VAR_9[0] << 0));
 FUNC_0(VAR_5, VAR_3,
     (VAR_9[5] << 8) | (VAR_9[4] << 0));

 FUNC_0(VAR_5, VAR_1,
    VAR_0);
}
