
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct mrsas_mpt_cmd {scalar_t__ ccb_ptr; } ;
struct cam_sim {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cam_sim*,int) ;

__attribute__((used)) static void
FUNC_1(struct mrsas_mpt_cmd *VAR_2, struct cam_sim *VAR_3)
{
 union ccb *VAR_4 = (union ccb *)(VAR_2->ccb_ptr);

 FUNC_0(VAR_3, 1);
 VAR_4->ccb_h.status |= VAR_0;
 VAR_4->ccb_h.status |= VAR_1;
}
