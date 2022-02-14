
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct z_info {scalar_t__ channels; scalar_t__ bps; scalar_t__ z_startdrift; scalar_t__ z_alphadrift; int z_start; int z_size; scalar_t__ z_pos; int z_cycle; scalar_t__ z_alpha; scalar_t__ z_gy; int (* z_resample ) (struct z_info*,int *) ;int * z_delay; } ;
struct pcm_feeder {int source; struct z_info* data; } ;
struct pcm_channel {int dummy; } ;
typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (int,scalar_t__) ;
 scalar_t__ FUNC_1 (struct z_info*,int ,int) ;
 int FUNC_2 (int ,char*,scalar_t__,scalar_t__,scalar_t__,int,int) ;
 int VAR_0 ;
 int FUNC_3 (struct z_info*,int *) ;
 int FUNC_4 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_5 (struct z_info*,scalar_t__,int) ;
 int FUNC_6 (int ,struct pcm_channel*,int *,scalar_t__,void*) ;
 scalar_t__ FUNC_7 (struct z_info*) ;
 int FUNC_8 (struct z_info*) ;
 int FUNC_9 (struct z_info*,scalar_t__) ;
 scalar_t__ FUNC_10 (struct z_info*,int) ;
 scalar_t__ FUNC_11 (int ,scalar_t__) ;
 scalar_t__ FUNC_12 (struct z_info*,int,scalar_t__) ;
 void* FUNC_13 (struct z_info*,int,int) ;

__attribute__((used)) static uint32_t
FUNC_14(struct pcm_feeder *VAR_1, struct pcm_channel *VAR_2,
    uint8_t *VAR_3, uint32_t VAR_4, void *VAR_5)
{
 struct z_info *VAR_6;
 int32_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 int32_t VAR_13, VAR_14, VAR_15, VAR_16;
 uint8_t *VAR_17;

 VAR_6 = VAR_1->data;
 if (VAR_6->z_resample == ((void*)0))
  return (FUNC_6(VAR_1->source, VAR_2, VAR_3, VAR_4, VAR_5));






 VAR_12 = VAR_6->channels * VAR_6->bps;
 VAR_10 = FUNC_0(VAR_4, VAR_12);
 if (VAR_10 == 0)
  return (0);





 VAR_11 = FUNC_10(VAR_6, VAR_10) - FUNC_7(VAR_6);





 VAR_8 = FUNC_1(VAR_6, 0, 1);
 VAR_7 = FUNC_5(VAR_6, VAR_8, 1);


 VAR_17 = VAR_3;

 do {
  if (VAR_11 != 0) {
   VAR_13 = FUNC_11(FUNC_8(VAR_6), VAR_11);
   if (VAR_13 == 0) {





    VAR_14 = FUNC_7(VAR_6);
    VAR_15 = FUNC_13(VAR_6, VAR_6->z_start,
        (VAR_6->z_size << 1) - 1);
    VAR_16 = (VAR_6->z_size << 1) + VAR_14;
    FUNC_4(VAR_6->z_delay + (VAR_15 * VAR_12),
        VAR_6->z_delay, VAR_16 * VAR_12);
    VAR_6->z_start =
        FUNC_13(VAR_6, VAR_6->z_size << 1, 1);
    VAR_6->z_pos =
        FUNC_12(VAR_6, VAR_6->z_start, VAR_14 + 1);
    VAR_13 = FUNC_11(FUNC_8(VAR_6), VAR_11);
   }
   if (VAR_13 != 0) {




    VAR_14 = FUNC_0(FUNC_6(VAR_1->source, VAR_2,
        VAR_6->z_delay + (VAR_6->z_pos * VAR_12),
        VAR_13 * VAR_12, VAR_5), VAR_12);





    VAR_11 -= VAR_14;
    VAR_6->z_pos += VAR_14;
    if (VAR_14 != VAR_13)
     VAR_11 = 0;
   }
  }

  VAR_9 = FUNC_11(FUNC_9(VAR_6, FUNC_7(VAR_6)), VAR_10);
  if (VAR_9 != 0) {
   VAR_10 -= VAR_9;
   do {
    VAR_6->z_resample(VAR_6, VAR_17);






    VAR_6->z_alpha += VAR_7;
    if (VAR_6->z_alpha < VAR_6->z_gy)
     VAR_6->z_start += VAR_8;
    else {
     VAR_6->z_start += VAR_8 - 1;
     VAR_6->z_alpha -= VAR_6->z_gy;
    }

    VAR_17 += VAR_12;



   } while (--VAR_9 != 0);
  }
 } while (VAR_11 != 0 && VAR_10 != 0);




 return (VAR_17 - VAR_3);
}
