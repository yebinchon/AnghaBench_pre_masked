
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmchan_caps {int dummy; } ;
struct es_chinfo {struct pcmchan_caps caps; } ;
typedef int kobj_t ;



__attribute__((used)) static struct pcmchan_caps *
FUNC_0(kobj_t VAR_0, void *VAR_1)
{
 struct es_chinfo *VAR_2 = VAR_1;

 return (&VAR_2->caps);
}
