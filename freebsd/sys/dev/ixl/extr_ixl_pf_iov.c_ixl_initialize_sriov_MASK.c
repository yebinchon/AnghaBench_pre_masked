
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ num_msix_vectors_vf; } ;
struct i40e_hw {TYPE_1__ func_caps; } ;
struct ixl_pf {struct i40e_hw hw; int dev; } ;
typedef int nvlist_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int *,char*,int ,int ) ;
 int FUNC_5 (int *,char*,int ,int ) ;
 int FUNC_6 (int *,char*,int ,int *) ;
 int * FUNC_7 () ;

void
FUNC_8(struct ixl_pf *VAR_4)
{
 device_t VAR_5 = VAR_4->dev;
 struct i40e_hw *VAR_6 = &VAR_4->hw;
 nvlist_t *VAR_7, *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_7();
 VAR_8 = FUNC_7();
 FUNC_6(VAR_8, "mac-addr", 0, ((void*)0));
 FUNC_4(VAR_8, "mac-anti-spoof",
     VAR_2, VAR_3);
 FUNC_4(VAR_8, "allow-set-mac",
     VAR_2, VAR_0);
 FUNC_4(VAR_8, "allow-promisc",
     VAR_2, VAR_0);
 FUNC_5(VAR_8, "num-queues",
     VAR_2,
     FUNC_1(1, FUNC_2(VAR_6->func_caps.num_msix_vectors_vf - 1, VAR_1)));

 VAR_9 = FUNC_3(VAR_5, VAR_7, VAR_8);
 if (VAR_9 != 0) {
  FUNC_0(VAR_5,
      "Failed to initialize SR-IOV (error=%d)\n",
      VAR_9);
 } else
  FUNC_0(VAR_5, "SR-IOV ready\n");
}
