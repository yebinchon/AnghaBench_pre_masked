
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mthca_qp {int qpn; scalar_t__ port; int transport; } ;
struct mthca_pd {int dummy; } ;
struct TYPE_4__ {int lock; int qp; int alloc; } ;
struct TYPE_3__ {int num_qps; } ;
struct mthca_dev {TYPE_2__ qp_table; TYPE_1__ limits; } ;
struct mthca_cq {int dummy; } ;
struct ib_qp_cap {int dummy; } ;
typedef enum ib_sig_type { ____Placeholder_ib_sig_type } ib_sig_type ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mthca_dev*,struct mthca_pd*,struct mthca_cq*,struct mthca_cq*,int,struct mthca_qp*) ;
 int FUNC_2 (int *,int,struct mthca_qp*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct mthca_dev*,struct ib_qp_cap*,struct mthca_pd*,struct mthca_qp*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct mthca_dev *VAR_5,
     struct mthca_pd *VAR_6,
     struct mthca_cq *VAR_7,
     struct mthca_cq *VAR_8,
     enum ib_qp_type VAR_9,
     enum ib_sig_type VAR_10,
     struct ib_qp_cap *VAR_11,
     struct mthca_qp *VAR_12)
{
 int VAR_13;

 switch (VAR_9) {
 case 130: VAR_12->transport = VAR_2; break;
 case 129: VAR_12->transport = VAR_3; break;
 case 128: VAR_12->transport = VAR_4; break;
 default: return -VAR_0;
 }

 VAR_13 = FUNC_4(VAR_5, VAR_11, VAR_6, VAR_12);
 if (VAR_13)
  return VAR_13;

 VAR_12->qpn = FUNC_0(&VAR_5->qp_table.alloc);
 if (VAR_12->qpn == -1)
  return -VAR_1;


 VAR_12->port = 0;

 VAR_13 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8,
        VAR_10, VAR_12);
 if (VAR_13) {
  FUNC_3(&VAR_5->qp_table.alloc, VAR_12->qpn);
  return VAR_13;
 }

 FUNC_5(&VAR_5->qp_table.lock);
 FUNC_2(&VAR_5->qp_table.qp,
   VAR_12->qpn & (VAR_5->limits.num_qps - 1), VAR_12);
 FUNC_6(&VAR_5->qp_table.lock);

 return 0;
}
