
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmchan_caps {int dummy; } ;
struct hdaa_chan {struct pcmchan_caps caps; } ;
typedef int kobj_t ;



__attribute__((used)) static struct pcmchan_caps *
FUNC_0(kobj_t VAR_0, void *VAR_1)
{
 return (&((struct hdaa_chan *)VAR_1)->caps);
}
