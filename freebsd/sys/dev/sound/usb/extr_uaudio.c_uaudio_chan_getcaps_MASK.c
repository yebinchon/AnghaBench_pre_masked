
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmchan_caps {int dummy; } ;
struct uaudio_chan {struct pcmchan_caps pcm_cap; } ;



struct pcmchan_caps *
FUNC_0(struct uaudio_chan *VAR_0)
{
 return (&VAR_0->pcm_cap);
}
