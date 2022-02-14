
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmchan_caps {int dummy; } ;
struct a10codec_chinfo {scalar_t__ dir; } ;
typedef int kobj_t ;


 scalar_t__ VAR_0 ;
 struct pcmchan_caps VAR_1 ;
 struct pcmchan_caps VAR_2 ;

__attribute__((used)) static struct pcmchan_caps *
FUNC_0(kobj_t VAR_3, void *VAR_4)
{
 struct a10codec_chinfo *VAR_5 = VAR_4;

 if (VAR_5->dir == VAR_0) {
  return (&VAR_1);
 } else {
  return (&VAR_2);
 }
}
