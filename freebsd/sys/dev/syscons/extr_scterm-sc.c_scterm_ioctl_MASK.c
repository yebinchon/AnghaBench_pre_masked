
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int back; int fore; } ;
struct TYPE_9__ {int back; int fore; } ;
struct TYPE_13__ {int size; TYPE_3__ mv_rev; TYPE_1__ mv_norm; } ;
typedef TYPE_5__ vid_info_t ;
typedef int u_long ;
struct TYPE_12__ {int bg; int fg; } ;
struct TYPE_10__ {int bg; int fg; } ;
struct TYPE_14__ {int cur_attr; TYPE_4__ rev_color; TYPE_2__ std_color; } ;
typedef TYPE_6__ term_stat ;
struct vid_info {int dummy; } ;
struct tty {int dummy; } ;
struct thread {int dummy; } ;
struct TYPE_15__ {TYPE_6__* ts; } ;
typedef TYPE_7__ scr_stat ;
typedef scalar_t__ caddr_t ;



 int VAR_0 ;
 int VAR_1 ;


__attribute__((used)) static int
FUNC_0(scr_stat *VAR_2, struct tty *VAR_3, u_long VAR_4, caddr_t VAR_5,
      struct thread *VAR_6)
{
 term_stat *VAR_7 = VAR_2->ts;
 vid_info_t *VAR_8;

 switch (VAR_4) {
 case 128:

  *(int*)VAR_5 = (VAR_7->cur_attr >> 8) & 0xff;
  return 0;
 case 129:
  VAR_8 = (vid_info_t *)VAR_5;
  if (VAR_8->size != sizeof(struct vid_info))
   return VAR_0;
  VAR_8->mv_norm.fore = VAR_7->std_color.fg;
  VAR_8->mv_norm.back = VAR_7->std_color.bg;
  VAR_8->mv_rev.fore = VAR_7->rev_color.fg;
  VAR_8->mv_rev.back = VAR_7->rev_color.bg;



  return VAR_1;
 }
 return VAR_1;
}
