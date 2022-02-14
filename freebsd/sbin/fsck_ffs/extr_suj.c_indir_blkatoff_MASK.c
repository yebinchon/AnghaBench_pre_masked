
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ufs_lbn_t ;
typedef int ufs2_daddr_t ;
typedef int ino_t ;
struct TYPE_3__ {scalar_t__ fs_magic; int fs_bsize; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int,...) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (int) ;

__attribute__((used)) static ufs2_daddr_t
FUNC_4(ufs2_daddr_t VAR_2, ino_t VAR_3, ufs_lbn_t VAR_4, ufs_lbn_t VAR_5)
{
 ufs2_daddr_t *VAR_6;
 ufs2_daddr_t *VAR_7;
 ufs_lbn_t VAR_8;
 ufs_lbn_t VAR_9;
 int VAR_10;
 int VAR_11;

 if (VAR_2 == 0)
  return (0);
 VAR_10 = FUNC_3(VAR_4);
 if (VAR_10 == -1)
  FUNC_2("Invalid indir lbn %jd\n", VAR_5);
 if (VAR_10 == 0 && VAR_5 < 0)
  FUNC_2("Invalid lbn %jd\n", VAR_5);
 VAR_6 = (void *)FUNC_1(VAR_2, VAR_1->fs_bsize);
 VAR_7 = (void *)VAR_6;
 VAR_8 = 1;
 VAR_9 = -(VAR_4 + VAR_10);
 for (VAR_11 = VAR_10; VAR_11 > 0; VAR_11--)
  VAR_8 *= FUNC_0(VAR_1);
 if (VAR_5 > 0)
  VAR_11 = (VAR_5 - VAR_9) / VAR_8;
 else
  VAR_11 = (-VAR_5 - VAR_9) / VAR_8;
 if (VAR_11 < 0 || VAR_11 >= FUNC_0(VAR_1))
  FUNC_2("Invalid indirect index %d produced by lbn %jd\n",
      VAR_11, VAR_5);
 if (VAR_10 == 0)
  VAR_4 = VAR_9 + (VAR_11 * VAR_8);
 else
  VAR_4 = -(VAR_9 + (VAR_11 * VAR_8)) - (VAR_10 - 1);
 if (VAR_1->fs_magic == VAR_0)
  VAR_2 = VAR_7[VAR_11];
 else
  VAR_2 = VAR_6[VAR_11];
 if (VAR_4 == VAR_5)
  return (VAR_2);
 if (VAR_10 == 0)
  FUNC_2("Invalid lbn %jd at level 0\n", VAR_5);
 return FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5);
}
