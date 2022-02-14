
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int target_id_t ;
struct cam_periph {int dummy; } ;
struct cam_path {struct cam_ed* device; struct cam_et* target; struct cam_eb* bus; struct cam_periph* periph; } ;
struct cam_et {int dummy; } ;
struct cam_ed {int dummy; } ;
struct cam_eb {int eb_mtx; TYPE_2__* xport; } ;
typedef int path_id_t ;
typedef int lun_id_t ;
typedef scalar_t__ cam_status ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {struct cam_ed* (* alloc_device ) (struct cam_eb*,struct cam_et*,int ) ;} ;


 int FUNC_0 (struct cam_path*,int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct cam_ed* FUNC_3 (struct cam_eb*,struct cam_et*,int ) ;
 struct cam_et* FUNC_4 (struct cam_eb*,int ) ;
 struct cam_eb* FUNC_5 (int ) ;
 struct cam_ed* FUNC_6 (struct cam_et*,int ) ;
 struct cam_et* FUNC_7 (struct cam_eb*,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (struct cam_eb*) ;
 int FUNC_10 (struct cam_ed*) ;
 int FUNC_11 (struct cam_et*) ;
 int FUNC_12 () ;

cam_status
FUNC_13(struct cam_path *VAR_4, struct cam_periph *VAR_5,
   path_id_t VAR_6, target_id_t VAR_7, lun_id_t VAR_8)
{
 struct cam_eb *VAR_9;
 struct cam_et *VAR_10;
 struct cam_ed *VAR_11;
 cam_status VAR_12;

 VAR_12 = VAR_2;
 VAR_10 = ((void*)0);
 VAR_11 = ((void*)0);





 VAR_9 = FUNC_5(VAR_6);
 if (VAR_9 == ((void*)0)) {
  VAR_12 = VAR_1;
 } else {
  FUNC_8();
  FUNC_1(&VAR_9->eb_mtx);
  VAR_10 = FUNC_7(VAR_9, VAR_7);
  if (VAR_10 == ((void*)0)) {

   struct cam_et *VAR_13;

   VAR_13 = FUNC_4(VAR_9, VAR_7);
   if (VAR_13 == ((void*)0)) {
    VAR_12 = VAR_3;
   } else {
    VAR_10 = VAR_13;
   }
  }
  FUNC_12();
  if (VAR_10 != ((void*)0)) {
   VAR_11 = FUNC_6(VAR_10, VAR_8);
   if (VAR_11 == ((void*)0)) {

    struct cam_ed *VAR_14;

    VAR_14 =
        (*(VAR_9->xport->ops->alloc_device))(VAR_9,
               VAR_10,
               VAR_8);
    if (VAR_14 == ((void*)0)) {
     VAR_12 = VAR_3;
    } else {
     VAR_11 = VAR_14;
    }
   }
  }
  FUNC_2(&VAR_9->eb_mtx);
 }




 if (VAR_12 == VAR_2) {
  VAR_4->periph = VAR_5;
  VAR_4->bus = VAR_9;
  VAR_4->target = VAR_10;
  VAR_4->device = VAR_11;
  FUNC_0(VAR_4, VAR_0, ("xpt_compile_path\n"));
 } else {
  if (VAR_11 != ((void*)0))
   FUNC_10(VAR_11);
  if (VAR_10 != ((void*)0))
   FUNC_11(VAR_10);
  if (VAR_9 != ((void*)0))
   FUNC_9(VAR_9);
 }
 return (VAR_12);
}
