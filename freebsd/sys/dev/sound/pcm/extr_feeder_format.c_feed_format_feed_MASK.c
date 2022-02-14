
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct pcm_feeder {int source; struct feed_format_info* data; } ;
struct pcm_channel {int dummy; } ;
struct feed_format_info {scalar_t__ oalign; scalar_t__ ialign; scalar_t__ channels; scalar_t__ obps; int ibps; int (* write ) (int *,int ) ;int (* read ) (int *) ;int * reservoir; } ;
typedef int intpcm_t ;


 scalar_t__ FUNC_0 (int ,struct pcm_channel*,int *,scalar_t__,void*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct pcm_feeder *VAR_0, struct pcm_channel *VAR_1, uint8_t *VAR_2,
    uint32_t VAR_3, void *VAR_4)
{
 struct feed_format_info *VAR_5;
 intpcm_t VAR_6;
 uint32_t VAR_7;
 uint8_t *VAR_8, *VAR_9;

 VAR_5 = VAR_0->data;
 VAR_9 = VAR_2;
 VAR_3 = FUNC_2(VAR_3, VAR_5->oalign);

 do {
  if (VAR_3 < VAR_5->oalign)
   break;

  if (VAR_3 < VAR_5->ialign) {
   VAR_8 = VAR_5->reservoir;
   VAR_7 = VAR_5->ialign;
  } else {
   if (VAR_5->ialign == VAR_5->oalign)
    VAR_7 = VAR_3;
   else if (VAR_5->ialign > VAR_5->oalign)
    VAR_7 = FUNC_2(VAR_3, VAR_5->ialign);
   else
    VAR_7 = FUNC_1(VAR_3, VAR_5->oalign) *
        VAR_5->ialign;
   VAR_8 = VAR_9 + VAR_3 - VAR_7;
  }

  VAR_7 = FUNC_1(FUNC_0(VAR_0->source, VAR_1, VAR_8, VAR_7, VAR_4),
      VAR_5->ialign);
  if (VAR_7 == 0)
   break;

  VAR_7 *= VAR_5->channels;
  VAR_3 -= VAR_7 * VAR_5->obps;

  do {
   VAR_6 = VAR_5->read(VAR_8);
   VAR_5->write(VAR_9, VAR_6);
   VAR_9 += VAR_5->obps;
   VAR_8 += VAR_5->ibps;
  } while (--VAR_7 != 0);

 } while (VAR_3 != 0);

 return (VAR_9 - VAR_2);
}
