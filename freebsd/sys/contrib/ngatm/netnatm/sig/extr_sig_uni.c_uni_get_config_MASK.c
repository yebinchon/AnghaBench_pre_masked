
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uni_config {int timer399; int timer398; int timer397; int init322; int timer322; int timer317; int init316; int timer316; int timer313; int timer310; int timer309; int init308; int timer308; int init303; int timer303; int timer301; int popt; int option; int proto; } ;
struct TYPE_2__ {scalar_t__ cause_hard; scalar_t__ bearer_hard; scalar_t__ git_hard; scalar_t__ q2932; } ;
struct uni {int timer399; int timer398; int timer397; int init322; int timer322; int timer317; int init316; int timer316; int timer313; int timer310; int timer309; int init308; int timer308; int init303; int timer303; int timer301; scalar_t__ sb_tb; TYPE_1__ cx; int proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_0(const struct uni *VAR_5, struct uni_config *VAR_6)
{
 VAR_6->proto = VAR_5->proto;

 VAR_6->popt = 0;
 if (VAR_5->cx.q2932)
  VAR_6->popt |= VAR_3;

 VAR_6->option = 0;
 if (VAR_5->cx.git_hard)
  VAR_6->option |= VAR_2;
 if (VAR_5->cx.bearer_hard)
  VAR_6->option |= VAR_0;
 if (VAR_5->cx.cause_hard)
  VAR_6->option |= VAR_1;
 if (VAR_5->sb_tb)
  VAR_6->popt |= VAR_4;

 VAR_6->timer301 = VAR_5->timer301;
 VAR_6->timer303 = VAR_5->timer303;
 VAR_6->init303 = VAR_5->init303;
 VAR_6->timer308 = VAR_5->timer308;
 VAR_6->init308 = VAR_5->init308;
 VAR_6->timer309 = VAR_5->timer309;
 VAR_6->timer310 = VAR_5->timer310;
 VAR_6->timer313 = VAR_5->timer313;
 VAR_6->timer316 = VAR_5->timer316;
 VAR_6->init316 = VAR_5->init316;
 VAR_6->timer317 = VAR_5->timer317;
 VAR_6->timer322 = VAR_5->timer322;
 VAR_6->init322 = VAR_5->init322;
 VAR_6->timer397 = VAR_5->timer397;
 VAR_6->timer398 = VAR_5->timer398;
 VAR_6->timer399 = VAR_5->timer399;
}
