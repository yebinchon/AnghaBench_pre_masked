
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vop_bmap_args {int * a_bnp; int a_runb; int a_runp; int a_bn; int a_vp; int ** a_bop; } ;
typedef int daddr_t ;
struct TYPE_4__ {int i_flag; TYPE_1__* i_devvp; } ;
struct TYPE_3__ {int v_bufobj; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *,int ,int ) ;
 int FUNC_2 (int ,int ,int *,int ,int ) ;

int
FUNC_3(struct vop_bmap_args *VAR_1)
{
 daddr_t VAR_2;
 int VAR_3;





 if (VAR_1->a_bop != ((void*)0))
  *VAR_1->a_bop = &FUNC_0(VAR_1->a_vp)->i_devvp->v_bufobj;
 if (VAR_1->a_bnp == ((void*)0))
  return (0);

 if (FUNC_0(VAR_1->a_vp)->i_flag & VAR_0)
  VAR_3 = FUNC_2(VAR_1->a_vp, VAR_1->a_bn, &VAR_2,
      VAR_1->a_runp, VAR_1->a_runb);
 else
  VAR_3 = FUNC_1(VAR_1->a_vp, VAR_1->a_bn, &VAR_2,
      VAR_1->a_runp, VAR_1->a_runb);
 *VAR_1->a_bnp = VAR_2;
 return (VAR_3);
}
