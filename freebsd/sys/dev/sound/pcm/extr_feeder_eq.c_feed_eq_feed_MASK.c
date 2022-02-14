
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct pcm_feeder {int source; struct feed_eq_info* data; } ;
struct pcm_channel {int dummy; } ;
struct feed_eq_info {scalar_t__ state; scalar_t__ align; int (* biquad ) (struct feed_eq_info*,int *,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct pcm_channel*,int *,scalar_t__,void*) ;
 scalar_t__ FUNC_1 (int,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (struct feed_eq_info*,int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct pcm_feeder *VAR_1, struct pcm_channel *VAR_2, uint8_t *VAR_3,
    uint32_t VAR_4, void *VAR_5)
{
 struct feed_eq_info *VAR_6;
 uint32_t VAR_7;
 uint8_t *VAR_8;

 VAR_6 = VAR_1->data;







 if (VAR_6->state == VAR_0)
  return (FUNC_0(VAR_1->source, VAR_2, VAR_3, VAR_4, VAR_5));

 VAR_8 = VAR_3;
 VAR_4 = FUNC_2(VAR_4, VAR_6->align);

 do {
  if (VAR_4 < VAR_6->align)
   break;

  VAR_7 = FUNC_1(FUNC_0(VAR_1->source, VAR_2, VAR_8, VAR_4, VAR_5),
      VAR_6->align);
  if (VAR_7 == 0)
   break;

  VAR_6->biquad(VAR_6, VAR_8, VAR_7);

  VAR_7 *= VAR_6->align;
  VAR_8 += VAR_7;
  VAR_4 -= VAR_7;

 } while (VAR_4 != 0);

 return (VAR_8 - VAR_3);
}
