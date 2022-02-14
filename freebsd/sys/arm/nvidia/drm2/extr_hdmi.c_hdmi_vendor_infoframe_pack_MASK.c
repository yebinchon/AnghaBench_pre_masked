
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct hdmi_vendor_infoframe {size_t vic; int s3d_struct; int length; int type; int version; int s3d_ext_data; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (void*,size_t) ;
 int FUNC_1 (void*,int ,size_t) ;

ssize_t FUNC_2(struct hdmi_vendor_infoframe *VAR_5,
     void *VAR_6, size_t VAR_7)
{
 uint8_t *VAR_8 = VAR_6;
 size_t VAR_9;


 if (VAR_5->vic == 0 && VAR_5->s3d_struct == VAR_2)
  return -VAR_0;


 if (VAR_5->vic != 0 && VAR_5->s3d_struct != VAR_2)
  return -VAR_0;


 if (VAR_5->s3d_struct >= VAR_3)
  VAR_5->length = 6;
 else
  VAR_5->length = 5;

 VAR_9 = VAR_4 + VAR_5->length;

 if (VAR_7 < VAR_9)
  return -VAR_1;

 FUNC_1(VAR_6, 0, VAR_7);

 VAR_8[0] = VAR_5->type;
 VAR_8[1] = VAR_5->version;
 VAR_8[2] = VAR_5->length;
 VAR_8[3] = 0;


 VAR_8[4] = 0x03;
 VAR_8[5] = 0x0c;
 VAR_8[6] = 0x00;

 if (VAR_5->vic) {
  VAR_8[7] = 0x1 << 5;
  VAR_8[8] = VAR_5->vic;
 } else {
  VAR_8[7] = 0x2 << 5;
  VAR_8[8] = (VAR_5->s3d_struct & 0xf) << 4;
  if (VAR_5->s3d_struct >= VAR_3)
   VAR_8[9] = (VAR_5->s3d_ext_data & 0xf) << 4;
 }

 FUNC_0(VAR_6, VAR_9);

 return VAR_9;
}
