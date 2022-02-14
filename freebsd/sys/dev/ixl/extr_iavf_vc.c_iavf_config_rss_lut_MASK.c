
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct virtchnl_rss_lut {int lut_entries; int* lut; int vsi_id; } ;
struct TYPE_4__ {int num_rx_queues; } ;
struct iavf_sc {TYPE_2__ vsi; TYPE_1__* vsi_res; int dev; } ;
struct TYPE_3__ {int vsi_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct virtchnl_rss_lut*,int ) ;
 int FUNC_2 (struct iavf_sc*,int ,int *,int) ;
 struct virtchnl_rss_lut* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int) ;

int
FUNC_5(struct iavf_sc *VAR_7)
{
 struct virtchnl_rss_lut *VAR_8;
 int VAR_9;
 u16 VAR_10;
 u32 VAR_11;
 int VAR_12, VAR_13;

 VAR_10 = VAR_2;
 VAR_9 = sizeof(struct virtchnl_rss_lut) + (VAR_10 * sizeof(u8)) - 1;
 VAR_8 = FUNC_3(VAR_9, VAR_3, VAR_4 | VAR_5);
 if (VAR_8 == ((void*)0)) {
  FUNC_0(VAR_7->dev, "Unable to allocate msg memory for RSS lut msg.\n");
  return (VAR_0);
 }

 VAR_8->vsi_id = VAR_7->vsi_res->vsi_id;

 VAR_8->lut_entries = VAR_10;


 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  VAR_13 = VAR_12 % VAR_7->vsi.num_rx_queues;

  VAR_11 = VAR_13 & VAR_1;
  VAR_8->lut[VAR_12] = VAR_11;
 }

 FUNC_2(VAR_7, VAR_6,
     (u8 *)VAR_8, VAR_9);

 FUNC_1(VAR_8, VAR_3);
 return (0);
}
