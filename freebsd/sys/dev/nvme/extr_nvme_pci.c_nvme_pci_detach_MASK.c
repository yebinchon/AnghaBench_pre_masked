
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_controller {scalar_t__ msix_enabled; } ;
typedef int device_t ;


 struct nvme_controller* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0)
{
 struct nvme_controller*VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_1->msix_enabled)
  FUNC_3(VAR_0);
 FUNC_2(VAR_0);
 return (VAR_2);
}
