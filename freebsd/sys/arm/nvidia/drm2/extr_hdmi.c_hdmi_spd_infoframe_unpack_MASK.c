
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct hdmi_spd_infoframe {int sdi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (void*,int ) ;
 int FUNC_2 (struct hdmi_spd_infoframe*,int*,int*) ;

__attribute__((used)) static int FUNC_3(struct hdmi_spd_infoframe *VAR_5,
         void *VAR_6)
{
 uint8_t *VAR_7 = VAR_6;
 int VAR_8;

 if (VAR_7[0] != VAR_2 ||
     VAR_7[1] != 1 ||
     VAR_7[2] != VAR_3) {
  return -VAR_0;
 }

 if (FUNC_1(VAR_6, FUNC_0(VAR_4)) != 0)
  return -VAR_0;

 VAR_7 += VAR_1;

 VAR_8 = FUNC_2(VAR_5, VAR_7, VAR_7 + 8);
 if (VAR_8)
  return VAR_8;

 VAR_5->sdi = VAR_7[24];

 return 0;
}
