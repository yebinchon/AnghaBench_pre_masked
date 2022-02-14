
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int term_pos_t ;
struct winsize {int dummy; } ;
struct TYPE_2__ {int vb_cursor; int vb_history_size; } ;
struct vt_window {TYPE_1__ vw_buf; struct vt_font* vw_font; struct vt_device* vw_device; } ;
struct vt_font {int dummy; } ;
struct vt_device {int vd_flags; scalar_t__ vd_height; struct vt_window* vd_curwindow; } ;
struct terminal {struct vt_window* tm_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vt_device*) ;
 int FUNC_1 (struct vt_device*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int ,int *) ;
 int VAR_5 ;
 int FUNC_4 (struct terminal*,int) ;
 int FUNC_5 (struct terminal*,int *) ;
 int FUNC_6 (struct terminal*,struct winsize*,int ,int *) ;
 int FUNC_7 (struct vt_window*) ;
 struct terminal VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (struct vt_window*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_9 (struct vt_device*,struct vt_font*,int *) ;
 int FUNC_10 (struct vt_device*,struct vt_font*,struct winsize*) ;
 int FUNC_11 (TYPE_1__*,int *,int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13(void *VAR_13)
{
 struct vt_device *VAR_14;
 struct vt_window *VAR_15;
 struct terminal *VAR_16;
 struct vt_font *VAR_17;
 struct winsize VAR_18;
 term_pos_t VAR_19;

 if (!FUNC_12(VAR_4))
  return;
 if (!VAR_10)
  return;

 VAR_16 = &VAR_6;
 VAR_15 = VAR_16->tm_softc;
 if (VAR_15 == ((void*)0))
  return;
 VAR_14 = VAR_15->vw_device;
 if (VAR_14 == ((void*)0))
  return;
 VAR_17 = VAR_15->vw_font;
 if (VAR_17 == ((void*)0))
  return;

 FUNC_0(VAR_14);
 if ((VAR_14->vd_flags & VAR_1) == 0)
  goto out;
 if ((VAR_14->vd_flags & (VAR_0 | VAR_3)) != 0)
  goto out;
 if (VAR_14->vd_height <= VAR_9)
  goto out;

 VAR_7 = 1;
 FUNC_1(VAR_14);

 FUNC_9(VAR_14, VAR_17, &VAR_19);
 FUNC_10(VAR_14, VAR_17, &VAR_18);


 FUNC_4(VAR_16, 1);
 FUNC_11(&VAR_15->vw_buf, &VAR_19, VAR_15->vw_buf.vb_history_size);
 FUNC_6(VAR_16, &VAR_18, 0, ((void*)0));
 FUNC_5(VAR_16, &VAR_15->vw_buf.vb_cursor);
 FUNC_4(VAR_16, 0);

 FUNC_0(VAR_14);
 FUNC_7(VAR_15);

 if (VAR_14->vd_curwindow == VAR_15) {
  VAR_14->vd_flags |= VAR_2;
  FUNC_8(VAR_15, 0);
 }

 FUNC_2(&VAR_11, 1);
 FUNC_3(&VAR_11, VAR_12 * VAR_5,
     VAR_8, ((void*)0));

out:
 FUNC_1(VAR_14);
}
