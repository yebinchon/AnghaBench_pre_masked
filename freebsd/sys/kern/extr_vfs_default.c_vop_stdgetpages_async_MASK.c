
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_getpages_async_args {int a_count; int a_m; int a_arg; int (* a_iodone ) (int ,int ,int ,int) ;int a_rahead; int a_rbehind; int a_vp; } ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct vop_getpages_async_args *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0->a_vp, VAR_0->a_m, VAR_0->a_count, VAR_0->a_rbehind,
     VAR_0->a_rahead);
 VAR_0->a_iodone(VAR_0->a_arg, VAR_0->a_m, VAR_0->a_count, VAR_1);
 return (VAR_1);
}
