
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct virtchnl_promisc_info {int flags; int vsi_id; } ;
struct iavf_sc {int promisc_flags; TYPE_1__* vsi_res; } ;
typedef int pinfo ;
struct TYPE_2__ {int vsi_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct iavf_sc*,int ,int *,int) ;

int
FUNC_1(struct iavf_sc *VAR_1)
{
 struct virtchnl_promisc_info VAR_2;

 VAR_2.vsi_id = VAR_1->vsi_res->vsi_id;
 VAR_2.flags = VAR_1->promisc_flags;

 FUNC_0(VAR_1, VAR_0,
     (u8 *)&VAR_2, sizeof(VAR_2));
 return (0);
}
