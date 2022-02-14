
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u8 ;
typedef int u32 ;
struct virtchnl_rss_key {int key_len; int vsi_id; int * key; } ;
struct iavf_sc {TYPE_1__* vsi_res; int dev; } ;
struct TYPE_2__ {int vsi_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct virtchnl_rss_key*,int ) ;
 int FUNC_3 (struct iavf_sc*,char*,int ,int) ;
 int FUNC_4 (struct iavf_sc*,int ,int *,int) ;
 int FUNC_5 (int *) ;
 struct virtchnl_rss_key* FUNC_6 (int,int ,int) ;
 int FUNC_7 (int *) ;

int
FUNC_8(struct iavf_sc *VAR_6)
{
 struct virtchnl_rss_key *VAR_7;
 int VAR_8, VAR_9;
 u8 VAR_10[VAR_1];





 FUNC_5((u32 *)VAR_10);



 VAR_9 = VAR_1;
 VAR_8 = sizeof(struct virtchnl_rss_key) + (sizeof(u8) * VAR_9) - 1;
 VAR_7 = FUNC_6(VAR_8, VAR_2, VAR_3 | VAR_4);
 if (VAR_7 == ((void*)0)) {
  FUNC_1(VAR_6->dev, "Unable to allocate msg memory for RSS key msg.\n");
  return (VAR_0);
 }

 VAR_7->vsi_id = VAR_6->vsi_res->vsi_id;
 VAR_7->key_len = VAR_9;
 FUNC_0(VAR_10, &VAR_7->key[0], VAR_9);

 FUNC_3(VAR_6, "config_rss: vsi_id %d, key_len %d\n",
     VAR_7->vsi_id, VAR_7->key_len);

 FUNC_4(VAR_6, VAR_5,
     (u8 *)VAR_7, VAR_8);

 FUNC_2(VAR_7, VAR_2);
 return (0);
}
