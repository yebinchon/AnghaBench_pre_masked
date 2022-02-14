
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uoff_t ;
struct vnode {scalar_t__ v_type; } ;
struct uio {scalar_t__ uio_resid; scalar_t__ uio_offset; } ;
struct thread {int td_proc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct thread*,int ) ;

int
FUNC_4(const struct vnode *VAR_4, const struct uio *VAR_5,
    struct thread *VAR_6)
{

 if (VAR_4->v_type != VAR_3 || VAR_6 == ((void*)0))
  return (0);
 if ((uoff_t)VAR_5->uio_offset + VAR_5->uio_resid >
     FUNC_3(VAR_6, VAR_1)) {
  FUNC_0(VAR_6->td_proc);
  FUNC_2(VAR_6->td_proc, VAR_2);
  FUNC_1(VAR_6->td_proc);
  return (VAR_0);
 }
 return (0);
}
