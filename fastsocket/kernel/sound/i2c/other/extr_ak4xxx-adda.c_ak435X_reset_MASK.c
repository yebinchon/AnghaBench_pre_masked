
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_akm4xxx {int dummy; } ;


 int FUNC_0 (struct snd_akm4xxx*,int ,unsigned char) ;
 int FUNC_1 (struct snd_akm4xxx*,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct snd_akm4xxx *VAR_0, int VAR_1,
  unsigned char VAR_2)
{
 unsigned char VAR_3;

 if (VAR_1) {
  FUNC_1(VAR_0, 0, 0x01, 0x02);
  return;
 }
 for (VAR_3 = 0x00; VAR_3 < VAR_2; VAR_3++)
  if (VAR_3 != 0x01)
   FUNC_1(VAR_0, 0, VAR_3,
       FUNC_0(VAR_0, 0, VAR_3));
 FUNC_1(VAR_0, 0, 0x01, 0x01);
}
