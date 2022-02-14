
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmchan_caps {int dummy; } ;
struct mss_chinfo {TYPE_1__* parent; } ;
typedef int kobj_t ;
struct TYPE_2__ {int bd_id; } ;





 struct pcmchan_caps VAR_0 ;
 struct pcmchan_caps VAR_1 ;
 struct pcmchan_caps VAR_2 ;

__attribute__((used)) static struct pcmchan_caps *
FUNC_0(kobj_t VAR_3, void *VAR_4)
{
 struct mss_chinfo *VAR_5 = VAR_4;

 switch(VAR_5->parent->bd_id) {
 case 128:
  return &VAR_2;
  break;

 case 129:
 case 130:
  return &VAR_0;
  break;

 default:
  return &VAR_1;
  break;
 }
}
