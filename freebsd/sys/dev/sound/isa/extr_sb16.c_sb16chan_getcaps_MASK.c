
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sb_info {scalar_t__ prio; scalar_t__ prio16; } ;
struct sb_chinfo {scalar_t__ dir; struct sb_info* parent; } ;
struct pcmchan_caps {int dummy; } ;
typedef int kobj_t ;


 struct pcmchan_caps VAR_0 ;
 struct pcmchan_caps VAR_1 ;
 struct pcmchan_caps VAR_2 ;

__attribute__((used)) static struct pcmchan_caps *
FUNC_0(kobj_t VAR_3, void *VAR_4)
{
 struct sb_chinfo *VAR_5 = VAR_4;
 struct sb_info *VAR_6 = VAR_5->parent;

 if ((VAR_6->prio == 0) || (VAR_6->prio == VAR_5->dir))
  return &VAR_2;
 else
  return VAR_6->prio16? &VAR_1 : &VAR_0;
}
