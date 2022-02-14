
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ u_long ;
struct vnode {scalar_t__ v_type; TYPE_2__* v_mount; } ;
struct vattr {int va_size; } ;
struct ucred {int dummy; } ;
typedef int off_t ;
typedef int daddr_t ;
struct TYPE_3__ {int f_iosize; } ;
struct TYPE_4__ {TYPE_1__ mnt_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,char*) ;
 int VAR_6 ;
 int FUNC_1 (struct vnode*,int,int *,int*,int *,int *) ;
 int FUNC_2 (struct vnode*,struct vattr*,struct ucred*) ;
 int FUNC_3 (struct vnode*,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 (struct vnode*,int ) ;

int
FUNC_5(struct vnode *VAR_8, u_long VAR_9, off_t *VAR_10, struct ucred *VAR_11)
{
 struct vattr VAR_12;
 daddr_t VAR_13, VAR_14;
 uint64_t VAR_15;
 off_t VAR_16;
 int VAR_17;

 FUNC_0(VAR_9 == VAR_5 || VAR_9 == VAR_4,
     ("Wrong command %lu", VAR_9));

 if (FUNC_4(VAR_8, VAR_6) != 0)
  return (VAR_0);
 if (VAR_8->v_type != VAR_7) {
  VAR_17 = VAR_1;
  goto unlock;
 }
 VAR_17 = FUNC_2(VAR_8, &VAR_12, VAR_11);
 if (VAR_17 != 0)
  goto unlock;
 VAR_16 = *VAR_10;
 if (VAR_16 >= VAR_12.va_size) {
  VAR_17 = VAR_2;
  goto unlock;
 }
 VAR_15 = VAR_8->v_mount->mnt_stat.f_iosize;
 for (VAR_13 = VAR_16 / VAR_15; VAR_16 < VAR_12.va_size; VAR_13++, VAR_16 += VAR_15 -
     VAR_16 % VAR_15) {
  VAR_17 = FUNC_1(VAR_8, VAR_13, ((void*)0), &VAR_14, ((void*)0), ((void*)0));
  if (VAR_17 == VAR_3) {
   VAR_17 = VAR_1;
   goto unlock;
  }
  if ((VAR_14 == -1 && VAR_9 == VAR_5) ||
      (VAR_14 != -1 && VAR_9 == VAR_4)) {
   VAR_16 = VAR_13 * VAR_15;
   if (VAR_16 < *VAR_10)
    VAR_16 = *VAR_10;
   goto unlock;
  }
 }
 if (VAR_16 > VAR_12.va_size)
  VAR_16 = VAR_12.va_size;

 if (VAR_9 == VAR_4)
  VAR_17 = VAR_2;
unlock:
 FUNC_3(VAR_8, 0);
 if (VAR_17 == 0)
  *VAR_10 = VAR_16;
 return (VAR_17);
}
