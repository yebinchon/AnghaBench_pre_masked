
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mpu401 {unsigned char (* read ) (struct snd_mpu401*,int ) ;int substream_input; int mode; } ;


 int FUNC_0 (struct snd_mpu401*) ;
 int VAR_0 ;
 int FUNC_1 (struct snd_mpu401*) ;
 int FUNC_2 (int ,unsigned char*,int) ;
 unsigned char FUNC_3 (struct snd_mpu401*,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct snd_mpu401 * VAR_1)
{
 int VAR_2 = 128;
 unsigned char VAR_3;

 while (VAR_2-- > 0) {
  if (! FUNC_1(VAR_1))
   break;
  VAR_3 = VAR_1->read(VAR_1, FUNC_0(VAR_1));
  if (FUNC_4(VAR_0, &VAR_1->mode))
   FUNC_2(VAR_1->substream_input, &VAR_3, 1);
 }
}
