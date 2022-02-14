
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {TYPE_2__* v_pollinfo; } ;
struct knote {scalar_t__ kn_hook; } ;
struct TYPE_3__ {int si_note; } ;
struct TYPE_4__ {TYPE_1__ vpi_selinfo; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,struct knote*,int ) ;
 int FUNC_2 (struct vnode*) ;

__attribute__((used)) static void
FUNC_3(struct knote *VAR_0)
{
 struct vnode *VAR_1 = (struct vnode *)VAR_0->kn_hook;

 FUNC_0(VAR_1->v_pollinfo != ((void*)0), ("Missing v_pollinfo"));
 FUNC_1(&VAR_1->v_pollinfo->vpi_selinfo.si_note, VAR_0, 0);
 FUNC_2(VAR_1);
}
