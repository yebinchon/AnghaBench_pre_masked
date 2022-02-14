
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rme9652 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_rme9652*,int ,int) ;

__attribute__((used)) static void FUNC_1 (struct snd_rme9652 *VAR_2, const int VAR_3)
{
 long VAR_4;
 long VAR_5;

 for (VAR_5 = 0, VAR_4 = 0x80; VAR_5 < 8; VAR_5++, VAR_4 >>= 1) {
  if (VAR_3 & VAR_4)
   FUNC_0 (VAR_2, VAR_1, 1);
  else
   FUNC_0 (VAR_2, VAR_1, 0);

  FUNC_0 (VAR_2, VAR_0, 1);
  FUNC_0 (VAR_2, VAR_0, 0);
 }
}
