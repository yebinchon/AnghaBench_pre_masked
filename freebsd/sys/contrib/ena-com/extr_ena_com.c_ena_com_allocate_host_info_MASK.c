
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ena_host_attribute {TYPE_1__* host_info; int host_info_dma_handle; int host_info_dma_addr; } ;
struct ena_com_dev {int dmadev; struct ena_host_attribute host_attr; } ;
struct TYPE_2__ {int ena_spec_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,TYPE_1__*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2(struct ena_com_dev *VAR_5)
{
 struct ena_host_attribute *VAR_6 = &VAR_5->host_attr;

 FUNC_0(VAR_5->dmadev,
          VAR_4,
          VAR_6->host_info,
          VAR_6->host_info_dma_addr,
          VAR_6->host_info_dma_handle);
 if (FUNC_1(!VAR_6->host_info))
  return VAR_2;

 VAR_6->host_info->ena_spec_version = ((VAR_0 <<
  VAR_3) |
  (VAR_1));

 return 0;
}
