
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm_feeder {struct pcm_feeder* source; } ;
struct pcm_channel {struct pcm_feeder* feeder; } ;


 int FUNC_0 (struct pcm_feeder*) ;

int
FUNC_1(struct pcm_channel *VAR_0)
{
 struct pcm_feeder *VAR_1;

 if (VAR_0->feeder == ((void*)0))
  return -1;
 VAR_1 = VAR_0->feeder;
 VAR_0->feeder = VAR_0->feeder->source;
 FUNC_0(VAR_1);

 return 0;
}
