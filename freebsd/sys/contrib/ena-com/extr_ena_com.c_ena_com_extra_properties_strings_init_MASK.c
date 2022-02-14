
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ena_extra_properties_strings {int size; int dma_addr; int virt_addr; int dma_handle; } ;
struct ena_com_dev {int dmadev; struct ena_extra_properties_strings extra_properties_strings; } ;
struct TYPE_3__ {int count; } ;
struct TYPE_4__ {TYPE_1__ extra_properties_strings; } ;
struct ena_admin_get_feat_resp {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ,int ,int ) ;
 int FUNC_1 (struct ena_com_dev*) ;
 scalar_t__ FUNC_2 (struct ena_com_dev*,struct ena_admin_get_feat_resp*,int ,int ,int,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct ena_com_dev *VAR_3)
{
 struct ena_admin_get_feat_resp VAR_4;
 struct ena_extra_properties_strings *VAR_5 =
   &VAR_3->extra_properties_strings;
 u32 VAR_6;
 VAR_5->size = VAR_0 *
  VAR_2;

 FUNC_0(VAR_3->dmadev,
          VAR_5->size,
          VAR_5->virt_addr,
          VAR_5->dma_addr,
          VAR_5->dma_handle);
 if (FUNC_5(!VAR_5->virt_addr)) {
  FUNC_4("Failed to allocate extra properties strings\n");
  return 0;
 }

 VAR_6 = FUNC_2(VAR_3, &VAR_4,
        VAR_1,
        VAR_5->dma_addr,
        VAR_5->size, 0);
 if (VAR_6) {
  FUNC_3("Failed to get extra properties strings\n");
  goto err;
 }

 return VAR_4.u.extra_properties_strings.count;
err:
 FUNC_1(VAR_3);
 return 0;
}
