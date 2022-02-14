
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_fsync_args {scalar_t__ a_waitfor; int a_vp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct vop_fsync_args*) ;

__attribute__((used)) static int
FUNC_2(struct vop_fsync_args *VAR_1)
{




 FUNC_1(VAR_1);

 return (FUNC_0(VAR_1->a_vp, VAR_1->a_waitfor == VAR_0));
}
