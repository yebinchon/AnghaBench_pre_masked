
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int fore; int back; } ;
struct TYPE_4__ {int fore; int back; } ;
struct TYPE_6__ {int size; TYPE_2__ mv_rev; TYPE_1__ mv_norm; } ;
typedef TYPE_3__ vid_info_t ;
typedef int u_long ;
struct vid_info {int dummy; } ;
struct tty {int dummy; } ;
struct thread {int dummy; } ;
typedef int scr_stat ;
typedef scalar_t__ caddr_t ;



 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(scr_stat *VAR_3, struct tty *VAR_4, u_long VAR_5, caddr_t VAR_6,
    struct thread *VAR_7)
{
 vid_info_t *VAR_8;

 switch (VAR_5) {
 case 128:
  *(int*)VAR_6 = VAR_2;
  return 0;
 case 129:
  VAR_8 = (vid_info_t *)VAR_6;
  if (VAR_8->size != sizeof(struct vid_info))
   return VAR_0;
  VAR_8->mv_norm.fore = VAR_2 & 0x0f;
  VAR_8->mv_norm.back = (VAR_2 >> 4) & 0x0f;
  VAR_8->mv_rev.fore = VAR_2 & 0x0f;
  VAR_8->mv_rev.back = (VAR_2 >> 4) & 0x0f;



  return VAR_1;
 }
 return VAR_1;
}
