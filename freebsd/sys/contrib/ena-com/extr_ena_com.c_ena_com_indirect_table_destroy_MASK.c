
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_rss {unsigned long long tbl_log_size; int * host_rss_ind_tbl; int * rss_ind_tbl; int rss_ind_tbl_mem_handle; int rss_ind_tbl_dma_addr; } ;
struct ena_com_dev {int dmadev; struct ena_rss rss; } ;
struct ena_admin_rss_ind_table_entry {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,size_t,int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ena_com_dev *VAR_0)
{
 struct ena_rss *VAR_1 = &VAR_0->rss;
 size_t VAR_2 = (1ULL << VAR_1->tbl_log_size) *
  sizeof(struct ena_admin_rss_ind_table_entry);

 if (VAR_1->rss_ind_tbl)
  FUNC_1(VAR_0->dmadev,
          VAR_2,
          VAR_1->rss_ind_tbl,
          VAR_1->rss_ind_tbl_dma_addr,
          VAR_1->rss_ind_tbl_mem_handle);
 VAR_1->rss_ind_tbl = ((void*)0);

 if (VAR_1->host_rss_ind_tbl)
  FUNC_0(VAR_0->dmadev, VAR_1->host_rss_ind_tbl);
 VAR_1->host_rss_ind_tbl = ((void*)0);
}
