
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ cl_cfmin; } ;
struct hfsc_sched {int watchdog; TYPE_1__ root; } ;
struct hfsc_class {scalar_t__ cl_e; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (int) ;
 struct hfsc_class* FUNC_1 (struct hfsc_sched*) ;
 struct hfsc_sched* FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct Qdisc *VAR_0)
{
 struct hfsc_sched *VAR_1 = FUNC_2(VAR_0);
 struct hfsc_class *VAR_2;
 u64 VAR_3 = 0;

 if ((VAR_2 = FUNC_1(VAR_1)) != ((void*)0))
  VAR_3 = VAR_2->cl_e;
 if (VAR_1->root.cl_cfmin != 0) {
  if (VAR_3 == 0 || VAR_3 > VAR_1->root.cl_cfmin)
   VAR_3 = VAR_1->root.cl_cfmin;
 }
 FUNC_0(VAR_3 == 0);
 FUNC_3(&VAR_1->watchdog, VAR_3);
}
