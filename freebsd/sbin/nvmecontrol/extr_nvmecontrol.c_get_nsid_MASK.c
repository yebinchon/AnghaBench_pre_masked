
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nvme_get_nsid {int nsid; int cdev; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int,int ,struct nvme_get_nsid*) ;
 char* FUNC_2 (int ,int) ;

void
FUNC_3(int VAR_1, char **VAR_2, uint32_t *VAR_3)
{
 struct nvme_get_nsid VAR_4;

 if (FUNC_1(VAR_1, VAR_0, &VAR_4) < 0)
  FUNC_0(1, "NVME_GET_NSID ioctl failed");
 if (VAR_2 != ((void*)0))
  *VAR_2 = FUNC_2(VAR_4.cdev, sizeof(VAR_4.cdev));
 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_4.nsid;
}
