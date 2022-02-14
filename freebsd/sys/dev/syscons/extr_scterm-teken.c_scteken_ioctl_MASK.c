
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int fore; int back; } ;
struct TYPE_7__ {int fore; int back; } ;
struct TYPE_9__ {int size; TYPE_2__ mv_norm; TYPE_1__ mv_rev; } ;
typedef TYPE_3__ vid_info_t ;
typedef int u_long ;
struct TYPE_10__ {int ts_teken; } ;
typedef TYPE_4__ teken_stat ;
struct vid_info {int dummy; } ;
struct tty {int dummy; } ;
struct thread {int dummy; } ;
struct TYPE_11__ {TYPE_4__* ts; } ;
typedef TYPE_5__ scr_stat ;
typedef scalar_t__ caddr_t ;



 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(scr_stat *VAR_2, struct tty *VAR_3, u_long VAR_4, caddr_t VAR_5,
      struct thread *VAR_6)
{
 teken_stat *VAR_7 = VAR_2->ts;
 vid_info_t *VAR_8;
 int VAR_9;

 switch (VAR_4) {
 case 128:
  *(int*)VAR_5 =
      FUNC_0(FUNC_1(&VAR_7->ts_teken));
  return (0);
 case 129:
  VAR_8 = (vid_info_t *)VAR_5;
  if (VAR_8->size != sizeof(struct vid_info))
   return VAR_0;

  VAR_9 = FUNC_0(FUNC_2(&VAR_7->ts_teken));
  VAR_8->mv_norm.fore = VAR_9 & 0x0f;
  VAR_8->mv_norm.back = (VAR_9 >> 4) & 0x0f;
  VAR_8->mv_rev.fore = VAR_8->mv_norm.back;
  VAR_8->mv_rev.back = VAR_8->mv_norm.fore;



  return (VAR_1);
 }

 return (VAR_1);
}
