
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_active; int num_allocated; } ;
struct ixl_vf {int vf_num; TYPE_1__ qtag; } ;
struct ixl_pf {int qmgr; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (struct ixl_pf*,char*,int,...) ;
 int FUNC_2 (int *,int,TYPE_1__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct ixl_pf *VAR_2, struct ixl_vf *VAR_3, int VAR_4)
{
 device_t VAR_5 = VAR_2->dev;
 int VAR_6;


 if (VAR_4 < 1 || VAR_4 > 16)
  FUNC_0(VAR_5, "Invalid num-queues (%d) for VF %d\n",
      VAR_4, VAR_3->vf_num);
 if (VAR_4 < 1) {
  FUNC_0(VAR_5, "Setting VF %d num-queues to 1\n", VAR_3->vf_num);
  VAR_4 = 1;
 } else if (VAR_4 > VAR_1) {
  FUNC_0(VAR_5, "Setting VF %d num-queues to %d\n", VAR_3->vf_num, VAR_1);
  VAR_4 = VAR_1;
 }
 VAR_6 = FUNC_2(&VAR_2->qmgr, VAR_4, &VAR_3->qtag);
 if (VAR_6) {
  FUNC_0(VAR_5, "Error allocating %d queues for VF %d's VSI\n",
      VAR_4, VAR_3->vf_num);
  return (VAR_0);
 }

 FUNC_1(VAR_2, "VF %d: %d allocated, %d active\n",
     VAR_3->vf_num, VAR_3->qtag.num_allocated, VAR_3->qtag.num_active);
 FUNC_1(VAR_2, "Unallocated total: %d\n", FUNC_3(&VAR_2->qmgr));

 return (0);
}
