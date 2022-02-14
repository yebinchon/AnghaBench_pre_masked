
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmabuf {int num_channels; int sample_size; int src_factor; int dma_bytes_per_sample; int user_bytes_per_sample; } ;
typedef int s16 ;


 int VAR_0 ;
 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int *,int) ;

__attribute__((used)) static int
FUNC_3(struct dmabuf *VAR_1, char* VAR_2, char* VAR_3,
              int VAR_4)
{
 int VAR_5, VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9 = (VAR_1->num_channels == 1);
 char VAR_10[12];
 s16 VAR_11, VAR_12[6];

 if (VAR_1->sample_size == 16 && !VAR_9 && VAR_1->src_factor == 1) {


  if (FUNC_1(VAR_2, VAR_3, VAR_4))
   return -VAR_0;
  return VAR_4;
 }

 VAR_7 = VAR_1->dma_bytes_per_sample * VAR_1->src_factor;
 VAR_8 = VAR_4 / VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++) {
  if (FUNC_1(VAR_10, VAR_3,
       VAR_1->user_bytes_per_sample)) {
   return -VAR_0;
  }

  for (VAR_6 = 0; VAR_6 < VAR_1->num_channels; VAR_6++) {
   if (VAR_1->sample_size == 8)
    VAR_11 = FUNC_0(VAR_10[VAR_6]);
   else
    VAR_11 = *((s16 *) (&VAR_10[VAR_6 * 2]));
   VAR_12[VAR_6] = VAR_11;
   if (VAR_9)
    VAR_12[VAR_6 + 1] = VAR_11;
  }



  for (VAR_6 = 0; VAR_6 < VAR_1->src_factor; VAR_6++)
   FUNC_2(VAR_2, VAR_12, VAR_1->dma_bytes_per_sample);

  VAR_3 += VAR_1->user_bytes_per_sample;
  VAR_2 += VAR_7;
 }

 return VAR_8 * VAR_7;
}
