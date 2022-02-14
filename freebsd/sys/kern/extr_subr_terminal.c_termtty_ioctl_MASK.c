
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int fore; int back; } ;
struct TYPE_8__ {int fore; int back; } ;
struct TYPE_11__ {int size; TYPE_2__ mv_rev; TYPE_1__ mv_norm; int mv_csz; int mv_rsz; int mv_col; int mv_row; } ;
typedef TYPE_4__ vid_info_t ;
typedef int u_long ;
struct TYPE_12__ {int tp_col; int tp_row; } ;
typedef TYPE_5__ teken_pos_t ;
struct tty {int dummy; } ;
struct thread {int dummy; } ;
struct terminal {TYPE_3__* tm_class; int tm_emulator; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_10__ {int (* tc_ioctl ) (struct terminal*,int ,scalar_t__,struct thread*) ;} ;



 int VAR_0 ;
 int FUNC_0 (struct terminal*,int ,scalar_t__,struct thread*) ;
 TYPE_5__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int*,int*) ;
 TYPE_5__* FUNC_3 (int *) ;
 int FUNC_4 (struct tty*) ;
 struct terminal* FUNC_5 (struct tty*) ;
 int FUNC_6 (struct tty*) ;

__attribute__((used)) static int
FUNC_7(struct tty *VAR_1, u_long VAR_2, caddr_t VAR_3, struct thread *VAR_4)
{
 struct terminal *VAR_5 = FUNC_5(VAR_1);
 int VAR_6;

 switch (VAR_2) {
 case 128: {
  vid_info_t *VAR_7 = (vid_info_t *)VAR_3;
  const teken_pos_t *VAR_8;
  int VAR_9, VAR_10;

  if (VAR_7->size != sizeof(vid_info_t))
   return (VAR_0);


  VAR_8 = FUNC_1(&VAR_5->tm_emulator);
  VAR_7->mv_row = VAR_8->tp_row;
  VAR_7->mv_col = VAR_8->tp_col;

  VAR_8 = FUNC_3(&VAR_5->tm_emulator);
  VAR_7->mv_rsz = VAR_8->tp_row;
  VAR_7->mv_csz = VAR_8->tp_col;

  FUNC_2(&VAR_5->tm_emulator, &VAR_9, &VAR_10);
  VAR_7->mv_norm.fore = VAR_9;
  VAR_7->mv_norm.back = VAR_10;

  VAR_7->mv_rev.fore = VAR_10;
  VAR_7->mv_rev.back = VAR_9 & 0x7;
  break;
 }
 }






 FUNC_6(VAR_1);
 VAR_6 = VAR_5->tm_class->tc_ioctl(VAR_5, VAR_2, VAR_3, VAR_4);
 FUNC_4(VAR_1);
 return (VAR_6);
}
