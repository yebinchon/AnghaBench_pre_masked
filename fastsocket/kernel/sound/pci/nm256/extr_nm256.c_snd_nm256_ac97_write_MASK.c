
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct snd_ac97 {struct nm256* private_data; } ;
struct nm256 {unsigned short* ac97_regs; scalar_t__ mixer_base; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned short) ;
 scalar_t__ FUNC_2 (struct nm256*) ;
 int FUNC_3 (struct nm256*,scalar_t__,unsigned short) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(struct snd_ac97 *VAR_0,
       unsigned short VAR_1, unsigned short VAR_2)
{
 struct nm256 *VAR_3 = VAR_0->private_data;
 int VAR_4 = 2;
 int VAR_5 = FUNC_1(VAR_1);
 u32 VAR_6;

 if (VAR_5 < 0)
  return;

 VAR_6 = VAR_3->mixer_base;

 FUNC_2(VAR_3);


 while (VAR_4-- > 0) {
  FUNC_3(VAR_3, VAR_6 + VAR_1, VAR_2);
  FUNC_0(1);
  if (FUNC_2(VAR_3)) {

   VAR_3->ac97_regs[VAR_5] = VAR_2;
   return;
  }
 }
 FUNC_4("nm256: ac97 codec not ready..\n");
}
