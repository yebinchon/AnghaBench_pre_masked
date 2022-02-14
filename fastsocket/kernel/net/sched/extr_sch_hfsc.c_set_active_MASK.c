
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hfsc_class {int cl_flags; TYPE_1__* sched; int dlist; } ;
struct TYPE_2__ {int droplist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfsc_class*,unsigned int) ;
 int FUNC_1 (struct hfsc_class*,unsigned int) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void
FUNC_3(struct hfsc_class *VAR_2, unsigned int VAR_3)
{
 if (VAR_2->cl_flags & VAR_1)
  FUNC_0(VAR_2, VAR_3);
 if (VAR_2->cl_flags & VAR_0)
  FUNC_1(VAR_2, VAR_3);

 FUNC_2(&VAR_2->dlist, &VAR_2->sched->droplist);
}
