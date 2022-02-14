
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vop_kqfilter_args {struct knote* a_kn; struct vnode* a_vp; } ;
struct vnode {TYPE_2__* v_pollinfo; } ;
struct knote {int kn_filter; scalar_t__ kn_hook; int * kn_fop; } ;
struct knlist {int dummy; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_3__ {struct knlist si_note; } ;
struct TYPE_4__ {TYPE_1__ vpi_selinfo; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct knlist*,struct knote*,int ) ;
 int FUNC_1 (struct vnode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct vnode*) ;

int
FUNC_3(struct vop_kqfilter_args *VAR_5)
{
 struct vnode *VAR_6 = VAR_5->a_vp;
 struct knote *VAR_7 = VAR_5->a_kn;
 struct knlist *VAR_8;

 switch (VAR_7->kn_filter) {
 case 130:
  VAR_7->kn_fop = &VAR_2;
  break;
 case 128:
  VAR_7->kn_fop = &VAR_4;
  break;
 case 129:
  VAR_7->kn_fop = &VAR_3;
  break;
 default:
  return (VAR_0);
 }

 VAR_7->kn_hook = (caddr_t)VAR_6;

 FUNC_1(VAR_6);
 if (VAR_6->v_pollinfo == ((void*)0))
  return (VAR_1);
 VAR_8 = &VAR_6->v_pollinfo->vpi_selinfo.si_note;
 FUNC_2(VAR_6);
 FUNC_0(VAR_8, VAR_7, 0);

 return (0);
}
