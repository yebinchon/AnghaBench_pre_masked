
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef struct vt_driver {int (* vd_fini ) (struct vt_device*,void*) ;int (* vd_init ) (struct vt_device*) ;} const vt_driver ;
struct vt_device {int vd_flags; TYPE_1__** vd_windows; TYPE_2__* vd_curwindow; struct vt_driver const* vd_driver; int * vd_prev_softc; struct vt_driver const* vd_prev_driver; int * vd_softc; } ;
struct TYPE_4__ {int vw_terminal; } ;
struct TYPE_3__ {int vw_terminal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct vt_device*) ;
 int FUNC_1 (struct vt_device*) ;
 struct vt_device* VAR_5 ;
 int FUNC_2 (struct vt_device*) ;
 int FUNC_3 (struct vt_device*) ;
 int FUNC_4 (struct vt_device*,void*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (struct vt_device*) ;
 int FUNC_9 (struct vt_device*) ;
 int FUNC_10 (struct vt_device*) ;

__attribute__((used)) static void
FUNC_11(const struct vt_driver *VAR_6, void *VAR_7)
{
 struct vt_device *VAR_8;

 VAR_8 = VAR_5;

 if (VAR_8->vd_flags & VAR_0) {

  FUNC_0(VAR_8);
  FUNC_8(VAR_8);
  FUNC_1(VAR_8);




  FUNC_6(VAR_8->vd_curwindow->vw_terminal, 1);
 }





 FUNC_0(VAR_8);
 VAR_8->vd_flags &= ~VAR_3;

 if (VAR_6 != ((void*)0)) {





  VAR_8->vd_prev_driver = VAR_8->vd_driver;
  VAR_8->vd_prev_softc = VAR_8->vd_softc;
  VAR_8->vd_driver = VAR_6;
  VAR_8->vd_softc = VAR_7;

  VAR_8->vd_driver->vd_init(VAR_8);
 } else if (VAR_8->vd_prev_driver != ((void*)0) && VAR_8->vd_prev_softc != ((void*)0)) {




  const struct vt_driver *VAR_9;
  void *VAR_10;

  VAR_9 = VAR_8->vd_driver;
  VAR_10 = VAR_8->vd_softc;

  VAR_8->vd_driver = VAR_8->vd_prev_driver;
  VAR_8->vd_softc = VAR_8->vd_prev_softc;
  VAR_8->vd_prev_driver = ((void*)0);
  VAR_8->vd_prev_softc = ((void*)0);

  VAR_8->vd_flags |= VAR_1;

  VAR_8->vd_driver->vd_init(VAR_8);

  if (VAR_9->vd_fini)
   VAR_9->vd_fini(VAR_8, VAR_10);

  VAR_8->vd_flags &= ~VAR_1;
 }

 FUNC_1(VAR_8);


 FUNC_9(VAR_8);






 if (VAR_8->vd_flags & VAR_0) {

  FUNC_6(VAR_8->vd_curwindow->vw_terminal, 0);

  FUNC_7(VAR_8->vd_curwindow, 0);
 }





 FUNC_5(VAR_8->vd_windows[VAR_4]->vw_terminal);
}
