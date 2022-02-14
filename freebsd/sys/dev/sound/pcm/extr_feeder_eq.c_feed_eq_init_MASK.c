
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pcm_feeder {struct feed_eq_info* data; TYPE_1__* desc; } ;
struct TYPE_7__ {void* gain; } ;
struct TYPE_6__ {void* gain; } ;
struct feed_eq_info {int channels; int align; int * biquad; int state; int preamp; TYPE_3__ bass; TYPE_2__ treble; int rate; } ;
typedef int * feed_eq_t ;
struct TYPE_8__ {scalar_t__ format; int * biquad; } ;
struct TYPE_5__ {scalar_t__ in; scalar_t__ out; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_4__* VAR_9 ;
 int FUNC_5 (struct feed_eq_info*) ;
 struct feed_eq_info* FUNC_6 (int,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct pcm_feeder *VAR_10)
{
 struct feed_eq_info *VAR_11;
 feed_eq_t VAR_12;
 int VAR_13;

 if (VAR_10->desc->in != VAR_10->desc->out)
  return (VAR_0);

 VAR_12 = ((void*)0);

 for (VAR_13 = 0; VAR_13 < VAR_2 && VAR_12 == ((void*)0); VAR_13++) {
  if (FUNC_2(VAR_10->desc->in) == VAR_9[VAR_13].format)
   VAR_12 = VAR_9[VAR_13].biquad;
 }

 if (VAR_12 == ((void*)0))
  return (VAR_0);

 VAR_11 = FUNC_6(sizeof(*VAR_11), VAR_6, VAR_7 | VAR_8);
 if (VAR_11 == ((void*)0))
  return (VAR_1);

 VAR_11->channels = FUNC_1(VAR_10->desc->in);
 VAR_11->align = VAR_11->channels * FUNC_0(VAR_10->desc->in);

 VAR_11->rate = VAR_4;
 VAR_11->treble.gain = FUNC_3(50);
 VAR_11->bass.gain = FUNC_3(50);
 VAR_11->preamp = FUNC_4(VAR_3);
 VAR_11->state = VAR_5;

 VAR_11->biquad = VAR_12;

 VAR_10->data = VAR_11;

 return (FUNC_5(VAR_11));
}
