
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mthca_tavor_ud_seg {int dummy; } ;
struct mthca_raddr_seg {int dummy; } ;
struct mthca_qp {int transport; } ;
struct mthca_next_seg {int dummy; } ;
struct mthca_dev {int dummy; } ;
struct mthca_data_seg {int dummy; } ;
struct mthca_arbel_ud_seg {int dummy; } ;




 int FUNC_0 (struct mthca_dev*) ;

__attribute__((used)) static int FUNC_1(struct mthca_dev *VAR_0, struct mthca_qp *VAR_1, int VAR_2)
{




 int VAR_3 = VAR_2 - sizeof (struct mthca_next_seg);

 switch (VAR_1->transport) {
 case 129:
  VAR_3 -= 2 * sizeof (struct mthca_data_seg);
  break;

 case 128:
  if (FUNC_0(VAR_0))
   VAR_3 -= sizeof (struct mthca_arbel_ud_seg);
  else
   VAR_3 -= sizeof (struct mthca_tavor_ud_seg);
  break;

 default:
  VAR_3 -= sizeof (struct mthca_raddr_seg);
  break;
 }

 return VAR_3;
}
