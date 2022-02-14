
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_fdatasync_args {int a_td; int a_vp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct vop_fdatasync_args *VAR_1)
{

 return (FUNC_0(VAR_1->a_vp, VAR_0, VAR_1->a_td));
}
