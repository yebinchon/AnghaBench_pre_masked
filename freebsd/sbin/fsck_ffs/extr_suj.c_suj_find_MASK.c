
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ufs_lbn_t ;
typedef int ufs2_daddr_t ;
struct direct {scalar_t__ d_reclen; scalar_t__ d_ino; scalar_t__ d_namlen; int d_name; } ;
typedef int ino_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ,char*,int) ;
 int VAR_2 ;
 int FUNC_2 (char*,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_6(ino_t VAR_5, ufs_lbn_t VAR_6, ufs2_daddr_t VAR_7, int VAR_8)
{
 char VAR_9[VAR_0];
 struct direct *VAR_10;
 int VAR_11;
 int VAR_12;

 if (VAR_4)
  return;
 VAR_11 = FUNC_4(VAR_3, VAR_8);
 if (FUNC_1(&VAR_2, FUNC_3(VAR_3, VAR_7), VAR_9, VAR_11) <= 0)
  FUNC_2("Failed to read UFS_ROOTINO directory block %jd\n",
      VAR_7);
 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12 += VAR_10->d_reclen) {
  VAR_10 = (struct direct *)&VAR_9[VAR_12];
  if (VAR_10->d_reclen == 0)
   break;
  if (VAR_10->d_ino == 0)
   continue;
  if (VAR_10->d_namlen != FUNC_5(VAR_1))
   continue;
  if (FUNC_0(VAR_10->d_name, VAR_1, VAR_10->d_namlen) != 0)
   continue;
  VAR_4 = VAR_10->d_ino;
  return;
 }
}
