
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mpu401 {int substream_output; int (* write ) (struct snd_mpu401*,unsigned char,int ) ;} ;


 int FUNC_0 (struct snd_mpu401*) ;
 int FUNC_1 (struct snd_mpu401*) ;
 int FUNC_2 (struct snd_mpu401*,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,unsigned char*,int) ;
 int FUNC_5 (struct snd_mpu401*,unsigned char,int ) ;

__attribute__((used)) static void FUNC_6(struct snd_mpu401 * VAR_0)
{
 unsigned char VAR_1;
 int VAR_2 = 256;

 do {
  if (FUNC_4(VAR_0->substream_output,
           &VAR_1, 1) == 1) {




   if (!FUNC_1(VAR_0) &&
       !FUNC_1(VAR_0))
    break;
   VAR_0->write(VAR_0, VAR_1, FUNC_0(VAR_0));
   FUNC_3(VAR_0->substream_output, 1);
  } else {
   FUNC_2 (VAR_0, 0);
   break;
  }
 } while (--VAR_2 > 0);
}
