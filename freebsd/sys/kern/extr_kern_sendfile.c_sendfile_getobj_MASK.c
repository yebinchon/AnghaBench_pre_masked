
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_3__* vm_object_t ;
struct vnode {scalar_t__ v_type; TYPE_3__* v_object; TYPE_2__* v_mount; } ;
struct vattr {int va_size; } ;
struct thread {int td_ucred; } ;
struct shmfd {int shm_size; TYPE_3__* shm_object; } ;
struct file {scalar_t__ f_type; struct shmfd* f_data; struct vnode* f_vnode; } ;
typedef int off_t ;
struct TYPE_10__ {int flags; } ;
struct TYPE_8__ {int f_iosize; } ;
struct TYPE_9__ {TYPE_1__ mnt_stat; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct vnode*,struct vattr*,int ) ;
 int FUNC_3 (struct vnode*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct vnode*,int) ;

__attribute__((used)) static int
FUNC_6(struct thread *VAR_8, struct file *VAR_9, vm_object_t *VAR_10,
    struct vnode **VAR_11, struct shmfd **VAR_12, off_t *VAR_13,
    int *VAR_14)
{
 struct vattr VAR_15;
 vm_object_t VAR_16;
 struct vnode *VAR_17;
 struct shmfd *VAR_18;
 int VAR_19;

 VAR_17 = *VAR_11 = ((void*)0);
 VAR_16 = ((void*)0);
 VAR_18 = *VAR_12 = ((void*)0);
 *VAR_14 = 0;





 if (VAR_9->f_type == VAR_1) {
  VAR_17 = VAR_9->f_vnode;
  FUNC_5(VAR_17, VAR_5 | VAR_4);
  if (VAR_17->v_type != VAR_7) {
   VAR_19 = VAR_3;
   goto out;
  }
  *VAR_14 = VAR_17->v_mount->mnt_stat.f_iosize;
  VAR_19 = FUNC_2(VAR_17, &VAR_15, VAR_8->td_ucred);
  if (VAR_19 != 0)
   goto out;
  *VAR_13 = VAR_15.va_size;
  VAR_16 = VAR_17->v_object;
  if (VAR_16 == ((void*)0)) {
   VAR_19 = VAR_3;
   goto out;
  }
 } else if (VAR_9->f_type == VAR_0) {
  VAR_19 = 0;
  VAR_18 = VAR_9->f_data;
  VAR_16 = VAR_18->shm_object;
  *VAR_13 = VAR_18->shm_size;
 } else {
  VAR_19 = VAR_3;
  goto out;
 }

 FUNC_0(VAR_16);
 if ((VAR_16->flags & VAR_6) != 0) {
  FUNC_1(VAR_16);
  VAR_19 = VAR_2;
  goto out;
 }






 FUNC_4(VAR_16);
 FUNC_1(VAR_16);
 *VAR_10 = VAR_16;
 *VAR_11 = VAR_17;
 *VAR_12 = VAR_18;

out:
 if (VAR_17 != ((void*)0))
  FUNC_3(VAR_17, 0);
 return (VAR_19);
}
