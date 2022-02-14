
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int subnet_prefix; int interface_id; } ;
union ib_gid {TYPE_1__ global; } ;
struct qlnxr_dev {int sgid_lock; int * sgid_tbl; int ha; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int *,union ib_gid*,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static bool FUNC_5(struct qlnxr_dev *VAR_1, union ib_gid *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;


 FUNC_0(VAR_1->ha, "removing gid %llx %llx\n",
   VAR_2->global.interface_id,
   VAR_2->global.subnet_prefix);
 FUNC_3(&VAR_1->sgid_lock);

 for (VAR_4 = 1; VAR_4 < VAR_0; VAR_4++) {
  if (!FUNC_1(&VAR_1->sgid_tbl[VAR_4], VAR_2, sizeof(union ib_gid))) {

   FUNC_2(&VAR_1->sgid_tbl[VAR_4], 0, sizeof(union ib_gid));
   VAR_3 = 1;
   break;
  }
 }
 FUNC_4(&VAR_1->sgid_lock);

 return VAR_3;
}
