
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {struct aureon_spec* spec; } ;
struct aureon_spec {unsigned short* stac9744; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct snd_ice1712*) ;
 int FUNC_1 (struct snd_ice1712*,unsigned int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct snd_ice1712 *VAR_5, unsigned short VAR_6,
         unsigned short VAR_7)
{
 struct aureon_spec *VAR_8 = VAR_5->spec;
 unsigned int VAR_9;


 VAR_9 = (FUNC_0(VAR_5) & ~0xFF) | (VAR_6 & 0x7F);
 FUNC_1(VAR_5, VAR_9);
 FUNC_2(10);
 VAR_9 |= VAR_0;
 FUNC_1(VAR_5, VAR_9);
 FUNC_2(10);
 VAR_9 &= ~VAR_0;
 FUNC_1(VAR_5, VAR_9);
 FUNC_2(10);


 VAR_9 &= ~VAR_4;
 VAR_9 |= VAR_7 & VAR_4;
 FUNC_1(VAR_5, VAR_9);
 FUNC_2(10);
 VAR_9 |= VAR_3;
 FUNC_1(VAR_5, VAR_9);
 FUNC_2(10);
 VAR_9 &= ~VAR_3;
 FUNC_1(VAR_5, VAR_9);
 FUNC_2(10);


 VAR_9 &= ~VAR_4;
 VAR_9 |= (VAR_7 >> 8) & VAR_4;

 FUNC_1(VAR_5, VAR_9);
 FUNC_2(10);
 VAR_9 |= VAR_2;
 FUNC_1(VAR_5, VAR_9);
 FUNC_2(10);
 VAR_9 &= ~VAR_2;
 FUNC_1(VAR_5, VAR_9);
 FUNC_2(10);


 VAR_9 |= VAR_1;
 FUNC_1(VAR_5, VAR_9);
 FUNC_2(10);
 VAR_9 &= ~VAR_1;
 FUNC_1(VAR_5, VAR_9);
 FUNC_2(10);


 VAR_8->stac9744[(VAR_6 & 0x7F) >> 1] = VAR_7;
}
