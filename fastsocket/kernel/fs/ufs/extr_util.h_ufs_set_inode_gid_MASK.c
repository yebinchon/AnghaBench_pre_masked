
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {void* ui_sgid; } ;
struct TYPE_11__ {TYPE_4__ oldids; } ;
struct TYPE_7__ {void* ui_gid; } ;
struct TYPE_8__ {void* ui_gid; } ;
struct TYPE_9__ {TYPE_1__ ui_sun; TYPE_2__ ui_44; } ;
struct ufs_inode {TYPE_5__ ui_u1; TYPE_3__ ui_u3; } ;
struct super_block {int dummy; } ;
struct TYPE_12__ {int s_flags; } ;


 TYPE_6__* FUNC_0 (struct super_block*) ;


 int VAR_0 ;
 void* FUNC_1 (struct super_block*,int) ;
 void* FUNC_2 (struct super_block*,int) ;

__attribute__((used)) static inline void
FUNC_3(struct super_block *VAR_1, struct ufs_inode *VAR_2, u32 VAR_3)
{
 switch (FUNC_0(VAR_1)->s_flags & VAR_0) {
 case 129:
  VAR_2->ui_u3.ui_44.ui_gid = FUNC_2(VAR_1, VAR_3);
  VAR_2->ui_u1.oldids.ui_sgid = FUNC_1(VAR_1, VAR_3);
  break;
 case 128:
  VAR_2->ui_u3.ui_sun.ui_gid = FUNC_2(VAR_1, VAR_3);
  if (VAR_3 > 0xFFFF)
   VAR_3 = 0xFFFF;

 default:
  VAR_2->ui_u1.oldids.ui_sgid = FUNC_1(VAR_1, VAR_3);
  break;
 }
}
