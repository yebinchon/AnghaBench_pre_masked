
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpo_data {int vpo_isplus; int vpo_io; int vpo_dev; } ;
typedef int device_t ;


 struct vpo_data* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_0)
{
 device_t VAR_1 = FUNC_1(VAR_0);
 struct vpo_data *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(VAR_0);
 VAR_2->vpo_dev = VAR_0;



 FUNC_4(VAR_1);
 if ((VAR_3 = FUNC_6(VAR_0, &VAR_2->vpo_io)) == 0) {
  VAR_2->vpo_isplus = 0;
  FUNC_2(VAR_0,
    "Iomega VPI0 Parallel to SCSI interface");
 } else if ((VAR_3 = FUNC_3(VAR_0, &VAR_2->vpo_io)) == 0) {
  VAR_2->vpo_isplus = 1;
  FUNC_2(VAR_0,
    "Iomega Matchmaker Parallel to SCSI interface");
 } else {
  FUNC_5(VAR_1);
  return (VAR_3);
 }
 FUNC_5(VAR_1);

 return (0);
}
