
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_buffer {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int*) ;
 int FUNC_1 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct snd_info_buffer *VAR_1, unsigned int VAR_2)
{
 static unsigned int VAR_3[] = {
  8000, 11025, 16000, 22050, 32000, 44100, 48000, 88200,
  96000, 176400, 192000, 384000
 };
 int VAR_4;

 VAR_2 &= VAR_0;
 FUNC_1(VAR_1, "    rates [0x%x]:", VAR_2);
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3); VAR_4++)
  if (VAR_2 & (1 << VAR_4))
   FUNC_1(VAR_1, " %d", VAR_3[VAR_4]);
 FUNC_1(VAR_1, "\n");
}
