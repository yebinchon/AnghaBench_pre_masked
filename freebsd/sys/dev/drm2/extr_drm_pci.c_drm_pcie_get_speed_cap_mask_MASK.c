
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_device {int dev; } ;
typedef int device_t ;


 int FUNC_0 (char*,scalar_t__,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__,int) ;

int FUNC_7(struct drm_device *VAR_13, u32 *VAR_14)
{
 device_t VAR_15;
 int VAR_16;
 u32 VAR_17 = 0, VAR_18 = 0;

 *VAR_14 = 0;
 if (!FUNC_2(VAR_13))
  return -VAR_3;

 VAR_15 =
     FUNC_1(
     FUNC_1(
     FUNC_1(
     VAR_13->dev)));

 VAR_16 = 0;
 FUNC_3(VAR_15, VAR_7, &VAR_16);
 if (!VAR_16)
  return -VAR_3;


 if (FUNC_5(VAR_15) == VAR_12 ||
     FUNC_5(VAR_15) == VAR_11)
  return -VAR_3;

 VAR_17 = FUNC_6(VAR_15, VAR_16 + VAR_5, 4);
 VAR_18 = FUNC_6(VAR_15, VAR_16 + VAR_6, 4);

 VAR_17 &= VAR_4;
 VAR_18 &= 0xfe;





 if (VAR_18) {
  if (VAR_18 & 0x02)
   *VAR_14 |= VAR_0;
  if (VAR_18 & 0x04)
   *VAR_14 |= VAR_1;
  if (VAR_18 & 0x08)
   *VAR_14 |= VAR_2;
 } else {
  if (VAR_17 & 1)
   *VAR_14 |= VAR_0;
  if (VAR_17 & 2)
   *VAR_14 |= VAR_1;
 }

 FUNC_0("probing gen 2 caps for device %x:%x = %x/%x\n", FUNC_5(VAR_15), FUNC_4(VAR_15), VAR_17, VAR_18);
 return 0;
}
