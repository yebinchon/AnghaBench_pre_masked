
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_msgs; scalar_t__ msix_pba_rid; int * msix_pba_res; scalar_t__ msix_table_rid; int * msix_table_res; int arg; int cookie; int res; } ;
struct pptdev {TYPE_1__ msix; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pptdev*,int) ;

__attribute__((used)) static void
FUNC_4(struct pptdev *VAR_2)
{
 int VAR_3;

 if (VAR_2->msix.num_msgs == 0)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->msix.num_msgs; VAR_3++)
  FUNC_3(VAR_2, VAR_3);

 FUNC_1(VAR_2->msix.res, VAR_0);
 FUNC_1(VAR_2->msix.cookie, VAR_0);
 FUNC_1(VAR_2->msix.arg, VAR_0);

 FUNC_2(VAR_2->dev);

 if (VAR_2->msix.msix_table_res) {
  FUNC_0(VAR_2->dev, VAR_1,
         VAR_2->msix.msix_table_rid,
         VAR_2->msix.msix_table_res);
  VAR_2->msix.msix_table_res = ((void*)0);
  VAR_2->msix.msix_table_rid = 0;
 }
 if (VAR_2->msix.msix_pba_res) {
  FUNC_0(VAR_2->dev, VAR_1,
         VAR_2->msix.msix_pba_rid,
         VAR_2->msix.msix_pba_res);
  VAR_2->msix.msix_pba_res = ((void*)0);
  VAR_2->msix.msix_pba_rid = 0;
 }

 VAR_2->msix.num_msgs = 0;
}
