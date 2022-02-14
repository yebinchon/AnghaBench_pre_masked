
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hpt_iop_hba {int pciunit; int pcidev; TYPE_1__* sim; } ;
struct cam_periph {int refcount; } ;
struct cam_path {int dummy; } ;
struct TYPE_2__ {int path_id; } ;


 int VAR_0 ;
 struct cam_periph* FUNC_0 (struct cam_path*,char*) ;
 int FUNC_1 (int ,char*,int ,int,int) ;
 int FUNC_2 (struct cam_path**,int *,int ,int,int ) ;
 int FUNC_3 (struct cam_path*) ;

__attribute__((used)) static int FUNC_4(struct hpt_iop_hba * VAR_1,
      int VAR_2)
{
 struct cam_periph *VAR_3 = ((void*)0);
 struct cam_path *VAR_4;
 int VAR_5, VAR_6 = 0;

 VAR_5 = FUNC_2(&VAR_4, ((void*)0), VAR_1->sim->path_id, VAR_2, 0);

 if (VAR_5 == VAR_0) {
  if ((VAR_3 = FUNC_0(VAR_4, "da")) != ((void*)0)) {
   if (VAR_3->refcount >= 1) {
    FUNC_1(VAR_1->pcidev, "%d ,"
     "target_id=0x%x,"
     "refcount=%d",
        VAR_1->pciunit, VAR_2, VAR_3->refcount);
    VAR_6 = -1;
   }
  }
  FUNC_3(VAR_4);
 }
 return VAR_6;
}
