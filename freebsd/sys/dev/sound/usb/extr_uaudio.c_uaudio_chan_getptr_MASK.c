
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uaudio_chan {int cur; int start; } ;



int
FUNC_0(struct uaudio_chan *VAR_0)
{
 return (VAR_0->cur - VAR_0->start);
}
