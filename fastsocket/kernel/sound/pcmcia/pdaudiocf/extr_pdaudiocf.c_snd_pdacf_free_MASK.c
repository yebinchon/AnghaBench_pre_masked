
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pdacf {size_t index; int * card; struct pcmcia_device* p_dev; } ;
struct pcmcia_device {int dummy; } ;


 int ** VAR_0 ;
 int FUNC_0 (struct snd_pdacf*) ;
 int FUNC_1 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_2(struct snd_pdacf *VAR_1)
{
 struct pcmcia_device *VAR_2 = VAR_1->p_dev;

 FUNC_1(VAR_2);

 VAR_0[VAR_1->index] = ((void*)0);
 VAR_1->card = ((void*)0);

 FUNC_0(VAR_1);
 return 0;
}
