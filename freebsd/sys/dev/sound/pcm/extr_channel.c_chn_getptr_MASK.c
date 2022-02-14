
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm_channel {int bufhard; int devinfo; int methods; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct pcm_channel*) ;
 scalar_t__ FUNC_2 (struct pcm_channel*) ;
 int FUNC_3 (int ) ;

int
FUNC_4(struct pcm_channel *VAR_0)
{
 int VAR_1;

 FUNC_1(VAR_0);
 VAR_1 = (FUNC_2(VAR_0)) ? FUNC_0(VAR_0->methods, VAR_0->devinfo) : 0;
 return (VAR_1 - (VAR_1 % FUNC_3(VAR_0->bufhard)));
}
