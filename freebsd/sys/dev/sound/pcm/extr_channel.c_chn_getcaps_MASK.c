
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmchan_caps {int dummy; } ;
struct pcm_channel {int devinfo; int methods; } ;


 struct pcmchan_caps* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct pcm_channel*) ;

struct pcmchan_caps *
FUNC_2(struct pcm_channel *VAR_0)
{
 FUNC_1(VAR_0);
 return FUNC_0(VAR_0->methods, VAR_0->devinfo);
}
