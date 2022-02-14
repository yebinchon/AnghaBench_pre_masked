
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ali {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (struct snd_ali*,unsigned int) ;
 int FUNC_3 (struct snd_ali*,unsigned int,unsigned int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct snd_ali *VAR_2,
          unsigned int VAR_3)
{
 unsigned long VAR_4;
 unsigned int VAR_5;

 VAR_4 = VAR_1 + FUNC_0(250);

 for (;;) {
  VAR_5 = FUNC_2(VAR_2,VAR_3);
  if (!(VAR_5 & 0x8000))
   return 0;
  if (!FUNC_5(VAR_4, VAR_1))
   break;
  FUNC_1(1);
 }

 FUNC_3(VAR_2, VAR_3, VAR_5 & ~0x8000);
 FUNC_4("ali_codec_ready: codec is not ready.\n ");
 return -VAR_0;
}
