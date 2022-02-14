
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vt_window {int vw_flags; int vd_flags; int vd_timer; int vd_timer_armed; int vd_lock; struct vt_window** vd_windows; struct vt_window* vd_curwindow; int vw_terminal; int vw_proc_dead_timer; } ;
struct vt_device {int vw_flags; int vd_flags; int vd_timer; int vd_timer_armed; int vd_lock; struct vt_device** vd_windows; struct vt_device* vd_curwindow; int vw_terminal; int vw_proc_dead_timer; } ;
struct TYPE_2__ {int * vd_driver; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct vt_window*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (struct vt_window*) ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct vt_window*) ;
 int FUNC_3 (struct vt_window*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *,int,int ,struct vt_window*) ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (struct vt_window*) ;
 struct vt_window* FUNC_10 (struct vt_window*,unsigned int) ;
 int FUNC_11 (struct vt_window*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_12 (int ) ;

void
FUNC_13(struct vt_device *VAR_18)
{
 struct vt_window *VAR_19;
 unsigned int VAR_20;
 int VAR_21;

 if (!FUNC_12(VAR_3))
  return;
 if (VAR_10->vd_driver == ((void*)0))
  return;

 for (VAR_20 = 0; VAR_20 < VAR_5; VAR_20++) {
  VAR_19 = VAR_18->vd_windows[VAR_20];
  if (VAR_19 == ((void*)0)) {

   VAR_19 = FUNC_10(VAR_18, VAR_20);
  }
  if (!(VAR_19->vw_flags & VAR_8)) {
   FUNC_5(&VAR_19->vw_proc_dead_timer, 0);
   FUNC_8(VAR_19->vw_terminal, "v%r", FUNC_2(VAR_19));
   VAR_19->vw_flags |= VAR_8;
   if (VAR_19->vw_flags & VAR_7) {

    FUNC_0(VAR_13,
        VAR_17, VAR_19, VAR_1);
   }
  }

 }
 FUNC_1(VAR_18);
 if (VAR_18->vd_curwindow == ((void*)0))
  VAR_18->vd_curwindow = VAR_18->vd_windows[VAR_4];

 VAR_21 = 0;
 if (!(VAR_18->vd_flags & VAR_2)) {

  FUNC_9(VAR_18);


  FUNC_6(&VAR_18->vd_timer, &VAR_18->vd_lock, 0);
  FUNC_4(&VAR_18->vd_timer_armed, 1);
  VAR_18->vd_flags |= VAR_2;
  FUNC_7(&VAR_18->vd_timer, VAR_9 / VAR_6, VAR_16, VAR_18);
  VAR_21 = 1;
 }

 FUNC_3(VAR_18);


 FUNC_11(VAR_18);

 if (VAR_21) {

  FUNC_0(VAR_12, VAR_15,
      VAR_18, VAR_0);
  FUNC_0(VAR_11, VAR_14, VAR_18,
      VAR_0);
 }
}
