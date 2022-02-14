
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_getpages_args {int a_rahead; int a_rbehind; int a_count; int a_m; int a_vp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int *,int *) ;

__attribute__((used)) static int
FUNC_2(struct vop_getpages_args *VAR_3)
{

 if (VAR_2)
  return (FUNC_0(VAR_3->a_vp, VAR_3->a_m, VAR_3->a_count,
      VAR_3->a_rbehind, VAR_3->a_rahead, VAR_0,
      VAR_1));
 return (FUNC_1(VAR_3->a_vp, VAR_3->a_m, VAR_3->a_count,
     VAR_3->a_rbehind, VAR_3->a_rahead, ((void*)0), ((void*)0)));
}
