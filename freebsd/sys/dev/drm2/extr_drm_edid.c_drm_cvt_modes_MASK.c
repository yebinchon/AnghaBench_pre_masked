
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct drm_display_mode {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;
struct TYPE_4__ {struct cvt_timing* cvt; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
struct TYPE_6__ {TYPE_2__ other_data; } ;
struct detailed_timing {TYPE_3__ data; } ;
struct cvt_timing {int* code; } ;


 struct drm_display_mode* FUNC_0 (struct drm_device*,int,int,int const,int,int,int) ;
 int FUNC_1 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_2 (int*,int const*,int) ;

__attribute__((used)) static int FUNC_3(struct drm_connector *VAR_0,
    struct detailed_timing *VAR_1)
{
 int VAR_2, VAR_3, VAR_4 = 0;
 struct drm_display_mode *VAR_5;
 struct drm_device *VAR_6 = VAR_0->dev;
 struct cvt_timing *VAR_7;
 const int VAR_8[] = { 60, 85, 75, 60, 50 };
 const u8 VAR_9[3] = { 0, 0, 0 };

 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  int VAR_10 = 0, VAR_11;
  VAR_7 = &(VAR_1->data.other_data.data.cvt[VAR_2]);

  if (!FUNC_2(VAR_7->code, VAR_9, 3))
   continue;

  VAR_11 = (VAR_7->code[0] + ((VAR_7->code[1] & 0xf0) << 4) + 1) * 2;
  switch (VAR_7->code[1] & 0x0c) {
  case 0x00:
   VAR_10 = VAR_11 * 4 / 3;
   break;
  case 0x04:
   VAR_10 = VAR_11 * 16 / 9;
   break;
  case 0x08:
   VAR_10 = VAR_11 * 16 / 10;
   break;
  case 0x0c:
   VAR_10 = VAR_11 * 15 / 9;
   break;
  }

  for (VAR_3 = 1; VAR_3 < 5; VAR_3++) {
   if (VAR_7->code[2] & (1 << VAR_3)) {
    VAR_5 = FUNC_0(VAR_6, VAR_10, VAR_11,
             VAR_8[VAR_3], VAR_3 == 0,
             0, 0);
    if (VAR_5) {
     FUNC_1(VAR_0, VAR_5);
     VAR_4++;
    }
   }
  }
 }

 return VAR_4;
}
