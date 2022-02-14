
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vt_axis_t ;
struct TYPE_7__ {int ta_bgcolor; } ;
typedef TYPE_3__ teken_attr_t ;
struct vt_device {int vd_width; TYPE_2__* vd_driver; TYPE_1__* vd_curwindow; } ;
struct terminal {int tm_emulator; } ;
struct TYPE_6__ {int (* vd_blank ) (struct vt_device*,int ) ;int (* vd_drawrect ) (struct vt_device*,int ,int ,int,int ,int,int ) ;} ;
struct TYPE_5__ {struct terminal* vw_terminal; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct vt_device*,int ,int ,int,int ,int,int ) ;
 int FUNC_2 (struct vt_device*,int ) ;
 TYPE_3__* FUNC_3 (int *) ;
 int FUNC_4 (struct vt_device*,int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_5(struct vt_device *VAR_4)
{
 unsigned int VAR_5, VAR_6;
 vt_axis_t VAR_7;
 struct terminal *VAR_8 = VAR_4->vd_curwindow->vw_terminal;
 const teken_attr_t *VAR_9;

 if (VAR_3)
  VAR_5 = VAR_3;
 else {
  VAR_5 = VAR_0;
  if (VAR_5 < 1)
   VAR_5 = 1;
 }

 VAR_9 = FUNC_3(&VAR_8->tm_emulator);
 if (VAR_4->vd_driver->vd_drawrect)
  VAR_4->vd_driver->vd_drawrect(VAR_4, 0, 0, VAR_4->vd_width,
      VAR_1, 1, VAR_9->ta_bgcolor);




 else if (VAR_4->vd_driver->vd_blank)
  VAR_4->vd_driver->vd_blank(VAR_4, VAR_9->ta_bgcolor);

 VAR_5 = FUNC_0(VAR_5, VAR_4->vd_width / VAR_2);
 for (VAR_6 = 0, VAR_7 = 0; VAR_6 < VAR_5; VAR_7 += VAR_2, VAR_6++)
  FUNC_4(VAR_4, 0, VAR_7);
}
