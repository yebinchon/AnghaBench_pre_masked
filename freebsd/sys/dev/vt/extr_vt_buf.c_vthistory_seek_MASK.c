
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tp_row; } ;
struct vt_buf {int vb_flags; int vb_roffset; int vb_curroffset; int vb_history_size; TYPE_1__ vb_scr_size; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;




int
FUNC_2(struct vt_buf *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;


 if ((VAR_2->vb_flags & VAR_1) == 0) {
  if (VAR_2->vb_roffset != VAR_2->vb_curroffset) {
   VAR_2->vb_roffset = VAR_2->vb_curroffset;
   return (0xffff);
  }
  return (0);
 }


 VAR_7 = VAR_2->vb_curroffset;
 VAR_6 = (VAR_2->vb_flags & VAR_0) ?
     VAR_7 + VAR_2->vb_scr_size.tp_row - VAR_2->vb_history_size :
     0;

 VAR_8 = 0;
 switch (VAR_4) {
 case 128:
  if (VAR_3 < 0)
   VAR_3 = 0;
  VAR_8 = VAR_6 + VAR_3;
  break;
 case 130:




  VAR_8 = VAR_2->vb_roffset;
  if (VAR_8 >= VAR_7 + VAR_2->vb_scr_size.tp_row)
   VAR_8 -= VAR_2->vb_history_size;

  VAR_8 += VAR_3;
  VAR_8 = FUNC_0(VAR_8, VAR_6);
  VAR_8 = FUNC_1(VAR_8, VAR_7);

  if (VAR_8 < 0)
   VAR_8 = VAR_2->vb_history_size + VAR_8;

  break;
 case 129:

  VAR_8 = VAR_2->vb_curroffset;
  break;
 }

 VAR_5 = VAR_2->vb_roffset != VAR_8;
 VAR_2->vb_roffset = VAR_8;

 return (VAR_5);
}
