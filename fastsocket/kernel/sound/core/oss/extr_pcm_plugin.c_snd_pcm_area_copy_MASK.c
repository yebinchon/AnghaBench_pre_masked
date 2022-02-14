
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_channel_area {char* addr; size_t first; size_t step; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (struct snd_pcm_channel_area const*,size_t,size_t,int) ;
 int FUNC_2 (int) ;

int FUNC_3(const struct snd_pcm_channel_area *VAR_1, size_t VAR_2,
        const struct snd_pcm_channel_area *VAR_3, size_t VAR_4,
        size_t VAR_5, int VAR_6)
{

 char *VAR_7, *VAR_8;
 int VAR_9;
 int VAR_10, VAR_11;
 VAR_7 = VAR_1->addr + (VAR_1->first + VAR_1->step * VAR_2) / 8;
 if (!VAR_1->addr)
  return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
 VAR_8 = VAR_3->addr + (VAR_3->first + VAR_3->step * VAR_4) / 8;
 if (!VAR_3->addr)
  return 0;
 VAR_9 = FUNC_2(VAR_6);
 if (VAR_9 <= 0)
  return -VAR_0;
 if (VAR_1->step == (unsigned int) VAR_9 &&
     VAR_3->step == (unsigned int) VAR_9 && VAR_9 >= 8) {
  size_t VAR_12 = VAR_5 * VAR_9 / 8;
  FUNC_0(VAR_8, VAR_7, VAR_12);
  return 0;
 }
 VAR_10 = VAR_1->step / 8;
 VAR_11 = VAR_3->step / 8;
 if (VAR_9 == 4) {

  int VAR_13 = VAR_1->first % 8;
  int VAR_14 = VAR_1->step % 8;
  int VAR_15 = VAR_3->first % 8;
  int VAR_16 = VAR_3->step % 8;
  while (VAR_5-- > 0) {
   unsigned char VAR_17;
   if (VAR_13)
    VAR_17 = *VAR_7 & 0x0f;
   else
    VAR_17 = (*VAR_7 & 0xf0) >> 4;
   if (VAR_15)
    *VAR_8 = (*VAR_8 & 0xf0) | VAR_17;
   else
    *VAR_8 = (*VAR_8 & 0x0f) | (VAR_17 << 4);
   VAR_7 += VAR_10;
   VAR_13 += VAR_14;
   if (VAR_13 == 8) {
    VAR_7++;
    VAR_13 = 0;
   }
   VAR_8 += VAR_11;
   VAR_15 += VAR_16;
   if (VAR_15 == 8) {
    VAR_8++;
    VAR_15 = 0;
   }
  }
 } else {
  VAR_9 /= 8;
  while (VAR_5-- > 0) {
   FUNC_0(VAR_8, VAR_7, VAR_9);
   VAR_7 += VAR_10;
   VAR_8 += VAR_11;
  }
 }
 return 0;
}
