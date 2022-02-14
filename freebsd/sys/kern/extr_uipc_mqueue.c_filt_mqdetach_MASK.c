
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int si_note; } ;
struct TYPE_3__ {int si_note; } ;
struct mqueue {TYPE_2__ mq_wsel; TYPE_1__ mq_rsel; } ;
struct knote {scalar_t__ kn_filter; int kn_fp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct mqueue* FUNC_0 (int ) ;
 int FUNC_1 (int *,struct knote*,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(struct knote *VAR_2)
{
 struct mqueue *VAR_3 = FUNC_0(VAR_2->kn_fp);

 if (VAR_2->kn_filter == VAR_0)
  FUNC_1(&VAR_3->mq_rsel.si_note, VAR_2, 0);
 else if (VAR_2->kn_filter == VAR_1)
  FUNC_1(&VAR_3->mq_wsel.si_note, VAR_2, 0);
 else
  FUNC_2("filt_mqdetach");
}
