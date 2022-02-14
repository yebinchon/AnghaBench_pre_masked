
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; } ;
struct knote {int kn_flags; scalar_t__ kn_data; scalar_t__ kn_hook; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*) ;

__attribute__((used)) static int
FUNC_2(struct knote *VAR_4, long VAR_5)
{
 struct vnode *VAR_6 = (struct vnode *)VAR_4->kn_hook;

 FUNC_0(VAR_6);





 if (VAR_5 == VAR_2 || (VAR_5 == 0 && VAR_6->v_type == VAR_3))
  VAR_4->kn_flags |= (VAR_0 | VAR_1);

 VAR_4->kn_data = 0;
 FUNC_1(VAR_6);
 return (1);
}
