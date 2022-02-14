
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int*) ;
 scalar_t__ FUNC_1 (char*,int,char*,unsigned int) ;

__attribute__((used)) static void FUNC_2(int VAR_0, char *VAR_1, int VAR_2)
{
 static unsigned int VAR_3[] = {
  5512, 8000, 11025, 16000, 22050, 32000, 44100, 48000, 64000,
  88200, 96000, 176400, 192000, 384000
 };
 int VAR_4, VAR_5;

 for (VAR_4 = 0, VAR_5 = 0; VAR_4 < FUNC_0(VAR_3); VAR_4++)
  if (VAR_0 & (1 << VAR_4))
   VAR_5 += FUNC_1(VAR_1 + VAR_5, VAR_2 - VAR_5, " %d",
    VAR_3[VAR_4]);

 VAR_1[VAR_5] = '\0';
}
