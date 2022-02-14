
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_close_args {scalar_t__ a_cred; int a_fflag; TYPE_1__* a_vp; } ;
struct TYPE_2__ {int v_iflag; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_4 ;

void
FUNC_1(void *VAR_5, int VAR_6)
{
 struct vop_close_args *VAR_7 = VAR_5;

 if (!VAR_6 && (VAR_7->a_cred != VAR_1 ||
     (VAR_7->a_vp->v_iflag & VAR_4) == 0)) {
  FUNC_0(VAR_7->a_vp, (VAR_7->a_fflag & VAR_0) != 0 ?
      VAR_3 : VAR_2);
 }
}
