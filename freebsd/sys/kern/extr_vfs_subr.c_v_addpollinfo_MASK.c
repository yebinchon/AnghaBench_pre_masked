
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct vpollinfo {TYPE_1__ vpi_selinfo; int vpi_lock; } ;
struct vnode {struct vpollinfo* v_pollinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vpollinfo*) ;
 int FUNC_3 (int *,struct vnode*,int ,int ,int ,int ) ;
 int FUNC_4 (int *,char*,int *,int ) ;
 struct vpollinfo* FUNC_5 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_6(struct vnode *VAR_8)
{
 struct vpollinfo *VAR_9;

 if (VAR_8->v_pollinfo != ((void*)0))
  return;
 VAR_9 = FUNC_5(VAR_7, VAR_1 | VAR_2);
 FUNC_4(&VAR_9->vpi_lock, "vnode pollinfo", ((void*)0), VAR_0);
 FUNC_3(&VAR_9->vpi_selinfo.si_note, VAR_8, VAR_5,
     VAR_6, VAR_3, VAR_4);
 FUNC_0(VAR_8);
 if (VAR_8->v_pollinfo != ((void*)0)) {
  FUNC_1(VAR_8);
  FUNC_2(VAR_9);
  return;
 }
 VAR_8->v_pollinfo = VAR_9;
 FUNC_1(VAR_8);
}
