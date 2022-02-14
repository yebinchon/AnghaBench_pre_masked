
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {scalar_t__* run; int lock; struct pcmchan_caps* caps; int dev; } ;
struct sc_chinfo {scalar_t__ dir; struct sc_info* parent; } ;
struct pcmchan_caps {int dummy; } ;
typedef int kobj_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct pcmchan_caps VAR_1 ;
 struct pcmchan_caps VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct pcmchan_caps *
FUNC_3(kobj_t VAR_3, void *VAR_4)
{
 struct sc_chinfo *VAR_5 = VAR_4;
 struct sc_info *VAR_6 = VAR_5->parent;
 struct pcmchan_caps *VAR_7;




 FUNC_1(VAR_6->lock);
 if (VAR_5->dir == VAR_0) {
  if (VAR_6->run[0] == 0)
   VAR_7 = &VAR_1;
  else
   VAR_7 = &VAR_6->caps[0];
 }
 else {
  if (VAR_6->run[1] == 0)
   VAR_7 = &VAR_2;
  else
   VAR_7 = &VAR_6->caps[1];
 }
 FUNC_2(VAR_6->lock);

 return VAR_7;
}
