
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_qp {int link_work; } ;
struct ntb_transport_ctx {int qp_count; int qp_bitmap; int dev; struct ntb_transport_qp* qp_vec; scalar_t__ link_is_up; int link_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ntb_transport_qp*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct ntb_transport_ctx *VAR_0)
{
 struct ntb_transport_qp *VAR_1;
 int VAR_2;

 FUNC_0(&VAR_0->link_work);
 VAR_0->link_is_up = 0;


 for (VAR_2 = 0; VAR_2 < VAR_0->qp_count; VAR_2++) {
  if ((VAR_0->qp_bitmap & (1 << VAR_2)) != 0) {
   VAR_1 = &VAR_0->qp_vec[VAR_2];
   FUNC_1(VAR_1);
   FUNC_0(&VAR_1->link_work);
  }
 }






 FUNC_2(VAR_0->dev);
}
