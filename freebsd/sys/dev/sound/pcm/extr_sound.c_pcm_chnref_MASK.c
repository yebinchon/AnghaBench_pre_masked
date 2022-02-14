
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm_channel {int refcount; int parentsnddev; } ;


 int FUNC_0 (struct pcm_channel*) ;
 int FUNC_1 (int ) ;

int
FUNC_2(struct pcm_channel *VAR_0, int VAR_1)
{
 FUNC_1(VAR_0->parentsnddev);
 FUNC_0(VAR_0);

 VAR_0->refcount += VAR_1;

 return (VAR_0->refcount);
}
