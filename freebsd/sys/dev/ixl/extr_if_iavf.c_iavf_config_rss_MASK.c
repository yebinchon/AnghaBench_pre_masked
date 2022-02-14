
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iavf_sc {int dev; TYPE_1__* vf_res; } ;
struct TYPE_2__ {int vf_cap_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct iavf_sc*) ;
 int FUNC_2 (struct iavf_sc*) ;
 int FUNC_3 (struct iavf_sc*,char*) ;

__attribute__((used)) static void
FUNC_4(struct iavf_sc *VAR_2)
{
 if (VAR_2->vf_res->vf_cap_flags & VAR_1) {
  FUNC_3(VAR_2, "Setting up RSS using VF registers...");
  FUNC_2(VAR_2);
 } else if (VAR_2->vf_res->vf_cap_flags & VAR_0) {
  FUNC_3(VAR_2, "Setting up RSS using messages to PF...");
  FUNC_1(VAR_2);
 } else
  FUNC_0(VAR_2->dev, "VF does not support RSS capability sent by PF.\n");
}
