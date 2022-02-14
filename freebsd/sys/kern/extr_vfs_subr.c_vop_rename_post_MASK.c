
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vop_rename_args {TYPE_1__* a_tvp; TYPE_1__* a_tdvp; TYPE_1__* a_fvp; TYPE_1__* a_fdvp; } ;
struct TYPE_3__ {scalar_t__ v_type; } ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_1__*,long) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(void *VAR_6, int VAR_7)
{
 struct vop_rename_args *VAR_8 = VAR_6;
 long VAR_9;

 if (!VAR_7) {
  VAR_9 = VAR_4;
  if (VAR_8->a_fdvp == VAR_8->a_tdvp) {
   if (VAR_8->a_tvp != ((void*)0) && VAR_8->a_tvp->v_type == VAR_5)
    VAR_9 |= VAR_2;
   FUNC_0(VAR_8->a_fdvp, VAR_9);
   FUNC_0(VAR_8->a_tdvp, VAR_9);
  } else {
   VAR_9 |= VAR_1;
   if (VAR_8->a_fvp->v_type == VAR_5)
    VAR_9 |= VAR_2;
   FUNC_0(VAR_8->a_fdvp, VAR_9);

   if (VAR_8->a_fvp->v_type == VAR_5 && VAR_8->a_tvp != ((void*)0) &&
       VAR_8->a_tvp->v_type == VAR_5)
    VAR_9 &= ~VAR_2;
   FUNC_0(VAR_8->a_tdvp, VAR_9);
  }

  FUNC_0(VAR_8->a_fvp, VAR_3);
  if (VAR_8->a_tvp)
   FUNC_0(VAR_8->a_tvp, VAR_0);
 }
 if (VAR_8->a_tdvp != VAR_8->a_fdvp)
  FUNC_1(VAR_8->a_fdvp);
 if (VAR_8->a_tvp != VAR_8->a_fvp)
  FUNC_1(VAR_8->a_fvp);
 FUNC_1(VAR_8->a_tdvp);
 if (VAR_8->a_tvp)
  FUNC_1(VAR_8->a_tvp);
}
