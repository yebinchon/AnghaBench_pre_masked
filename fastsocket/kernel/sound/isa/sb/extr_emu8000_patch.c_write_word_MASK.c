
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu8000 {int dummy; } ;


 int FUNC_0 (struct snd_emu8000*,int) ;
 int FUNC_1 (struct snd_emu8000*,unsigned short) ;
 int VAR_0 ;
 int FUNC_2 (struct snd_emu8000*) ;

__attribute__((used)) static inline void
FUNC_3(struct snd_emu8000 *VAR_1, int *VAR_2, unsigned short VAR_3)
{
 if (VAR_0) {
  if (VAR_0 > 1)
   FUNC_2(VAR_1);
  FUNC_0(VAR_1, *VAR_2);
 }
 FUNC_1(VAR_1, VAR_3);
 *VAR_2 += 1;
}
