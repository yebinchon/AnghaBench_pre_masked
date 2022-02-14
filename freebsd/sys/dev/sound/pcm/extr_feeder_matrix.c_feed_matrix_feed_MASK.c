
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct pcm_feeder {int source; struct feed_matrix_info* data; } ;
struct pcm_channel {int dummy; } ;
struct feed_matrix_info {scalar_t__ oalign; scalar_t__ ialign; int (* apply ) (struct feed_matrix_info*,int *,int *,scalar_t__) ;int * reservoir; TYPE_1__* matrix; } ;
struct TYPE_2__ {scalar_t__* chn; } ;


 scalar_t__ FUNC_0 (int ,struct pcm_channel*,int *,scalar_t__,void*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (struct feed_matrix_info*,int *,int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct pcm_feeder *VAR_1, struct pcm_channel *VAR_2, uint8_t *VAR_3,
    uint32_t VAR_4, void *VAR_5)
{
 struct feed_matrix_info *VAR_6;
 uint32_t VAR_7, VAR_8;
 uint8_t *VAR_9, *VAR_10;

 VAR_6 = VAR_1->data;
 if (VAR_6->matrix[0].chn[0] == VAR_0)
  return (FUNC_0(VAR_1->source, VAR_2, VAR_3, VAR_4, VAR_5));

 VAR_10 = VAR_3;
 VAR_4 = FUNC_2(VAR_4, VAR_6->oalign);
 VAR_8 = VAR_6->ialign + VAR_6->oalign;
 do {
  if (VAR_4 < VAR_6->oalign)
   break;

  if (VAR_4 < VAR_8) {
   VAR_9 = VAR_6->reservoir;
   VAR_7 = VAR_6->ialign;
  } else {
   if (VAR_6->ialign == VAR_6->oalign)
    VAR_7 = VAR_4 - VAR_6->oalign;
   else if (VAR_6->ialign > VAR_6->oalign)
    VAR_7 = FUNC_2(VAR_4 - VAR_6->oalign,
        VAR_6->ialign);
   else
    VAR_7 = (FUNC_1(VAR_4, VAR_6->oalign) - 1) *
        VAR_6->ialign;
   VAR_9 = VAR_10 + VAR_4 - VAR_7;
  }

  VAR_7 = FUNC_1(FUNC_0(VAR_1->source, VAR_2, VAR_9, VAR_7, VAR_5),
      VAR_6->ialign);
  if (VAR_7 == 0)
   break;

  VAR_6->apply(VAR_6, VAR_9, VAR_10, VAR_7);

  VAR_7 *= VAR_6->oalign;
  VAR_10 += VAR_7;
  VAR_4 -= VAR_7;

 } while (VAR_4 != 0);

 return (VAR_10 - VAR_3);
}
