
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct bnxt_nvram_info {int available_size; int nvm_ctx; int reserved_size; int size; int sector_size; int device_id; int mfg_id; struct sysctl_oid* nvm_oid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_1 (int *,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_2 (struct sysctl_oid*) ;

int
FUNC_3(struct bnxt_nvram_info *VAR_3)
{
 struct sysctl_oid *VAR_4 = VAR_3->nvm_oid;

 if (!VAR_4)
  return VAR_1;

 FUNC_0(&VAR_3->nvm_ctx, FUNC_2(VAR_4), VAR_2,
     "mfg_id", VAR_0, &VAR_3->mfg_id, 0, "manufacturer id");
 FUNC_0(&VAR_3->nvm_ctx, FUNC_2(VAR_4), VAR_2,
     "device_id", VAR_0, &VAR_3->device_id, 0, "device id");
 FUNC_1(&VAR_3->nvm_ctx, FUNC_2(VAR_4), VAR_2,
     "sector_size", VAR_0, &VAR_3->sector_size, 0, "sector size");
 FUNC_1(&VAR_3->nvm_ctx, FUNC_2(VAR_4), VAR_2,
     "size", VAR_0, &VAR_3->size, 0, "nvram total size");
 FUNC_1(&VAR_3->nvm_ctx, FUNC_2(VAR_4), VAR_2,
     "reserved_size", VAR_0, &VAR_3->reserved_size, 0,
     "total reserved space");
 FUNC_1(&VAR_3->nvm_ctx, FUNC_2(VAR_4), VAR_2,
     "available_size", VAR_0, &VAR_3->available_size, 0,
     "total available space");

 return 0;
}
