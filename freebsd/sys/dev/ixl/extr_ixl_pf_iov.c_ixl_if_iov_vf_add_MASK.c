
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
typedef int sysctl_name ;
struct TYPE_2__ {int ftl; struct ixl_pf* back; } ;
struct ixl_vf {size_t vf_num; int ctx; TYPE_1__ vsi; int vf_flags; int mac; } ;
struct ixl_pf {struct ixl_vf* vfs; int dev; } ;
typedef int nvlist_t ;
typedef int if_ctx_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (void const*,int ,int ) ;
 struct ixl_pf* FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*,int *,char*) ;
 int FUNC_4 (struct ixl_pf*,struct ixl_vf*) ;
 int FUNC_5 (struct ixl_pf*,struct ixl_vf*,int) ;
 int FUNC_6 (struct ixl_pf*,struct ixl_vf*) ;
 scalar_t__ FUNC_7 (int const*,char*) ;
 void* FUNC_8 (int const*,char*,size_t*) ;
 scalar_t__ FUNC_9 (int const*,char*) ;
 int FUNC_10 (int const*,char*) ;
 int FUNC_11 (char*,int,char*,size_t) ;

int
FUNC_12(if_ctx_t VAR_7, uint16_t VAR_8, const nvlist_t *VAR_9)
{
 struct ixl_pf *VAR_10 = FUNC_2(VAR_7);
 device_t VAR_11 = VAR_10->dev;
 char VAR_12[VAR_1];
 struct ixl_vf *VAR_13;
 const void *VAR_14;
 size_t VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_13 = &VAR_10->vfs[VAR_8];
 VAR_13->vf_num = VAR_8;
 VAR_13->vsi.back = VAR_10;
 VAR_13->vf_flags = VAR_2;
 FUNC_0(&VAR_13->vsi.ftl);


 VAR_17 = FUNC_10(VAR_9, "num-queues");
 VAR_16 = FUNC_5(VAR_10, VAR_13, VAR_17);
 if (VAR_16 != 0)
  goto out;

 VAR_16 = FUNC_6(VAR_10, VAR_13);
 if (VAR_16 != 0)
  goto out;

 if (FUNC_7(VAR_9, "mac-addr")) {
  VAR_14 = FUNC_8(VAR_9, "mac-addr", &VAR_15);
  FUNC_1(VAR_14, VAR_13->mac, VAR_0);

  if (FUNC_9(VAR_9, "allow-set-mac"))
   VAR_13->vf_flags |= VAR_5;
 } else




  VAR_13->vf_flags |= VAR_5;

 if (FUNC_9(VAR_9, "mac-anti-spoof"))
  VAR_13->vf_flags |= VAR_3;

 if (FUNC_9(VAR_9, "allow-promisc"))
  VAR_13->vf_flags |= VAR_4;

 VAR_13->vf_flags |= VAR_6;


 FUNC_4(VAR_10, VAR_13);
out:
 if (VAR_16 == 0) {
  FUNC_11(VAR_12, sizeof(VAR_12), "vf%d", VAR_8);
  FUNC_3(VAR_11, &VAR_13->vsi, &VAR_13->ctx, VAR_12);
 }

 return (VAR_16);
}
