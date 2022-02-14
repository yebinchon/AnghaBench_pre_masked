
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pbl_table; int pbl_info; } ;
struct qlnxr_mr {scalar_t__ type; struct qlnxr_mr* pages; scalar_t__ umem; TYPE_1__ info; } ;
struct qlnxr_dev {int * ha; } ;
struct ib_mr {int device; } ;
typedef int qlnx_host_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct qlnxr_dev* FUNC_1 (int ) ;
 struct qlnxr_mr* FUNC_2 (struct ib_mr*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct qlnxr_mr*) ;
 int FUNC_5 (struct qlnxr_dev*,int *,int ) ;

int
FUNC_6(struct ib_mr *VAR_2)
{
 struct qlnxr_mr *VAR_3 = FUNC_2(VAR_2);
 struct qlnxr_dev *VAR_4 = FUNC_1((VAR_2->device));
 int VAR_5 = 0;
 qlnx_host_t *VAR_6;

 VAR_6 = VAR_4->ha;

 FUNC_0(VAR_6, "enter\n");

 if ((VAR_3->type != VAR_0) && (VAR_3->type != VAR_1))
  FUNC_5(VAR_4, &VAR_3->info.pbl_info, VAR_3->info.pbl_table);


 if (VAR_3->umem)
  FUNC_3(VAR_3->umem);

 FUNC_4(VAR_3->pages);

 FUNC_4(VAR_3);

 FUNC_0(VAR_6, "exit\n");
 return VAR_5;
}
