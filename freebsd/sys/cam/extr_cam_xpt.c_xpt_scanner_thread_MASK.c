
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int path; } ;
union ccb {TYPE_3__ ccb_h; } ;
struct cam_path {int dummy; } ;
struct TYPE_5__ {int tqe; } ;
struct TYPE_4__ {int ccb_scanq; int xpt_topo_lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_3__*,int ) ;
 int FUNC_3 (int *,int *,int ,char*,int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_4 (union ccb*) ;
 int FUNC_5 (struct cam_path*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (struct cam_path*) ;
 int FUNC_8 (struct cam_path*) ;
 int FUNC_9 (struct cam_path*) ;
 int FUNC_10 () ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void
FUNC_11(void *VAR_3)
{
 union ccb *VAR_4;
 struct cam_path VAR_5;

 FUNC_6();
 for (;;) {
  if (FUNC_0(&VAR_2.ccb_scanq))
   FUNC_3(&VAR_2.ccb_scanq, &VAR_2.xpt_topo_lock, VAR_0,
          "-", 0);
  if ((VAR_4 = (union ccb *)FUNC_1(&VAR_2.ccb_scanq)) != ((void*)0)) {
   FUNC_2(&VAR_2.ccb_scanq, &VAR_4->ccb_h, VAR_1.tqe);
   FUNC_10();






   FUNC_5(&VAR_5, VAR_4->ccb_h.path);
   FUNC_7(&VAR_5);
   FUNC_4(VAR_4);
   FUNC_8(&VAR_5);
   FUNC_9(&VAR_5);

   FUNC_6();
  }
 }
}
