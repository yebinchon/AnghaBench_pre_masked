
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct ntb_transport_qp {int rxc_db_work; int rxc_tq; scalar_t__ link_is_up; } ;
struct ntb_transport_ctx {int qp_bitmap; struct ntb_transport_qp* qp_vec; int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void
FUNC_6(void *VAR_0, uint32_t VAR_1)
{
 struct ntb_transport_ctx *VAR_2 = VAR_0;
 struct ntb_transport_qp *VAR_3;
 uint64_t VAR_4;
 unsigned VAR_5;

 VAR_4 = FUNC_4(VAR_2->dev, VAR_1);
 VAR_4 &= VAR_2->qp_bitmap;
 if ((VAR_4 & (VAR_4 - 1)) != 0)
  VAR_4 &= FUNC_2(VAR_2->dev);
 if (VAR_4 != 0) {
  FUNC_3(VAR_2->dev, VAR_4);
  FUNC_1(VAR_2->dev, VAR_4);
 }
 while (VAR_4 != 0) {
  VAR_5 = FUNC_0(VAR_4) - 1;

  VAR_3 = &VAR_2->qp_vec[VAR_5];
  if (VAR_3->link_is_up)
   FUNC_5(VAR_3->rxc_tq, &VAR_3->rxc_db_work);

  VAR_4 &= ~(1ull << VAR_5);
 }
}
