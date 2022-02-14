
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct vop_rename_args {TYPE_1__* a_tvp; TYPE_1__* a_tdvp; TYPE_1__* a_fvp; TYPE_1__* a_fdvp; } ;
struct TYPE_5__ {scalar_t__ v_vnlock; } ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(void *VAR_0)
{
 struct vop_rename_args *VAR_1 = VAR_0;
 if (VAR_1->a_tdvp != VAR_1->a_fdvp)
  FUNC_3(VAR_1->a_fdvp);
 if (VAR_1->a_tvp != VAR_1->a_fvp)
  FUNC_3(VAR_1->a_fvp);
 FUNC_3(VAR_1->a_tdvp);
 if (VAR_1->a_tvp)
  FUNC_3(VAR_1->a_tvp);
}
