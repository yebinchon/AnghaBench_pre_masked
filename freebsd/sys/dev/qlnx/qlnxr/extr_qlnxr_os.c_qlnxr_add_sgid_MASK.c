
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int member_0; } ;
union ib_gid {TYPE_1__ member_0; } ;
struct qlnxr_dev {int sgid_lock; int ha; int * sgid_tbl; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *,union ib_gid*,int) ;
 int FUNC_2 (int *,union ib_gid*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static bool
FUNC_5(struct qlnxr_dev *VAR_1, union ib_gid *VAR_2)
{
 union ib_gid VAR_3 = { { 0 } };
 int VAR_4;

 FUNC_3(&VAR_1->sgid_lock);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (!FUNC_1(&VAR_1->sgid_tbl[VAR_4], &VAR_3,
    sizeof(union ib_gid))) {

   FUNC_2(&VAR_1->sgid_tbl[VAR_4], VAR_2,
    sizeof(union ib_gid));
   FUNC_0(VAR_1->ha, "copying sgid : %llx\n",
     *VAR_2);
   FUNC_4(&VAR_1->sgid_lock);

   return 1;
  } else if (!FUNC_1(&VAR_1->sgid_tbl[VAR_4], VAR_2,
    sizeof(union ib_gid))) {

   FUNC_4(&VAR_1->sgid_lock);
   FUNC_0(VAR_1->ha, "sgid present : %llx\n",
     *VAR_2);
   return 0;
  }
 }
 if (VAR_4 == VAR_0) {
  FUNC_0(VAR_1->ha, "didn't find an empty entry in sgid_tbl\n");
 }
 FUNC_4(&VAR_1->sgid_lock);
 return 0;
}
