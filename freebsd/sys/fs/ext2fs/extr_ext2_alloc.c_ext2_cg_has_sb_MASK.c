
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m_ext2fs {TYPE_1__* e2fs; } ;
struct TYPE_2__ {int* e4fs_backup_bgs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct m_ext2fs*,int ) ;
 int FUNC_1 (struct m_ext2fs*,int ) ;

int
FUNC_2(struct m_ext2fs *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 if (VAR_3 == 0)
  return (1);

 if (FUNC_0(VAR_2, VAR_0)) {
  if (VAR_3 == VAR_2->e2fs->e4fs_backup_bgs[0] ||
      VAR_3 == VAR_2->e2fs->e4fs_backup_bgs[1])
   return (1);
  return (0);
 }

 if ((VAR_3 <= 1) ||
     !FUNC_1(VAR_2, VAR_1))
  return (1);

 if (!(VAR_3 & 1))
  return (0);

 for (VAR_4 = 3, VAR_5 = 5, VAR_6 = 7;
     VAR_4 <= VAR_3 || VAR_5 <= VAR_3 || VAR_6 <= VAR_3;
     VAR_4 *= 3, VAR_5 *= 5, VAR_6 *= 7)
  if (VAR_3 == VAR_4 || VAR_3 == VAR_5 || VAR_3 == VAR_6)
   return (1);
 return (0);
}
