
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct pcm_feeder {struct pcm_feeder* source; TYPE_1__* desc; } ;
struct pcm_channel {struct pcm_feeder* feeder; } ;
struct TYPE_2__ {scalar_t__ type; } ;



struct pcm_feeder *
FUNC_0(struct pcm_channel *VAR_0, u_int32_t VAR_1)
{
 struct pcm_feeder *VAR_2;

 VAR_2 = VAR_0->feeder;
 while (VAR_2 != ((void*)0)) {
  if (VAR_2->desc->type == VAR_1)
   return VAR_2;
  VAR_2 = VAR_2->source;
 }

 return ((void*)0);
}
