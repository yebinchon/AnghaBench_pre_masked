
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct vnode {scalar_t__ v_type; scalar_t__ v_mount; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct vnode*,scalar_t__*,struct vnode*,scalar_t__*,size_t*,unsigned int,struct ucred*,struct ucred*,struct thread*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct vnode*,scalar_t__*,struct vnode*,scalar_t__*,size_t*,unsigned int,struct ucred*,struct ucred*,struct thread*) ;

int
FUNC_2(struct vnode *VAR_5, off_t *VAR_6, struct vnode *VAR_7,
    off_t *VAR_8, size_t *VAR_9, unsigned int VAR_10, struct ucred *VAR_11,
    struct ucred *VAR_12, struct thread *VAR_13)
{
 int VAR_14;
 size_t VAR_15;
 uint64_t VAR_16, VAR_17;

 VAR_15 = *VAR_9;
 *VAR_9 = 0;
 VAR_14 = 0;


 VAR_16 = *VAR_6;
 VAR_16 += VAR_15;
 VAR_17 = *VAR_8;
 VAR_17 += VAR_15;
 if (VAR_5->v_type == VAR_3 || VAR_7->v_type == VAR_3)
  VAR_14 = VAR_1;
 else if (*VAR_6 < 0 || VAR_16 > VAR_2 || VAR_16 <
     (uint64_t)*VAR_6 || *VAR_8 < 0 || VAR_17 > VAR_2 ||
     VAR_17 < (uint64_t)*VAR_8 || VAR_5->v_type != VAR_4 ||
     VAR_7->v_type != VAR_4)
  VAR_14 = VAR_0;
 if (VAR_14 != 0)
  goto out;






 *VAR_9 = VAR_15;
 if (VAR_5->v_mount == VAR_7->v_mount)
  VAR_14 = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8,
      VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
 else
  VAR_14 = FUNC_1(VAR_5, VAR_6, VAR_7,
      VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
out:
 return (VAR_14);
}
