
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vop_open_args {int a_mode; int a_td; TYPE_1__* a_vp; } ;
struct TYPE_5__ {int i_flags; int i_size; } ;
struct TYPE_4__ {scalar_t__ v_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct vop_open_args *VAR_7)
{

 if (VAR_7->a_vp->v_type == VAR_5 || VAR_7->a_vp->v_type == VAR_6)
  return (VAR_1);




 if ((FUNC_0(VAR_7->a_vp)->i_flags & VAR_0) &&
     (VAR_7->a_mode & (VAR_3 | VAR_4)) == VAR_3)
  return (VAR_2);

 FUNC_1(VAR_7->a_vp, FUNC_0(VAR_7->a_vp)->i_size, VAR_7->a_td);

 return (0);
}
