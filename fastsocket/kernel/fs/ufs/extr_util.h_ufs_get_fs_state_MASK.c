
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int fs_state; } ;
struct TYPE_12__ {int fs_state; } ;
struct TYPE_13__ {TYPE_1__ fs_44; TYPE_4__ fs_sun; } ;
struct ufs_super_block_third {TYPE_5__ fs_un2; int fs_postblformat; } ;
struct TYPE_15__ {int fs_state; } ;
struct TYPE_14__ {TYPE_7__ fs_sunx86; } ;
struct TYPE_10__ {int fs_state; } ;
struct TYPE_11__ {TYPE_2__ fs_sun; } ;
struct ufs_super_block_first {TYPE_6__ fs_u1; TYPE_3__ fs_u0; } ;
struct super_block {int dummy; } ;
typedef int s32 ;
struct TYPE_16__ {int s_flags; } ;


 int VAR_0 ;
 TYPE_8__* FUNC_0 (struct super_block*) ;

 int VAR_1 ;



 int FUNC_1 (struct super_block*,int ) ;

__attribute__((used)) static inline s32
FUNC_2(struct super_block *VAR_2, struct ufs_super_block_first *VAR_3,
   struct ufs_super_block_third *VAR_4)
{
 switch (FUNC_0(VAR_2)->s_flags & VAR_1) {
 case 129:
  if (FUNC_1(VAR_2, VAR_4->fs_postblformat) == VAR_0)
   return FUNC_1(VAR_2, VAR_3->fs_u0.fs_sun.fs_state);

 case 130:
  return FUNC_1(VAR_2, VAR_4->fs_un2.fs_sun.fs_state);
 case 128:
  return FUNC_1(VAR_2, VAR_3->fs_u1.fs_sunx86.fs_state);
 case 131:
 default:
  return FUNC_1(VAR_2, VAR_4->fs_un2.fs_44.fs_state);
 }
}
