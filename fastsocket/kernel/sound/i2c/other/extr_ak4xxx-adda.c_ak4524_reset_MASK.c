
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_akm4xxx {scalar_t__ type; int num_dacs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_akm4xxx*,unsigned int,unsigned char) ;
 int FUNC_1 (struct snd_akm4xxx*,unsigned int,unsigned char,int) ;

__attribute__((used)) static void FUNC_2(struct snd_akm4xxx *VAR_1, int VAR_2)
{
 unsigned int VAR_3;
 unsigned char VAR_4, VAR_5;

 if (VAR_1->type == VAR_0)
  VAR_5 = 0x06;
 else
  VAR_5 = 0x08;
 for (VAR_3 = 0; VAR_3 < VAR_1->num_dacs/2; VAR_3++) {
  FUNC_1(VAR_1, VAR_3, 0x01, VAR_2 ? 0x00 : 0x03);
  if (VAR_2)
   continue;

  for (VAR_4 = 0x04; VAR_4 < VAR_5; VAR_4++)
   FUNC_1(VAR_1, VAR_3, VAR_4,
       FUNC_0(VAR_1, VAR_3, VAR_4));
 }
}
