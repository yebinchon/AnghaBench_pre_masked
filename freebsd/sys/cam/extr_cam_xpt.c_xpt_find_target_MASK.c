
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ target_id_t ;
struct cam_et {scalar_t__ target_id; int refcount; } ;
struct cam_eb {int et_entries; int eb_mtx; } ;


 int VAR_0 ;
 struct cam_et* FUNC_0 (int *) ;
 struct cam_et* FUNC_1 (struct cam_et*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static struct cam_et *
FUNC_3(struct cam_eb *VAR_2, target_id_t VAR_3)
{
 struct cam_et *VAR_4;

 FUNC_2(&VAR_2->eb_mtx, VAR_0);
 for (VAR_4 = FUNC_0(&VAR_2->et_entries);
      VAR_4 != ((void*)0);
      VAR_4 = FUNC_1(VAR_4, VAR_1)) {
  if (VAR_4->target_id == VAR_3) {
   VAR_4->refcount++;
   break;
  }
 }
 return (VAR_4);
}
