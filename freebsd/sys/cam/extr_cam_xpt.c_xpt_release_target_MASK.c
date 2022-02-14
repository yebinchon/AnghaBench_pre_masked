
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_et {scalar_t__ refcount; struct cam_et* luns; int luns_mtx; int ed_entries; struct cam_eb* bus; } ;
struct cam_eb {int eb_mtx; int generation; int et_entries; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct cam_et*,int ) ;
 int FUNC_3 (struct cam_et*,int ) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct cam_eb*) ;

__attribute__((used)) static void
FUNC_8(struct cam_et *VAR_2)
{
 struct cam_eb *VAR_3 = VAR_2->bus;

 FUNC_5(&VAR_3->eb_mtx);
 if (--VAR_2->refcount > 0) {
  FUNC_6(&VAR_3->eb_mtx);
  return;
 }
 FUNC_2(&VAR_3->et_entries, VAR_2, VAR_1);
 VAR_3->generation++;
 FUNC_6(&VAR_3->eb_mtx);
 FUNC_0(FUNC_1(&VAR_2->ed_entries),
     ("destroying target, but device list is not empty"));
 FUNC_7(VAR_3);
 FUNC_4(&VAR_2->luns_mtx);
 if (VAR_2->luns)
  FUNC_3(VAR_2->luns, VAR_0);
 FUNC_3(VAR_2, VAR_0);
}
