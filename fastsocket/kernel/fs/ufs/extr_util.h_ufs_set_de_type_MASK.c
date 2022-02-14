
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int d_type; } ;
struct TYPE_5__ {TYPE_1__ d_44; } ;
struct ufs_dir_entry {TYPE_2__ d_u; } ;
struct super_block {int dummy; } ;
struct TYPE_6__ {int s_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 int VAR_8 ;


 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__* FUNC_0 (struct super_block*) ;

__attribute__((used)) static inline void
FUNC_1(struct super_block *VAR_11, struct ufs_dir_entry *VAR_12, int VAR_13)
{
 if ((FUNC_0(VAR_11)->s_flags & VAR_10) != VAR_9)
  return;




 switch (VAR_13 & VAR_8) {
 case 128:
  VAR_12->d_u.d_44.d_type = VAR_6;
  break;
 case 130:
  VAR_12->d_u.d_44.d_type = VAR_4;
  break;
 case 129:
  VAR_12->d_u.d_44.d_type = VAR_5;
  break;
 case 134:
  VAR_12->d_u.d_44.d_type = VAR_0;
  break;
 case 132:
  VAR_12->d_u.d_44.d_type = VAR_2;
  break;
 case 133:
  VAR_12->d_u.d_44.d_type = VAR_1;
  break;
 case 131:
  VAR_12->d_u.d_44.d_type = VAR_3;
  break;
 default:
  VAR_12->d_u.d_44.d_type = VAR_7;
 }
}
