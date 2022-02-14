
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_rmdir_args {int a_gen; int a_vp; } ;
struct TYPE_2__ {int null_flags; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct vop_rmdir_args *VAR_1)
{

 FUNC_0(VAR_1->a_vp)->null_flags |= VAR_0;
 return (FUNC_1(&VAR_1->a_gen));
}
