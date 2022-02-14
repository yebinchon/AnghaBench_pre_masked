
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbp_ocb {int * ccb; scalar_t__ flags; } ;
struct sbp_dev {int flags; int freeze; int path; int free_ocbs; TYPE_1__* target; } ;
struct TYPE_2__ {int sbp; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct sbp_ocb*,struct sbp_ocb*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_3(struct sbp_dev *VAR_2, struct sbp_ocb *VAR_3)
{
 VAR_3->flags = 0;
 VAR_3->ccb = ((void*)0);

 FUNC_0(VAR_2->target->sbp);
 FUNC_1(&VAR_2->free_ocbs, VAR_3, VAR_3);
 if ((VAR_2->flags & VAR_0) != 0) {
  int VAR_4;

  VAR_2->flags &= ~VAR_0;
  VAR_4 = VAR_2->freeze;
  VAR_2->freeze = 0;
  FUNC_2(VAR_2->path, VAR_4, VAR_1);
 }
}
