
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct drm_connector {int bad_edid_counter; TYPE_1__* dev; int null_edid_counter; } ;
typedef int device_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int*,int,int) ;
 scalar_t__ FUNC_2 (int*,int,int) ;
 scalar_t__ FUNC_3 (int*,int) ;
 int FUNC_4 (struct drm_connector*) ;
 int FUNC_5 (int*,int ) ;
 int* FUNC_6 (int,int ,int ) ;
 int* FUNC_7 (int*,int,int ,int ) ;

__attribute__((used)) static u8 *
FUNC_8(struct drm_connector *VAR_5, device_t VAR_6)
{
 int VAR_7, VAR_8 = 0, VAR_9 = 0;
 u8 *VAR_10, *VAR_11;
 bool VAR_12 = !VAR_5->bad_edid_counter || (VAR_4 & VAR_0);

 if ((VAR_10 = FUNC_6(VAR_2, VAR_1, VAR_3)) == ((void*)0))
  return ((void*)0);


 for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
  if (FUNC_1(VAR_6, VAR_10, 0, VAR_2))
   goto out;
  if (FUNC_2(VAR_10, 0, VAR_12))
   break;
  if (VAR_7 == 0 && FUNC_3(VAR_10, VAR_2)) {
   VAR_5->null_edid_counter++;
   goto carp;
  }
 }
 if (VAR_7 == 4)
  goto carp;


 if (VAR_10[0x7e] == 0)
  return VAR_10;

 VAR_11 = FUNC_7(VAR_10, (VAR_10[0x7e] + 1) * VAR_2, VAR_1,
     VAR_3);
 if (!VAR_11) {
  VAR_10 = ((void*)0);
  goto out;
 }
 VAR_10 = VAR_11;

 for (VAR_8 = 1; VAR_8 <= VAR_10[0x7e]; VAR_8++) {
  for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
   if (FUNC_1(VAR_6,
      VAR_10 + (VAR_9 + 1) * VAR_2,
      VAR_8, VAR_2))
    goto out;
   if (FUNC_2(VAR_10 + (VAR_9 + 1) * VAR_2, VAR_8, VAR_12)) {
    VAR_9++;
    break;
   }
  }

  if (VAR_7 == 4 && VAR_12) {
   FUNC_0(VAR_5->dev->dev,
    "%s: Ignoring invalid EDID block %d.\n",
    FUNC_4(VAR_5), VAR_8);

   VAR_5->bad_edid_counter++;
  }
 }

 if (VAR_9 != VAR_10[0x7e]) {
  VAR_10[VAR_2-1] += VAR_10[0x7e] - VAR_9;
  VAR_10[0x7e] = VAR_9;
  VAR_11 = FUNC_7(VAR_10, (VAR_9 + 1) * VAR_2,
      VAR_1, VAR_3);
  if (!VAR_11)
   goto out;
  VAR_10 = VAR_11;
 }

 return VAR_10;

carp:
 if (VAR_12) {
  FUNC_0(VAR_5->dev->dev, "%s: EDID block %d invalid.\n",
    FUNC_4(VAR_5), VAR_8);
 }
 VAR_5->bad_edid_counter++;

out:
 FUNC_5(VAR_10, VAR_1);
 return ((void*)0);
}
