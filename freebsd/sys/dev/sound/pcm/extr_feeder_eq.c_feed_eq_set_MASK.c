
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint32_t ;
struct pcm_feeder {TYPE_1__* desc; struct feed_eq_info* data; } ;
struct TYPE_6__ {void* gain; } ;
struct TYPE_5__ {void* gain; } ;
struct feed_eq_info {int channels; int align; int state; int preamp; TYPE_3__ bass; TYPE_2__ treble; void* rate; } ;
struct TYPE_4__ {int in; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int) ;

 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct feed_eq_info*) ;
 int FUNC_4 (struct feed_eq_info*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct pcm_feeder *VAR_9, int VAR_10, int VAR_11)
{
 struct feed_eq_info *VAR_12;

 VAR_12 = VAR_9->data;

 switch (VAR_10) {
 case 132:
  if (VAR_11 < VAR_8 || VAR_11 > VAR_7)
   return (VAR_0);
  VAR_12->channels = (uint32_t)VAR_11;
  VAR_12->align = VAR_12->channels * FUNC_0(VAR_9->desc->in);
  FUNC_3(VAR_12);
  break;
 case 130:
  if (FUNC_5(VAR_11) == 0)
   return (VAR_0);
  VAR_12->rate = (uint32_t)VAR_11;
  if (VAR_12->state == VAR_6)
   VAR_12->state = VAR_3;
  return (FUNC_4(VAR_12));
  break;
 case 128:
 case 133:
  if (VAR_11 < 0 || VAR_11 > 100)
   return (VAR_0);
  if (VAR_10 == 128)
   VAR_12->treble.gain = FUNC_1(VAR_11);
  else
   VAR_12->bass.gain = FUNC_1(VAR_11);
  break;
 case 131:
  if (VAR_11 < VAR_5 || VAR_11 > VAR_4)
   return (VAR_0);
  VAR_12->preamp = FUNC_2(VAR_11);
  break;
 case 129:
  if (!(VAR_11 == VAR_1 || VAR_11 == VAR_3 ||
      VAR_11 == VAR_2))
   return (VAR_0);
  VAR_12->state = VAR_11;
  FUNC_3(VAR_12);
  break;
 default:
  return (VAR_0);
  break;
 }

 return (0);
}
