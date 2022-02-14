
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct qlnxr_pbl_info {int num_pbls; int pbl_size; } ;
struct qlnxr_pbl {int pa; void* va; } ;
struct qlnxr_dev {TYPE_1__* ha; } ;
struct TYPE_4__ {int cdev; } ;
typedef TYPE_1__ qlnx_host_t ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 struct qlnxr_pbl* FUNC_2 (int,int ) ;
 int FUNC_3 (void*,int ,int ) ;
 void* FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (struct qlnxr_dev*,struct qlnxr_pbl_info*,struct qlnxr_pbl*) ;

__attribute__((used)) static struct qlnxr_pbl *
FUNC_6(struct qlnxr_dev *VAR_1,
 struct qlnxr_pbl_info *VAR_2, gfp_t VAR_3)
{
 void *VAR_4;
 dma_addr_t VAR_5;
 dma_addr_t *VAR_6;
 struct qlnxr_pbl *VAR_7;
 int VAR_8, VAR_9 = 0;
 qlnx_host_t *VAR_10;

 VAR_10 = VAR_1->ha;

 FUNC_1(VAR_10, "enter\n");

 VAR_7 = FUNC_2(sizeof(*VAR_7) * VAR_2->num_pbls, VAR_3);

 if (!VAR_7) {
  FUNC_1(VAR_10, "pbl_table = NULL\n");
  return ((void*)0);
 }

 for (VAR_8 = 0; VAR_8 < VAR_2->num_pbls; VAR_8++) {
  VAR_4 = FUNC_4(&VAR_1->ha->cdev, &VAR_5, VAR_2->pbl_size);
  if (!VAR_4) {
   FUNC_0(VAR_10, "Failed to allocate pbl#%d\n", VAR_8);
   VAR_9 = -VAR_0;
   goto err;
  }
  FUNC_3(VAR_4, 0, VAR_2->pbl_size);
  VAR_7[VAR_8].va = VAR_4;
  VAR_7[VAR_8].pa = VAR_5;
 }




 VAR_6 = (dma_addr_t *)VAR_7[0].va;
 for (VAR_8 = 0; VAR_8 < VAR_2->num_pbls - 1; VAR_8++)
  VAR_6[VAR_8] = VAR_7[VAR_8 + 1].pa;

 FUNC_1(VAR_10, "exit\n");
 return VAR_7;

err:
 FUNC_5(VAR_1, VAR_2, VAR_7);

 FUNC_1(VAR_10, "exit with error\n");
 return ((void*)0);
}
