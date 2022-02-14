
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_buffparms {int subdivision; scalar_t__ fragment_size; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2, struct dma_buffparms *VAR_3, int VAR_4)
{
 if (VAR_4 == 0)
 {
  VAR_4 = VAR_3->subdivision;
  if (VAR_4 == 0)
   VAR_4 = 1;
  return VAR_4;
 }
 if (VAR_3->subdivision != 0 || VAR_3->fragment_size)
  return -VAR_0;

 if (VAR_4 > VAR_1)
  return -VAR_0;

 if (VAR_4 != 1 && VAR_4 != 2 && VAR_4 != 4 && VAR_4 != 8 && VAR_4 != 16)
  return -VAR_0;

 VAR_3->subdivision = VAR_4;
 return VAR_4;
}
