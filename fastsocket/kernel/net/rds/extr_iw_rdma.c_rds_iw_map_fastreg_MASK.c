
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct scatterlist {int dummy; } ;
struct rds_iw_mr_pool {scalar_t__ max_message_size; struct rds_iw_device* device; } ;
struct TYPE_5__ {scalar_t__ dma_len; int dma_npages; } ;
struct rds_iw_mapping {TYPE_2__ m_sg; } ;
struct rds_iw_mr {TYPE_1__* page_list; struct rds_iw_mapping mapping; } ;
struct rds_iw_device {int dummy; } ;
struct TYPE_4__ {int * page_list; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (struct rds_iw_device*,TYPE_2__*) ;
 int FUNC_4 (struct rds_iw_mapping*) ;
 int FUNC_5 (TYPE_2__*,struct scatterlist*,unsigned int) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(struct rds_iw_mr_pool *VAR_2,
   struct rds_iw_mr *VAR_3,
   struct scatterlist *VAR_4,
   unsigned int VAR_5)
{
 struct rds_iw_device *VAR_6 = VAR_2->device;
 struct rds_iw_mapping *VAR_7 = &VAR_3->mapping;
 u64 *VAR_8;
 int VAR_9, VAR_10 = 0;

 FUNC_5(&VAR_7->m_sg, VAR_4, VAR_5);

 VAR_8 = FUNC_3(VAR_6, &VAR_7->m_sg);
 if (FUNC_0(VAR_8)) {
  VAR_10 = FUNC_1(VAR_8);
  VAR_8 = ((void*)0);
  goto out;
 }

 if (VAR_7->m_sg.dma_len > VAR_2->max_message_size) {
  VAR_10 = -VAR_0;
  goto out;
 }

 for (VAR_9 = 0; VAR_9 < VAR_7->m_sg.dma_npages; ++VAR_9)
  VAR_3->page_list->page_list[VAR_9] = VAR_8[VAR_9];

 VAR_10 = FUNC_4(VAR_7);
 if (VAR_10)
  goto out;

 FUNC_6(VAR_1);

out:
 FUNC_2(VAR_8);

 return VAR_10;
}
