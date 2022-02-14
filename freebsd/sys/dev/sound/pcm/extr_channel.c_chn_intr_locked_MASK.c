
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm_channel {scalar_t__ direction; int interrupts; } ;


 int FUNC_0 (struct pcm_channel*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct pcm_channel*) ;
 int FUNC_2 (struct pcm_channel*) ;

void
FUNC_3(struct pcm_channel *VAR_1)
{

 FUNC_0(VAR_1);

 VAR_1->interrupts++;

 if (VAR_1->direction == VAR_0)
  FUNC_2(VAR_1);
 else
  FUNC_1(VAR_1);
}
