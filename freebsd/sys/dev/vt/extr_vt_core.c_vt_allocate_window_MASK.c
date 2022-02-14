
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int term_pos_t ;
struct winsize {int dummy; } ;
struct TYPE_2__ {struct terminal* vb_terminal; } ;
struct vt_window {unsigned int vw_number; int vw_proc_dead_timer; TYPE_1__ vw_buf; struct terminal* vw_terminal; int vw_font; int vw_kbdmode; struct vt_device* vw_device; } ;
struct vt_device {int vd_flags; struct vt_window** vd_windows; } ;
struct terminal {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 struct vt_window* FUNC_1 (int,int ,int) ;
 struct terminal* FUNC_2 (int *,struct vt_window*) ;
 int FUNC_3 (struct terminal*,struct winsize*) ;
 int FUNC_4 (struct vt_window*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct vt_device*,int ,int *) ;
 int FUNC_6 (struct vt_device*,int ,struct winsize*) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct vt_window *
FUNC_9(struct vt_device *VAR_7, unsigned int VAR_8)
{
 struct vt_window *VAR_9;
 struct terminal *VAR_10;
 term_pos_t VAR_11;
 struct winsize VAR_12;

 VAR_9 = FUNC_1(sizeof *VAR_9, VAR_1, VAR_2|VAR_3);
 VAR_9->vw_device = VAR_7;
 VAR_9->vw_number = VAR_8;
 VAR_9->vw_kbdmode = VAR_0;

 if ((VAR_7->vd_flags & VAR_4) == 0) {
  VAR_9->vw_font = FUNC_8(&VAR_5);
  FUNC_4(VAR_9);
 }

 FUNC_5(VAR_7, VAR_9->vw_font, &VAR_11);
 FUNC_6(VAR_7, VAR_9->vw_font, &VAR_12);
 VAR_10 = VAR_9->vw_terminal = FUNC_2(&VAR_6, VAR_9);
 VAR_9->vw_buf.vb_terminal = VAR_10;
 FUNC_7(&VAR_9->vw_buf, &VAR_11);

 FUNC_3(VAR_10, &VAR_12);
 VAR_7->vd_windows[VAR_8] = VAR_9;
 FUNC_0(&VAR_9->vw_proc_dead_timer, 0);

 return (VAR_9);
}
