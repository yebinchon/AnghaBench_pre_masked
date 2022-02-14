
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dma_buffer {int area; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (size_t) ;
 int FUNC_1 (int,struct device*,size_t,struct snd_dma_buffer*) ;

int FUNC_2(int VAR_2, struct device *VAR_3, size_t VAR_4,
     struct snd_dma_buffer *VAR_5)
{
 int VAR_6;

 while ((VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5)) < 0) {
  size_t VAR_7;
  if (VAR_6 != -VAR_0)
   return VAR_6;
  if (VAR_4 <= VAR_1)
   return -VAR_0;
  VAR_7 = VAR_1 << FUNC_0(VAR_4);
  if (VAR_4 != VAR_7)
   VAR_4 = VAR_7;
  else
   VAR_4 >>= 1;
 }
 if (! VAR_5->area)
  return -VAR_0;
 return 0;
}
