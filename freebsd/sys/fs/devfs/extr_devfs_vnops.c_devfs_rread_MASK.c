
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_read_args {int a_cred; int a_uio; TYPE_1__* a_vp; } ;
struct TYPE_2__ {scalar_t__ v_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int *,int *,int *) ;

__attribute__((used)) static int
FUNC_1(struct vop_read_args *VAR_2)
{

 if (VAR_2->a_vp->v_type != VAR_1)
  return (VAR_0);
 return (FUNC_0(VAR_2->a_vp, VAR_2->a_uio, VAR_2->a_cred, ((void*)0), ((void*)0), ((void*)0)));
}
