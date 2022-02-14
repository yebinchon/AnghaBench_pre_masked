
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_info {scalar_t__ dxs_src; } ;
struct via_chinfo {struct via_info* parent; } ;
struct pcmchan_caps {int dummy; } ;
typedef int kobj_t ;


 struct pcmchan_caps VAR_0 ;
 struct pcmchan_caps VAR_1 ;

__attribute__((used)) static struct pcmchan_caps *
FUNC_0(kobj_t VAR_2, void *VAR_3)
{
 struct via_chinfo *VAR_4 = VAR_3;
 struct via_info *VAR_5 = VAR_4->parent;







 if (VAR_5->dxs_src)
  return (&VAR_1);
 return (&VAR_0);
}
