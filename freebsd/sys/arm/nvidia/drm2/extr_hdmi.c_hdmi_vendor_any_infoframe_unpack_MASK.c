
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_vendor_infoframe {size_t length; int vic; int s3d_struct; int s3d_ext_data; } ;
union hdmi_vendor_any_infoframe {struct hdmi_vendor_infoframe hdmi; } ;
typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*,scalar_t__) ;
 int FUNC_1 (struct hdmi_vendor_infoframe*) ;

__attribute__((used)) static int
FUNC_2(union hdmi_vendor_any_infoframe *VAR_4,
     void *VAR_5)
{
 uint8_t *VAR_6 = VAR_5;
 size_t VAR_7;
 int VAR_8;
 uint8_t VAR_9;
 struct hdmi_vendor_infoframe *VAR_10 = &VAR_4->hdmi;

 if (VAR_6[0] != VAR_3 ||
     VAR_6[1] != 1 ||
     (VAR_6[2] != 5 && VAR_6[2] != 6))
  return -VAR_0;

 VAR_7 = VAR_6[2];

 if (FUNC_0(VAR_5,
        VAR_2 + VAR_7) != 0)
  return -VAR_0;

 VAR_6 += VAR_2;


 if ((VAR_6[0] != 0x03) ||
     (VAR_6[1] != 0x0c) ||
     (VAR_6[2] != 0x00))
  return -VAR_0;

 VAR_9 = VAR_6[3] >> 5;

 if (VAR_9 > 0x2)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_10);
 if (VAR_8)
  return VAR_8;

 VAR_10->length = VAR_7;

 if (VAR_9 == 0x1) {
  VAR_10->vic = VAR_6[4];
 } else if (VAR_9 == 0x2) {
  VAR_10->s3d_struct = VAR_6[4] >> 4;
  if (VAR_10->s3d_struct >= VAR_1) {
   if (VAR_7 == 6)
    VAR_10->s3d_ext_data = VAR_6[5] >> 4;
   else
    return -VAR_0;
  }
 }

 return 0;
}
