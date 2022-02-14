
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sb_chinfo {scalar_t__ dir; TYPE_1__* parent; } ;
struct pcmchan_caps {int dummy; } ;
typedef int kobj_t ;
struct TYPE_2__ {int bd_id; } ;


 scalar_t__ VAR_0 ;
 struct pcmchan_caps VAR_1 ;
 struct pcmchan_caps VAR_2 ;
 struct pcmchan_caps VAR_3 ;
 struct pcmchan_caps VAR_4 ;
 struct pcmchan_caps VAR_5 ;
 struct pcmchan_caps VAR_6 ;

__attribute__((used)) static struct pcmchan_caps *
FUNC_0(kobj_t VAR_7, void *VAR_8)
{
 struct sb_chinfo *VAR_9 = VAR_8;
 int VAR_10 = (VAR_9->dir == VAR_0)? 1 : 0;

 if (VAR_9->parent->bd_id == 0x200)
  return VAR_10? &VAR_1 : &VAR_2;
 if (VAR_9->parent->bd_id < 0x300)
  return VAR_10? &VAR_3 : &VAR_4;
 return VAR_10? &VAR_5 : &VAR_6;
}
