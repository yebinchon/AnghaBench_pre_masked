
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vqs ;
typedef int u8 ;
struct virtchnl_queue_select {int vsi_id; } ;
struct iavf_sc {int dev; TYPE_1__* vsi_res; } ;
struct TYPE_2__ {int vsi_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct iavf_sc*,int ,int *,int) ;

int
FUNC_2(struct iavf_sc *VAR_1)
{
 struct virtchnl_queue_select VAR_2;
 int VAR_3 = 0;

 VAR_2.vsi_id = VAR_1->vsi_res->vsi_id;

 VAR_3 = FUNC_1(VAR_1, VAR_0,
     (u8 *)&VAR_2, sizeof(VAR_2));
 if (VAR_3)
  FUNC_0(VAR_1->dev, "Error sending stats request to PF: %d\n", VAR_3);

 return (0);
}
