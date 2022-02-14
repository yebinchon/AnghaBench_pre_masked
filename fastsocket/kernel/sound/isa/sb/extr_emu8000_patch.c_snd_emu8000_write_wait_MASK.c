
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu8000 {int dummy; } ;


 int FUNC_0 (struct snd_emu8000*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct snd_emu8000 *VAR_1)
{
 while ((FUNC_0(VAR_1) & 0x80000000) != 0) {
  FUNC_1(1);
  if (FUNC_2(VAR_0))
   break;
 }
}
