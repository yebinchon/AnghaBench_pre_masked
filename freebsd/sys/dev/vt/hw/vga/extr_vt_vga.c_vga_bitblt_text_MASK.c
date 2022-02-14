
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int term_rect_t ;
struct vt_window {int dummy; } ;
struct vt_device {int vd_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct vt_device*,struct vt_window const*,int const*) ;
 int FUNC_1 (struct vt_device*,struct vt_window const*,int const*) ;

__attribute__((used)) static void
FUNC_2(struct vt_device *VAR_1, const struct vt_window *VAR_2,
    const term_rect_t *VAR_3)
{

 if (!(VAR_1->vd_flags & VAR_0)) {
  FUNC_0(VAR_1, VAR_2, VAR_3);
 } else {
  FUNC_1(VAR_1, VAR_2, VAR_3);
 }
}
