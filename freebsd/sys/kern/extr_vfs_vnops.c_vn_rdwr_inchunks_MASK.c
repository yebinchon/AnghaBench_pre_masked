
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uoff_t ;
struct vnode {scalar_t__ v_type; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
typedef size_t ssize_t ;
typedef int off_t ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;
typedef enum uio_rw { ____Placeholder_uio_rw } uio_rw ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,struct vnode*,void*,int,int,int,int,struct ucred*,struct ucred*,size_t*,struct thread*) ;

int
FUNC_3(enum uio_rw VAR_4, struct vnode *VAR_5, void *VAR_6, size_t VAR_7,
    off_t VAR_8, enum uio_seg VAR_9, int VAR_10, struct ucred *VAR_11,
    struct ucred *VAR_12, size_t *VAR_13, struct thread *VAR_14)
{
 int VAR_15 = 0;
 ssize_t VAR_16;

 do {
  int VAR_17;







  VAR_17 = VAR_0 - (uoff_t)VAR_8 % VAR_0;

  if (VAR_17 > VAR_7)
   VAR_17 = VAR_7;
  if (VAR_4 != VAR_2 && VAR_5->v_type == VAR_3)
   FUNC_0();
  VAR_16 = 0;
  VAR_15 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_17, VAR_8, VAR_9,
      VAR_10, VAR_11, VAR_12, &VAR_16, VAR_14);
  VAR_7 -= VAR_17;
  if (VAR_15)
   break;
  VAR_8 += VAR_17;
  VAR_6 = (char *)VAR_6 + VAR_17;
  FUNC_1(VAR_1);
 } while (VAR_7);
 if (VAR_13)
  *VAR_13 = VAR_7 + VAR_16;
 return (VAR_15);
}
