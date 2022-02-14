
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct pcmchan_matrix {int dummy; } ;
struct pcm_feeder {struct feed_volume_info* data; TYPE_1__* desc; } ;
struct feed_volume_info {scalar_t__ channels; int state; int volume_class; int apply; int bps; } ;
struct TYPE_4__ {scalar_t__ format; int apply; } ;
struct TYPE_3__ {scalar_t__ in; scalar_t__ out; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 TYPE_2__* VAR_9 ;
 struct pcmchan_matrix* FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct pcm_feeder*,struct pcmchan_matrix*) ;
 int FUNC_5 (struct feed_volume_info*,int ) ;
 struct feed_volume_info* FUNC_6 (int,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct pcm_feeder *VAR_10)
{
 struct feed_volume_info *VAR_11;
 struct pcmchan_matrix *VAR_12;
 uint32_t VAR_13;
 int VAR_14;

 if (VAR_10->desc->in != VAR_10->desc->out ||
     FUNC_1(VAR_10->desc->in) > VAR_7)
  return (VAR_0);

 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
  if (FUNC_2(VAR_10->desc->in) ==
      VAR_9[VAR_13].format) {
   VAR_11 = FUNC_6(sizeof(*VAR_11), VAR_4,
       VAR_5 | VAR_6);
   if (VAR_11 == ((void*)0))
    return (VAR_1);

   VAR_11->bps = FUNC_0(VAR_10->desc->in);
   VAR_11->channels = FUNC_1(VAR_10->desc->in);
   VAR_11->apply = VAR_9[VAR_13].apply;
   VAR_11->volume_class = VAR_8;
   VAR_11->state = VAR_2;

   VAR_10->data = VAR_11;
   VAR_12 = FUNC_3(VAR_11->channels);
   if (VAR_12 == ((void*)0)) {
    FUNC_5(VAR_11, VAR_4);
    return (VAR_0);
   }

   VAR_14 = FUNC_4(VAR_10, VAR_12);
   if (VAR_14 != 0)
    FUNC_5(VAR_11, VAR_4);

   return (VAR_14);
  }
 }

 return (VAR_0);
}
