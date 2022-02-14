
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vop_pathconf_args {int a_name; int* a_retval; TYPE_4__* a_vp; } ;
struct TYPE_8__ {TYPE_2__* v_mount; int v_type; } ;
struct TYPE_7__ {int i_e2fs; } ;
struct TYPE_5__ {int f_iosize; int f_bsize; } ;
struct TYPE_6__ {int mnt_flag; TYPE_1__ mnt_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_3__* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct vop_pathconf_args*) ;

__attribute__((used)) static int
FUNC_3(struct vop_pathconf_args *VAR_12)
{
 int VAR_13 = 0;

 switch (VAR_12->a_name) {
 case 139:
  if (FUNC_0(FUNC_1(VAR_12->a_vp)->i_e2fs,
      VAR_2))
   *VAR_12->a_retval = VAR_4;
  else
   *VAR_12->a_retval = VAR_3;
  break;
 case 137:
  *VAR_12->a_retval = VAR_7;
  break;
 case 135:
  if (VAR_12->a_vp->v_type == VAR_10 || VAR_12->a_vp->v_type == VAR_11)
   *VAR_12->a_retval = VAR_9;
  else
   VAR_13 = VAR_1;
  break;
 case 141:
  *VAR_12->a_retval = 1;
  break;
 case 136:
  *VAR_12->a_retval = 1;
  break;
 case 138:
  *VAR_12->a_retval = VAR_12->a_vp->v_mount->mnt_stat.f_iosize;
  break;
 case 134:
  *VAR_12->a_retval = 0;
  break;
 case 128:
  *VAR_12->a_retval = 0;
  break;
 case 142:
  *VAR_12->a_retval = VAR_12->a_vp->v_mount->mnt_stat.f_bsize;
  break;
 case 140:
  *VAR_12->a_retval = 64;
  break;
 case 133:
  *VAR_12->a_retval = VAR_12->a_vp->v_mount->mnt_stat.f_iosize;
  break;
 case 132:
  *VAR_12->a_retval = -1;
  break;
 case 131:
  *VAR_12->a_retval = VAR_12->a_vp->v_mount->mnt_stat.f_iosize;
  break;
 case 130:
  *VAR_12->a_retval = VAR_8;
  break;
 case 129:
  *VAR_12->a_retval = VAR_5;
  break;

 default:
  VAR_13 = FUNC_2(VAR_12);
  break;
 }
 return (VAR_13);
}
