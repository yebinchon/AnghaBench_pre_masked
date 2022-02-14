
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; } ;
struct knote {long kn_sfflags; long kn_fflags; int kn_flags; scalar_t__ kn_hook; } ;


 int VAR_0 ;
 long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*) ;

__attribute__((used)) static int
FUNC_2(struct knote *VAR_3, long VAR_4)
{
 struct vnode *VAR_5 = (struct vnode *)VAR_3->kn_hook;
 int VAR_6;

 FUNC_0(VAR_5);
 if (VAR_3->kn_sfflags & VAR_4)
  VAR_3->kn_fflags |= VAR_4;
 if (VAR_4 == VAR_1 || (VAR_4 == 0 && VAR_5->v_type == VAR_2)) {
  VAR_3->kn_flags |= VAR_0;
  FUNC_1(VAR_5);
  return (1);
 }
 VAR_6 = (VAR_3->kn_fflags != 0);
 FUNC_1(VAR_5);
 return (VAR_6);
}
