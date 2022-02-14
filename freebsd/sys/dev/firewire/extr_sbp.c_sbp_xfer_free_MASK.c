
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbp_dev {TYPE_1__* target; } ;
struct fw_xfer {scalar_t__ sc; } ;
struct TYPE_2__ {int xferlist; int sbp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct fw_xfer*,int ) ;
 int FUNC_2 (struct fw_xfer*) ;
 int VAR_0 ;

__attribute__((used)) static __inline void
FUNC_3(struct fw_xfer *VAR_1)
{
 struct sbp_dev *VAR_2;

 VAR_2 = (struct sbp_dev *)VAR_1->sc;
 FUNC_2(VAR_1);
 FUNC_0(VAR_2->target->sbp);
 FUNC_1(&VAR_2->target->xferlist, VAR_1, VAR_0);
}
