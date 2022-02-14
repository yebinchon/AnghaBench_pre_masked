
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union dinode {int dummy; } dinode ;
typedef int uintmax_t ;
typedef int uint32_t ;
struct ufs2_dinode {int dummy; } ;
struct ufs1_dinode {int dummy; } ;
typedef scalar_t__ ino_t ;
struct TYPE_2__ {scalar_t__ fs_magic; } ;


 int FUNC_0 (union dinode*,int ) ;
 int FUNC_1 (union dinode*,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (union dinode*,int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (char*) ;
 TYPE_1__* VAR_11 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int) ;
 int VAR_12 ;
 int FUNC_6 (union dinode*,scalar_t__,int ,int) ;
 int FUNC_7 (char*,int ,int,int) ;

__attribute__((used)) static void
FUNC_8(union dinode *VAR_13, ino_t VAR_14, int VAR_15)
{
 uint32_t VAR_16;

 if (VAR_14 == VAR_3)
  FUNC_3("Attempting to free UFS_ROOTINO\n");
 if (VAR_7)
  FUNC_7("Truncating and freeing ino %ju, nlink %d, mode %o\n",
      (uintmax_t)VAR_14, FUNC_0(VAR_13, VAR_10), FUNC_0(VAR_13, VAR_9));


 if ((FUNC_0(VAR_13, VAR_9) & VAR_2) == VAR_1)
  FUNC_6(VAR_13, VAR_14, VAR_12, 0);
 FUNC_1(VAR_13, VAR_10, 0);
 FUNC_6(VAR_13, VAR_14, VAR_6, VAR_4 | VAR_5);

 VAR_16 = FUNC_0(VAR_13, VAR_8);
 if (VAR_11->fs_magic == VAR_0)
  FUNC_2(VAR_13, sizeof(struct ufs1_dinode));
 else
  FUNC_2(VAR_13, sizeof(struct ufs2_dinode));
 FUNC_1(VAR_13, VAR_8, VAR_16);
 FUNC_4(VAR_14);
 FUNC_5(VAR_14, VAR_15);
 return;
}
