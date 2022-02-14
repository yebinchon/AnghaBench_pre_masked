
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ena_admin_host_info* host_info; } ;
struct ena_com_dev {TYPE_1__ host_attr; } ;
struct ena_admin_host_info {uintptr_t bdf; int kernel_ver; int driver_version; int num_cpus; int os_dist_str; scalar_t__ os_dist; int kernel_ver_str; int os_type; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ena_com_dev*) ;
 int FUNC_1 (struct ena_com_dev*) ;
 int FUNC_2 (struct ena_com_dev*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (int ,int ,uintptr_t*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,int ,int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8(struct ena_com_dev *VAR_13, device_t VAR_14)
{
 struct ena_admin_host_info *VAR_15;
 uintptr_t VAR_16;
 int VAR_17;


 VAR_17 = FUNC_0(VAR_13);
 if (FUNC_7(VAR_17 != 0)) {
  FUNC_3(VAR_6, "Cannot allocate host info\n");
  return;
 }

 VAR_15 = VAR_13->host_attr.host_info;

 if (FUNC_4(VAR_14, VAR_9, &VAR_16) == 0)
  VAR_15->bdf = VAR_16;
 VAR_15->os_type = VAR_5;
 VAR_15->kernel_ver = VAR_11;

 FUNC_5(VAR_15->kernel_ver_str, "%d", VAR_11);
 VAR_15->os_dist = 0;
 FUNC_6(VAR_15->os_dist_str, VAR_12,
     sizeof(VAR_15->os_dist_str) - 1);

 VAR_15->driver_version =
  (VAR_0) |
  (VAR_1 << VAR_3) |
  (VAR_2 << VAR_4);
 VAR_15->num_cpus = VAR_10;

 VAR_17 = FUNC_2(VAR_13);
 if (FUNC_7(VAR_17 != 0)) {
  if (VAR_17 == VAR_8)
   FUNC_3(VAR_7, "Cannot set host attributes\n");
  else
   FUNC_3(VAR_6, "Cannot set host attributes\n");

  goto err;
 }

 return;

err:
 FUNC_1(VAR_13);
}
