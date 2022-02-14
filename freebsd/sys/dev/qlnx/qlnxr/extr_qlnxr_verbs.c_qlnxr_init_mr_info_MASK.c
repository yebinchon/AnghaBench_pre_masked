
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlnxr_pbl {int pa; int list_entry; } ;
struct qlnxr_dev {int * ha; } ;
struct mr_info {int free_pbl_list; int pbl_info; TYPE_1__* pbl_table; int inuse_pbl_list; } ;
typedef int qlnx_host_t ;
struct TYPE_2__ {int pa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (struct qlnxr_dev*,struct mr_info*) ;
 int FUNC_4 (int *,int *) ;
 void* FUNC_5 (struct qlnxr_dev*,int *,int ) ;
 int FUNC_6 (struct qlnxr_dev*,int *,size_t,int) ;

__attribute__((used)) static int
FUNC_7(struct qlnxr_dev *VAR_2, struct mr_info *VAR_3,
 size_t VAR_4, bool VAR_5)
{
 int VAR_6;
 struct qlnxr_pbl *VAR_7;
 qlnx_host_t *VAR_8;

 VAR_8 = VAR_2->ha;

 FUNC_2(VAR_8, "enter\n");

 FUNC_0(&VAR_3->free_pbl_list);
 FUNC_0(&VAR_3->inuse_pbl_list);

 VAR_6 = FUNC_6(VAR_2, &VAR_3->pbl_info,
      VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_1(VAR_8, "qlnxr_prepare_pbl_tbl [%d]\n", VAR_6);
  goto done;
 }

 VAR_3->pbl_table = FUNC_5(VAR_2, &VAR_3->pbl_info, VAR_1);

 if (!VAR_3->pbl_table) {
  VAR_6 = -VAR_0;
  FUNC_1(VAR_8, "qlnxr_alloc_pbl_tbl returned NULL\n");
  goto done;
 }

 FUNC_2(VAR_8, "pbl_table_pa = %pa\n", &VAR_3->pbl_table->pa);




 VAR_7 = FUNC_5(VAR_2, &VAR_3->pbl_info, VAR_1);

 if (!VAR_7) {
  FUNC_1(VAR_8, "Extra PBL is not allocated\n");
  goto done;
 }

 FUNC_4(&VAR_7->list_entry, &VAR_3->free_pbl_list);

 FUNC_2(VAR_8, "extra pbl_table_pa = %pa\n", &VAR_7->pa);

done:
 if (VAR_6)
  FUNC_3(VAR_2, VAR_3);

 FUNC_2(VAR_8, "exit [%d]\n", VAR_6);

 return VAR_6;
}
