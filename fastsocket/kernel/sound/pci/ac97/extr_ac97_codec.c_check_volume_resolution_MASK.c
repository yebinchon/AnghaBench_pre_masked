
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97_res_table {int reg; int bits; } ;
struct snd_ac97 {struct snd_ac97_res_table* res_table; } ;


 int FUNC_0 (unsigned short*) ;
 unsigned short FUNC_1 (struct snd_ac97*,int) ;
 int FUNC_2 (struct snd_ac97*,int,int) ;

__attribute__((used)) static void FUNC_3(struct snd_ac97 *VAR_0, int VAR_1, unsigned char *VAR_2, unsigned char *VAR_3)
{
 unsigned short VAR_4[3] = { 0x20, 0x10, 0x01 };
 unsigned char VAR_5[3] = { 63, 31, 15 };
 int VAR_6;


 if (VAR_0->res_table) {
  const struct snd_ac97_res_table *VAR_7;
  for (VAR_7 = VAR_0->res_table; VAR_7->reg; VAR_7++) {
   if (VAR_7->reg == VAR_1) {
    *VAR_2 = VAR_7->bits & 0xff;
    *VAR_3 = (VAR_7->bits >> 8) & 0xff;
    return;
   }
  }
 }

 *VAR_2 = *VAR_3 = 0;
 for (VAR_6 = 0 ; VAR_6 < FUNC_0(VAR_4); VAR_6++) {
  unsigned short VAR_8;
  FUNC_2(VAR_0, VAR_1, 0x8080 | VAR_4[VAR_6] | (VAR_4[VAR_6] << 8));




  VAR_8 = FUNC_1(VAR_0, VAR_1);
  VAR_8 = FUNC_1(VAR_0, VAR_1);
  if (! *VAR_2 && (VAR_8 & 0x7f) == VAR_4[VAR_6])
   *VAR_2 = VAR_5[VAR_6];
  if (! *VAR_3 && ((VAR_8 >> 8) & 0x7f) == VAR_4[VAR_6])
   *VAR_3 = VAR_5[VAR_6];
  if (*VAR_2 && *VAR_3)
   break;
 }
}
