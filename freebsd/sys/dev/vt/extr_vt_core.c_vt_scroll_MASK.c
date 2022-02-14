
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int term_pos_t ;
struct vt_window {int vw_flags; TYPE_1__* vw_device; int vw_buf; int vw_font; } ;
struct TYPE_2__ {int vd_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vt_window*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;
 int FUNC_2 (int *,int,int) ;

__attribute__((used)) static void
FUNC_3(struct vt_window *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 term_pos_t VAR_6;

 if ((VAR_2->vw_flags & VAR_1) == 0)
  return;

 FUNC_1(VAR_2->vw_device, VAR_2->vw_font, &VAR_6);

 VAR_5 = FUNC_2(&VAR_2->vw_buf, VAR_3, VAR_4);
 if (VAR_5)
  VAR_2->vw_device->vd_flags |= VAR_0;
 FUNC_0(VAR_2, 0);
}
