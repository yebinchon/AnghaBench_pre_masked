
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_ib_mr {unsigned int sg_len; int * sg; scalar_t__ sg_dma_len; struct rds_ib_device* device; } ;
struct rds_ib_device {int dev; } ;
struct page {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,unsigned int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 struct page* FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct rds_ib_mr *VAR_1)
{
 struct rds_ib_device *VAR_2 = VAR_1->device;

 if (VAR_1->sg_dma_len) {
  FUNC_1(VAR_2->dev,
    VAR_1->sg, VAR_1->sg_len,
    VAR_0);
  VAR_1->sg_dma_len = 0;
 }


 if (VAR_1->sg_len) {
  unsigned int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_1->sg_len; ++VAR_3) {
   struct page *VAR_4 = FUNC_6(&VAR_1->sg[VAR_3]);



   FUNC_0(FUNC_2());
   FUNC_5(VAR_4);
   FUNC_4(VAR_4);
  }
  FUNC_3(VAR_1->sg);

  VAR_1->sg = ((void*)0);
  VAR_1->sg_len = 0;
 }
}
