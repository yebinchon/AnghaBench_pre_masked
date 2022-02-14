
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cam_et {int ed_entries; TYPE_1__* bus; } ;
struct cam_ed {scalar_t__ lun_id; int refcount; } ;
typedef scalar_t__ lun_id_t ;
struct TYPE_2__ {int eb_mtx; } ;


 int VAR_0 ;
 struct cam_ed* FUNC_0 (int *) ;
 struct cam_ed* FUNC_1 (struct cam_ed*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static struct cam_ed *
FUNC_3(struct cam_et *VAR_2, lun_id_t VAR_3)
{
 struct cam_ed *VAR_4;

 FUNC_2(&VAR_2->bus->eb_mtx, VAR_0);
 for (VAR_4 = FUNC_0(&VAR_2->ed_entries);
      VAR_4 != ((void*)0);
      VAR_4 = FUNC_1(VAR_4, VAR_1)) {
  if (VAR_4->lun_id == VAR_3) {
   VAR_4->refcount++;
   break;
  }
 }
 return (VAR_4);
}
