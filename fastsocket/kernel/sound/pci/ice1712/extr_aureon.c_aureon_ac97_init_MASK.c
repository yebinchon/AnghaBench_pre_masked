
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {struct aureon_spec* spec; } ;
struct aureon_spec {unsigned short* stac9744; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct snd_ice1712*,int ,int) ;
 int FUNC_1 (unsigned short**,int ,int) ;
 unsigned int FUNC_2 (struct snd_ice1712*) ;
 int FUNC_3 (struct snd_ice1712*,unsigned int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct snd_ice1712 *VAR_3)
{
 struct aureon_spec *VAR_4 = VAR_3->spec;
 int VAR_5;
 static const unsigned short VAR_6[] = {
  0x00, 0x9640,
  0x02, 0x8000,
  0x04, 0x8000,
  0x06, 0x8000,
  0x0C, 0x8008,
  0x0E, 0x8008,
  0x10, 0x8808,
  0x12, 0x8808,
  0x14, 0x8808,
  0x16, 0x8808,
  0x18, 0x8808,
  0x1C, 0x8000,
  0x26, 0x000F,
  0x28, 0x0201,
  0x2C, 0xBB80,
  0x32, 0xBB80,
  0x7C, 0x8384,
  0x7E, 0x7644,
  (unsigned short)-1
 };
 unsigned int VAR_7;


 VAR_7 = (FUNC_2(VAR_3) | VAR_2) & ~VAR_1;
 FUNC_3(VAR_3, VAR_7);
 FUNC_4(3);

 VAR_7 &= ~VAR_2;
 FUNC_3(VAR_3, VAR_7);
 FUNC_4(3);

 VAR_7 |= VAR_2;
 FUNC_3(VAR_3, VAR_7);
 FUNC_4(3);

 FUNC_1(&VAR_4->stac9744, 0, sizeof(VAR_4->stac9744));
 for (VAR_5 = 0; VAR_6[VAR_5] != (unsigned short)-1; VAR_5 += 2)
  VAR_4->stac9744[(VAR_6[VAR_5]) >> 1] = VAR_6[VAR_5+1];


 FUNC_0(VAR_3, VAR_0, 0x0000);

 return 0;
}
