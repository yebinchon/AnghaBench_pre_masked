
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t dev_flags; } ;
struct snd_ac97 {TYPE_1__ spec; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct snd_ac97*) ;
 size_t FUNC_1 (struct snd_ac97*) ;
 size_t FUNC_2 (struct snd_ac97*) ;
 size_t FUNC_3 (struct snd_ac97*) ;
 int FUNC_4 (struct snd_ac97*,int ,int,unsigned short) ;

__attribute__((used)) static void FUNC_5(struct snd_ac97 *VAR_1)
{



 static unsigned short VAR_2[3][2] = {
  { 0x0008, 0x0000 },
  { 0x0000, 0x0008 },
  { 0x0000, 0x0008 },
 };
 static unsigned short VAR_3[3][2] = {
  { 0x0000, 0x1000 },
  { 0x1000, 0x0000 },
  { 0x0000, 0x1000 },
 };
 static unsigned short VAR_4[3][2] = {
  { 0x0000, 0x0400 },
  { 0x0000, 0x0400 },
  { 0x0000, 0x0400 },
 };
 static unsigned short VAR_5[3][2] = {
  { 0x2000, 0x0880 },
  { 0x0000, 0x2880 },
  { 0x2000, 0x0800 },
 };
 unsigned short VAR_6 = 0;

 VAR_6 |= VAR_2[VAR_1->spec.dev_flags][FUNC_3(VAR_1)];
 VAR_6 |= VAR_3[VAR_1->spec.dev_flags][FUNC_0(VAR_1)];
 VAR_6 |= VAR_4[VAR_1->spec.dev_flags][FUNC_2(VAR_1)];
 VAR_6 |= VAR_5[VAR_1->spec.dev_flags][FUNC_1(VAR_1)];

 FUNC_4(VAR_1, VAR_0, 0x3c88, VAR_6);
}
