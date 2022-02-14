
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct knote {int kn_status; TYPE_1__* kn_fop; } ;
struct TYPE_2__ {int (* f_detach ) (struct knote*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct knote*,struct thread*) ;
 int FUNC_1 (struct knote*) ;

__attribute__((used)) static void
FUNC_2(struct knote *VAR_1, struct thread *VAR_2)
{

 if ((VAR_1->kn_status & VAR_0) == 0)
  VAR_1->kn_fop->f_detach(VAR_1);
 FUNC_0(VAR_1, VAR_2);
}
