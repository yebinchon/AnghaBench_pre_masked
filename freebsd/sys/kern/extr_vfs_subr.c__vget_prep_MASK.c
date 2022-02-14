
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; scalar_t__ v_usecount; } ;
typedef enum vgetstate { ____Placeholder_vgetstate } vgetstate ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct vnode*,int) ;
 int FUNC_4 (scalar_t__*) ;
 scalar_t__ FUNC_5 (scalar_t__*) ;
 int FUNC_6 (struct vnode*) ;
 int FUNC_7 (struct vnode*) ;

__attribute__((used)) static enum vgetstate
FUNC_8(struct vnode *VAR_3, bool VAR_4)
{
 enum vgetstate VAR_5;

 if (FUNC_2(VAR_3->v_type != VAR_0)) {
  if (FUNC_5(&VAR_3->v_usecount)) {
   VAR_5 = VAR_2;
  } else {
   FUNC_3(VAR_3, VAR_4);
   VAR_5 = VAR_1;
  }
 } else {
  if (!VAR_4)
   FUNC_0(VAR_3);
  if (VAR_3->v_usecount == 0) {
   FUNC_7(VAR_3);
   VAR_5 = VAR_1;
  } else {
   FUNC_6(VAR_3);
   FUNC_4(&VAR_3->v_usecount);
   VAR_5 = VAR_2;
  }
  if (!VAR_4)
   FUNC_1(VAR_3);
 }
 return (VAR_5);
}
