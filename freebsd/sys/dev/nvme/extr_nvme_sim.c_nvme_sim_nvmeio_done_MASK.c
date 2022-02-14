
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int status; } ;
struct TYPE_3__ {int cpl; } ;
union ccb {TYPE_2__ ccb_h; TYPE_1__ nvmeio; } ;
struct nvme_completion {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct nvme_completion const*,int) ;
 scalar_t__ FUNC_1 (struct nvme_completion const*) ;
 int FUNC_2 (union ccb*) ;
 int FUNC_3 (union ccb*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_3, const struct nvme_completion *VAR_4)
{
 union ccb *VAR_5 = (union ccb *)VAR_3;





 FUNC_0(&VAR_5->nvmeio.cpl, VAR_4, sizeof(*VAR_4));
 VAR_5->ccb_h.status &= ~VAR_2;
 if (FUNC_1(VAR_4)) {
  VAR_5->ccb_h.status = VAR_1;
  FUNC_2(VAR_5);
 } else {
  VAR_5->ccb_h.status = VAR_0;
  FUNC_3(VAR_5);
 }
}
