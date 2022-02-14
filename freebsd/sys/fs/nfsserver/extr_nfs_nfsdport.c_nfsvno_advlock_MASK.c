
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int64_t ;
struct vnode {int dummy; } ;
struct thread {scalar_t__ td_proc; } ;
struct flock {int l_type; int l_sysid; scalar_t__ l_pid; void* l_len; void* l_start; int l_whence; } ;
typedef scalar_t__ pid_t ;
typedef void* off_t ;
typedef int caddr_t ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (struct vnode*,int ,int,struct flock*,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 () ;

int
FUNC_4(struct vnode *VAR_8, int VAR_9, u_int64_t VAR_10,
    u_int64_t VAR_11, struct thread *VAR_12)
{
 int VAR_13 = 0;
 struct flock VAR_14;
 u_int64_t VAR_15;

 if (VAR_6 == 0)
  goto out;
 FUNC_0(VAR_8, "nfsvno_advlock: vp locked");

 VAR_14.l_whence = VAR_5;
 VAR_14.l_type = VAR_9;
 VAR_14.l_start = (off_t)VAR_10;
 if (VAR_11 == VAR_4) {
  VAR_14.l_len = 0;
 } else {
  VAR_15 = VAR_11 - VAR_10;
  VAR_14.l_len = (off_t)VAR_15;
 }
 if (VAR_7 == 0)
  VAR_7 = FUNC_3();
 VAR_14.l_pid = (pid_t)0;
 VAR_14.l_sysid = (int)VAR_7;

 if (VAR_9 == VAR_3)
  VAR_13 = FUNC_2(VAR_8, (caddr_t)VAR_12->td_proc, VAR_3, &VAR_14,
      (VAR_0 | VAR_1));
 else
  VAR_13 = FUNC_2(VAR_8, (caddr_t)VAR_12->td_proc, VAR_2, &VAR_14,
      (VAR_0 | VAR_1));

out:
 FUNC_1(VAR_13);
 return (VAR_13);
}
