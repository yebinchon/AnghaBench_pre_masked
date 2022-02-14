
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct hdmi_softc {int dev; } ;
struct hdmi_avi_infoframe {int dummy; } ;
struct drm_display_mode {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hdmi_softc*,int ,int) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct hdmi_avi_infoframe*,struct drm_display_mode*) ;
 scalar_t__ FUNC_3 (struct hdmi_avi_infoframe*,int*,int) ;

__attribute__((used)) static void
FUNC_4(struct hdmi_softc *VAR_7, struct drm_display_mode *VAR_8)
{
 struct hdmi_avi_infoframe VAR_9;
 uint8_t VAR_10[17], *VAR_11, *VAR_12;;
 ssize_t VAR_13;

 VAR_13 = FUNC_2(&VAR_9, VAR_8);
 if (VAR_13 < 0) {
  FUNC_1(VAR_7->dev, "Cannot setup AVI infoframe: %zd\n", VAR_13);
  return;
 }
 VAR_13 = FUNC_3(&VAR_9, VAR_10, sizeof(VAR_10));
 if (VAR_13 < 0) {
  FUNC_1(VAR_7->dev, "Cannot pack AVI infoframe: %zd\n", VAR_13);
  return;
 }
 VAR_11 = VAR_10 + 0;
 VAR_12 = VAR_10 + 3;
 FUNC_0(VAR_7, VAR_2,
     (VAR_11[2] << 16) | (VAR_11[1] << 8) | (VAR_11[0] << 0));
 FUNC_0(VAR_7, VAR_4,
     (VAR_12[3] << 24) |(VAR_12[2] << 16) | (VAR_12[1] << 8) | (VAR_12[0] << 0));
 FUNC_0(VAR_7, VAR_3,
     (VAR_12[6] << 16) | (VAR_12[5] << 8) | (VAR_12[4] << 0));
 FUNC_0(VAR_7, VAR_6,
     (VAR_12[10] << 24) |(VAR_12[9] << 16) | (VAR_12[8] << 8) | (VAR_12[7] << 0));
 FUNC_0(VAR_7, VAR_5,
     (VAR_12[13] << 16) | (VAR_12[12] << 8) | (VAR_12[11] << 0));

 FUNC_0(VAR_7, VAR_1,
    VAR_0);
}
