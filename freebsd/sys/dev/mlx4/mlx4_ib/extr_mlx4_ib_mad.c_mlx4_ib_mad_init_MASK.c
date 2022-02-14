
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_ib_dev {int num_ports; struct ib_mad_agent*** send_agent; int ib_dev; } ;
struct ib_mad_agent {int dummy; } ;
typedef enum rdma_link_layer { ____Placeholder_rdma_link_layer } rdma_link_layer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ib_mad_agent*) ;
 int FUNC_1 (struct ib_mad_agent*) ;
 struct ib_mad_agent* FUNC_2 (int *,int,int ,int *,int ,int ,int *,int *,int ) ;
 int FUNC_3 (struct ib_mad_agent*) ;
 int FUNC_4 (int *,int) ;
 int VAR_3 ;

int FUNC_5(struct mlx4_ib_dev *VAR_4)
{
 struct ib_mad_agent *VAR_5;
 int VAR_6, VAR_7;
 int VAR_8;
 enum rdma_link_layer VAR_9;

 for (VAR_6 = 0; VAR_6 < VAR_4->num_ports; ++VAR_6) {
  VAR_9 = FUNC_4(&VAR_4->ib_dev, VAR_6 + 1);
  for (VAR_7 = 0; VAR_7 <= 1; ++VAR_7) {
   if (VAR_9 == VAR_0) {
    VAR_5 = FUNC_2(&VAR_4->ib_dev, VAR_6 + 1,
             VAR_7 ? VAR_1 : VAR_2,
             ((void*)0), 0, VAR_3,
             ((void*)0), ((void*)0), 0);
    if (FUNC_0(VAR_5)) {
     VAR_8 = FUNC_1(VAR_5);
     goto err;
    }
    VAR_4->send_agent[VAR_6][VAR_7] = VAR_5;
   } else
    VAR_4->send_agent[VAR_6][VAR_7] = ((void*)0);
  }
 }

 return 0;

err:
 for (VAR_6 = 0; VAR_6 < VAR_4->num_ports; ++VAR_6)
  for (VAR_7 = 0; VAR_7 <= 1; ++VAR_7)
   if (VAR_4->send_agent[VAR_6][VAR_7])
    FUNC_3(VAR_4->send_agent[VAR_6][VAR_7]);

 return VAR_8;
}
