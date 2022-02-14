
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct thread {int dummy; } ;
struct beri_vtblk_softc {int * cred; TYPE_1__* vnode; } ;
struct TYPE_4__ {int v_vflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int,int *,struct thread*) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_4(struct beri_vtblk_softc *VAR_5, struct thread *VAR_6)
{
 int VAR_7;

 if (VAR_5->vnode != ((void*)0)) {
  FUNC_3(VAR_5->vnode, VAR_2 | VAR_3);
  VAR_5->vnode->v_vflag &= ~VAR_4;
  FUNC_0(VAR_5->vnode, 0);
  VAR_7 = FUNC_2(VAR_5->vnode, (VAR_0|VAR_1),
    VAR_5->cred, VAR_6);
  if (VAR_7 != 0)
   return (VAR_7);
  VAR_5->vnode = ((void*)0);
 }

 if (VAR_5->cred != ((void*)0))
  FUNC_1(VAR_5->cred);

 return (0);
}
