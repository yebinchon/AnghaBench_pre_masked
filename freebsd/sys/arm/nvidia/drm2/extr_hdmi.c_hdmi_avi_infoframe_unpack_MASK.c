
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct hdmi_avi_infoframe {int colorspace; int active_aspect; int top_bar; int bottom_bar; int left_bar; int right_bar; int scan_mode; int colorimetry; int picture_aspect; int itc; int extended_colorimetry; int quantization_range; int nups; int video_code; int ycc_quantization_range; int content_type; int pixel_repeat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (struct hdmi_avi_infoframe*) ;
 scalar_t__ FUNC_2 (void*,int ) ;

__attribute__((used)) static int FUNC_3(struct hdmi_avi_infoframe *VAR_5,
         void *VAR_6)
{
 uint8_t *VAR_7 = VAR_6;
 int VAR_8;

 if (VAR_7[0] != VAR_4 ||
     VAR_7[1] != 2 ||
     VAR_7[2] != VAR_2)
  return -VAR_1;

 if (FUNC_2(VAR_6, FUNC_0(VAR_0)) != 0)
  return -VAR_1;

 VAR_8 = FUNC_1(VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_7 += VAR_3;

 VAR_5->colorspace = (VAR_7[0] >> 5) & 0x3;
 if (VAR_7[0] & 0x10)
  VAR_5->active_aspect = VAR_7[1] & 0xf;
 if (VAR_7[0] & 0x8) {
  VAR_5->top_bar = (VAR_7[5] << 8) + VAR_7[6];
  VAR_5->bottom_bar = (VAR_7[7] << 8) + VAR_7[8];
 }
 if (VAR_7[0] & 0x4) {
  VAR_5->left_bar = (VAR_7[9] << 8) + VAR_7[10];
  VAR_5->right_bar = (VAR_7[11] << 8) + VAR_7[12];
 }
 VAR_5->scan_mode = VAR_7[0] & 0x3;

 VAR_5->colorimetry = (VAR_7[1] >> 6) & 0x3;
 VAR_5->picture_aspect = (VAR_7[1] >> 4) & 0x3;
 VAR_5->active_aspect = VAR_7[1] & 0xf;

 VAR_5->itc = VAR_7[2] & 0x80 ? 1 : 0;
 VAR_5->extended_colorimetry = (VAR_7[2] >> 4) & 0x7;
 VAR_5->quantization_range = (VAR_7[2] >> 2) & 0x3;
 VAR_5->nups = VAR_7[2] & 0x3;

 VAR_5->video_code = VAR_7[3] & 0x7f;
 VAR_5->ycc_quantization_range = (VAR_7[4] >> 6) & 0x3;
 VAR_5->content_type = (VAR_7[4] >> 4) & 0x3;

 VAR_5->pixel_repeat = VAR_7[4] & 0xf;

 return 0;
}
