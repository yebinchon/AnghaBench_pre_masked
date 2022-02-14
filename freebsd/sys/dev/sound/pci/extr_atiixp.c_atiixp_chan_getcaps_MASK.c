
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmchan_caps {int dummy; } ;
struct atiixp_chinfo {scalar_t__ caps_32bit; } ;
typedef int kobj_t ;


 struct pcmchan_caps VAR_0 ;
 struct pcmchan_caps VAR_1 ;

__attribute__((used)) static struct pcmchan_caps *
FUNC_0(kobj_t VAR_2, void *VAR_3)
{
 struct atiixp_chinfo *VAR_4 = VAR_3;

 if (VAR_4->caps_32bit)
  return (&VAR_1);
 return (&VAR_0);
}
