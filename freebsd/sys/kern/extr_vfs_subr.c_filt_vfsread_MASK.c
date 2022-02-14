
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {scalar_t__ v_type; } ;
struct vattr {scalar_t__ va_size; } ;
struct knote {int kn_flags; scalar_t__ kn_data; int kn_sfflags; TYPE_1__* kn_fp; scalar_t__ kn_hook; } ;
struct TYPE_4__ {int td_ucred; } ;
struct TYPE_3__ {scalar_t__ f_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*) ;
 scalar_t__ FUNC_2 (struct vnode*,struct vattr*,int ) ;
 TYPE_2__* VAR_5 ;

__attribute__((used)) static int
FUNC_3(struct knote *VAR_6, long VAR_7)
{
 struct vnode *VAR_8 = (struct vnode *)VAR_6->kn_hook;
 struct vattr VAR_9;
 int VAR_10;





 if (VAR_7 == VAR_3 || (VAR_7 == 0 && VAR_8->v_type == VAR_4)) {
  FUNC_0(VAR_8);
  VAR_6->kn_flags |= (VAR_0 | VAR_1);
  FUNC_1(VAR_8);
  return (1);
 }

 if (FUNC_2(VAR_8, &VAR_9, VAR_5->td_ucred))
  return (0);

 FUNC_0(VAR_8);
 VAR_6->kn_data = VAR_9.va_size - VAR_6->kn_fp->f_offset;
 VAR_10 = (VAR_6->kn_sfflags & VAR_2) != 0 || VAR_6->kn_data != 0;
 FUNC_1(VAR_8);
 return (VAR_10);
}
