
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int si_note; } ;
struct TYPE_4__ {int si_note; } ;
struct mqueue {TYPE_1__ mq_wsel; TYPE_2__ mq_rsel; } ;
struct knote {scalar_t__ kn_filter; int * kn_fop; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct mqueue* FUNC_0 (struct file*) ;
 int FUNC_1 (int *,struct knote*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_2(struct file *VAR_5, struct knote *VAR_6)
{
 struct mqueue *VAR_7 = FUNC_0(VAR_5);
 int VAR_8 = 0;

 if (VAR_6->kn_filter == VAR_1) {
  VAR_6->kn_fop = &VAR_3;
  FUNC_1(&VAR_7->mq_rsel.si_note, VAR_6, 0);
 } else if (VAR_6->kn_filter == VAR_2) {
  VAR_6->kn_fop = &VAR_4;
  FUNC_1(&VAR_7->mq_wsel.si_note, VAR_6, 0);
 } else
  VAR_8 = VAR_0;
 return (VAR_8);
}
