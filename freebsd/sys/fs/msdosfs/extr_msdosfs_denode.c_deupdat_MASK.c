
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct direntry {int dummy; } ;
struct denode {int de_flag; scalar_t__ de_refcnt; } ;
struct buf {int b_flags; } ;
typedef int dir ;
struct TYPE_4__ {int v_vflag; TYPE_1__* v_mount; } ;
struct TYPE_3__ {int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct denode*,struct timespec*,struct timespec*,struct timespec*) ;
 TYPE_2__* FUNC_1 (struct denode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct direntry*,struct denode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct buf*) ;
 scalar_t__ FUNC_4 (struct direntry*,struct direntry*,int) ;
 int FUNC_5 (struct buf*) ;
 int FUNC_6 (struct buf*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (struct buf*) ;
 int FUNC_9 (struct denode*,struct buf**,struct direntry**) ;
 int FUNC_10 (struct timespec*) ;
 scalar_t__ FUNC_11 () ;

int
FUNC_12(struct denode *VAR_10, int VAR_11)
{
 struct direntry VAR_12;
 struct timespec VAR_13;
 struct buf *VAR_14;
 struct direntry *VAR_15;
 int VAR_16;

 if (FUNC_1(VAR_10)->v_mount->mnt_flag & VAR_8) {
  VAR_10->de_flag &= ~(VAR_5 | VAR_3 | VAR_2 |
      VAR_4);
  return (0);
 }
 FUNC_10(&VAR_13);
 FUNC_0(VAR_10, &VAR_13, &VAR_13, &VAR_13);
 if ((VAR_10->de_flag & VAR_4) == 0 && VAR_11 == 0)
  return (0);
 VAR_10->de_flag &= ~VAR_4;
 if (FUNC_1(VAR_10)->v_vflag & VAR_9)
  return (VAR_6);
 if (VAR_10->de_refcnt <= 0)
  return (0);
 VAR_16 = FUNC_9(VAR_10, &VAR_14, &VAR_15);
 if (VAR_16)
  return (VAR_16);
 FUNC_2(&VAR_12, VAR_10);
 if (FUNC_4(VAR_15, &VAR_12, sizeof(VAR_12)) == 0) {
  if (VAR_11 == 0 || (VAR_14->b_flags & VAR_1) == 0) {
   FUNC_6(VAR_14);
   return (0);
  }
 } else
  *VAR_15 = VAR_12;
 if ((FUNC_1(VAR_10)->v_mount->mnt_flag & VAR_7) == 0)
  VAR_14->b_flags |= VAR_0;
 if (VAR_11)
  VAR_16 = FUNC_8(VAR_14);
 else if (FUNC_11() || FUNC_7())
  FUNC_3(VAR_14);
 else
  FUNC_5(VAR_14);
 return (VAR_16);
}
