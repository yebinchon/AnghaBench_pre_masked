
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wps_sec_dev_type_list_len; int wps_sec_dev_type_list; int pri_dev_type; int config_methods; int dev_capab; int device_name; } ;
struct p2p_device {TYPE_1__ info; } ;
struct p2p_client_info {int num_sec_dev_types; int sec_dev_types; int pri_dev_type; int config_methods; int dev_capab; int dev_name_len; int dev_name; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct p2p_device *VAR_0,
     struct p2p_client_info *VAR_1)
{
 FUNC_1(VAR_0->info.device_name,
    sizeof(VAR_0->info.device_name),
    VAR_1->dev_name, VAR_1->dev_name_len);
 VAR_0->info.dev_capab = VAR_1->dev_capab;
 VAR_0->info.config_methods = VAR_1->config_methods;
 FUNC_0(VAR_0->info.pri_dev_type, VAR_1->pri_dev_type, 8);
 VAR_0->info.wps_sec_dev_type_list_len = 8 * VAR_1->num_sec_dev_types;
 FUNC_0(VAR_0->info.wps_sec_dev_type_list, VAR_1->sec_dev_types,
    VAR_0->info.wps_sec_dev_type_list_len);
}
