
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int t1; int t2; int mfg_rsvd; } ;
struct edid {TYPE_1__ established_timings; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;
struct detailed_mode_closure {int modes; int member_4; int member_3; int member_2; struct edid* member_1; struct drm_connector* member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,struct detailed_mode_closure*) ;
 struct drm_display_mode* FUNC_1 (struct drm_device*,int *) ;
 int FUNC_2 (struct drm_connector*,struct drm_display_mode*) ;
 int * VAR_2 ;
 scalar_t__ FUNC_3 (struct edid*,int,int ) ;

__attribute__((used)) static int
FUNC_4(struct drm_connector *VAR_3, struct edid *VAR_4)
{
 struct drm_device *VAR_5 = VAR_3->dev;
 unsigned long VAR_6 = VAR_4->established_timings.t1 |
  (VAR_4->established_timings.t2 << 8) |
  ((VAR_4->established_timings.mfg_rsvd & 0x80) << 9);
 int VAR_7, VAR_8 = 0;
 struct detailed_mode_closure VAR_9 = {
  VAR_3, VAR_4, 0, 0, 0
 };

 for (VAR_7 = 0; VAR_7 <= VAR_0; VAR_7++) {
  if (VAR_6 & (1<<VAR_7)) {
   struct drm_display_mode *VAR_10;
   VAR_10 = FUNC_1(VAR_5, &VAR_2[VAR_7]);
   if (VAR_10) {
    FUNC_2(VAR_3, VAR_10);
    VAR_8++;
   }
  }
 }

 if (FUNC_3(VAR_4, 1, 0))
      FUNC_0((u8 *)VAR_4,
      VAR_1, &VAR_9);

 return VAR_8 + VAR_9.modes;
}
