
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct pcm_feeder {int source; struct feed_volume_info* data; } ;
struct pcm_channel {int** volume; } ;
struct feed_volume_info {scalar_t__ state; int* matrix; int channels; int bps; int (* apply ) (int*,int*,int,int *,int) ;int volume_class; } ;


 int FUNC_0 (int ,struct pcm_channel*,int *,int,void*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,int) ;
 size_t FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int*,int*,int,int *,int) ;

__attribute__((used)) static int
FUNC_4(struct pcm_feeder *VAR_2, struct pcm_channel *VAR_3, uint8_t *VAR_4,
    uint32_t VAR_5, void *VAR_6)
{
 struct feed_volume_info *VAR_7;
 uint32_t VAR_8, VAR_9;
 int VAR_10, *VAR_11, *VAR_12;
 uint8_t *VAR_13;




 VAR_7 = VAR_2->data;

 if (VAR_7->state == VAR_0)
  return (FUNC_0(VAR_2->source, VAR_3, VAR_4, VAR_5, VAR_6));

 VAR_11 = VAR_3->volume[FUNC_2(VAR_7->volume_class)];
 VAR_12 = VAR_7->matrix;




 VAR_8 = 0;
 VAR_10 = VAR_7->channels;
 do {
  if (VAR_11[VAR_12[--VAR_10]] != VAR_1) {
   VAR_8 = 1;
   break;
  }
 } while (VAR_10 != 0);


 if (VAR_8 == 0)
  return (FUNC_0(VAR_2->source, VAR_3, VAR_4, VAR_5, VAR_6));

 VAR_13 = VAR_4;
 VAR_9 = VAR_7->bps * VAR_7->channels;

 do {
  if (VAR_5 < VAR_9)
   break;

  VAR_8 = FUNC_1(FUNC_0(VAR_2->source, VAR_3, VAR_13, VAR_5, VAR_6),
      VAR_9);
  if (VAR_8 == 0)
   break;

  VAR_7->apply(VAR_11, VAR_12, VAR_7->channels, VAR_13, VAR_8);

  VAR_8 *= VAR_9;
  VAR_13 += VAR_8;
  VAR_5 -= VAR_8;

 } while (VAR_5 != 0);

 return (VAR_13 - VAR_4);
}
