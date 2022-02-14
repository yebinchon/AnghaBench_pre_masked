
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {scalar_t__ v_type; } ;
struct TYPE_2__ {int flag; int parent_nid; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*) ;

__attribute__((used)) static inline void
FUNC_3(struct vnode *VAR_2, struct vnode *VAR_3)
{
 if (VAR_3 != ((void*)0) && VAR_2->v_type == VAR_1) {
  FUNC_0(VAR_3->v_type == VAR_1);
  FUNC_1(VAR_2)->parent_nid = FUNC_2(VAR_3);
  FUNC_1(VAR_2)->flag |= VAR_0;
 } else {
  FUNC_1(VAR_2)->flag &= ~VAR_0;
 }
}
