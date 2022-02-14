
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct regpair {void* hi; void* lo; } ;
struct qlnxr_pbl_info {int num_pbes; int pbl_size; } ;
struct qlnxr_pbl {scalar_t__ va; } ;
struct qlnxr_dev {int * ha; } ;
struct mr_info {struct qlnxr_pbl_info pbl_info; struct qlnxr_pbl* pbl_table; } ;
struct TYPE_5__ {int page_list_len; TYPE_1__* page_list; } ;
struct TYPE_6__ {TYPE_2__ fast_reg; } ;
struct ib_send_wr {TYPE_3__ wr; } ;
typedef int qlnx_host_t ;
struct TYPE_4__ {scalar_t__* page_list; } ;


 int FUNC_0 (int *,char*) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct qlnxr_dev *VAR_0, struct ib_send_wr *VAR_1,
 struct mr_info *VAR_2)
{
 int VAR_3;
 u64 VAR_4 = 0;
 int VAR_5, VAR_6 = 0;
 struct regpair *VAR_7;
 struct qlnxr_pbl *VAR_8 = VAR_2->pbl_table;
 struct qlnxr_pbl_info *VAR_9 = &VAR_2->pbl_info;
 qlnx_host_t *VAR_10;

 VAR_10 = VAR_0->ha;

 FUNC_0(VAR_10, "enter\n");

 VAR_7 = (struct regpair *)VAR_8->va;
 VAR_5 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->wr.fast_reg.page_list_len; VAR_3++) {
  VAR_4 = VAR_1->wr.fast_reg.page_list->page_list[VAR_3];
  VAR_7->lo = FUNC_1((u32)VAR_4);
  VAR_7->hi = FUNC_1((u32)FUNC_2(VAR_4));

  VAR_5 += 1;
  VAR_7++;
  VAR_6++;

  if (VAR_6 == VAR_9->num_pbes)
   return;




  if (VAR_5 ==
      (VAR_9->pbl_size / sizeof(u64))) {
   VAR_8++;
   VAR_7 = (struct regpair *)VAR_8->va;
   VAR_5 = 0;
  }
 }
 FUNC_0(VAR_10, "exit\n");

 return;
}
