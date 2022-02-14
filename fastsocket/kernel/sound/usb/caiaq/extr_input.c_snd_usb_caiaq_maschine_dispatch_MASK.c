
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct snd_usb_caiaqdev {int input_dev; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (unsigned char const) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct snd_usb_caiaqdev *VAR_1,
     const unsigned char *VAR_2,
     unsigned int VAR_3)
{
 unsigned int VAR_4, VAR_5;
 uint16_t VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_6 = FUNC_1(VAR_2[VAR_4 * 2] << 8 | VAR_2[(VAR_4 * 2) + 1]);
  VAR_5 = VAR_6 >> 12;

  FUNC_2(VAR_1->input_dev, FUNC_0(VAR_5), VAR_6 & 0xfff);
 }

 FUNC_3(VAR_1->input_dev);
}
