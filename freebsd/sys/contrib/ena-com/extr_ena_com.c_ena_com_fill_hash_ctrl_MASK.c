
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ena_rss {struct ena_admin_feature_rss_hash_control* hash_ctrl; } ;
struct ena_com_dev {struct ena_rss rss; } ;
struct ena_admin_feature_rss_hash_control {TYPE_2__* selected_fields; TYPE_1__* supported_fields; } ;
typedef enum ena_admin_flow_hash_proto { ____Placeholder_ena_admin_flow_hash_proto } ena_admin_flow_hash_proto ;
struct TYPE_4__ {int fields; } ;
struct TYPE_3__ {int fields; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ena_com_dev*,int,int *) ;
 int FUNC_1 (struct ena_com_dev*) ;
 int FUNC_2 (char*,int,...) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct ena_com_dev *VAR_2,
      enum ena_admin_flow_hash_proto VAR_3,
      u16 VAR_4)
{
 struct ena_rss *VAR_5 = &VAR_2->rss;
 struct ena_admin_feature_rss_hash_control *VAR_6 = VAR_5->hash_ctrl;
 u16 VAR_7;
 int VAR_8;

 if (VAR_3 >= VAR_0) {
  FUNC_2("Invalid proto num (%u)\n", VAR_3);
  return VAR_1;
 }


 VAR_8 = FUNC_0(VAR_2, VAR_3, ((void*)0));
 if (FUNC_3(VAR_8))
  return VAR_8;


 VAR_7 = VAR_6->supported_fields[VAR_3].fields;
 if ((VAR_4 & VAR_7) != VAR_4) {
  FUNC_2("proto %d doesn't support the required fields %x. supports only: %x\n",
       VAR_3, VAR_4, VAR_7);
 }

 VAR_6->selected_fields[VAR_3].fields = VAR_4;

 VAR_8 = FUNC_1(VAR_2);


 if (FUNC_3(VAR_8))
  FUNC_0(VAR_2, 0, ((void*)0));

 return 0;
}
