
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm_feederdesc {int dummy; } ;
struct pcm_feeder {struct pcm_feeder* parent; struct pcm_feeder* source; } ;
struct pcm_channel {struct pcm_feeder* feeder; } ;
struct feeder_class {int dummy; } ;


 int VAR_0 ;
 struct pcm_feeder* FUNC_0 (struct feeder_class*,struct pcm_feederdesc*) ;

int
FUNC_1(struct pcm_channel *VAR_1, struct feeder_class *VAR_2, struct pcm_feederdesc *VAR_3)
{
 struct pcm_feeder *VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4 == ((void*)0))
  return VAR_0;

 VAR_4->source = VAR_1->feeder;

 if (VAR_1->feeder != ((void*)0))
  VAR_1->feeder->parent = VAR_4;
 VAR_1->feeder = VAR_4;

 return 0;
}
