
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union dinode {int dummy; } dinode ;
typedef int uintmax_t ;
typedef int uint8_t ;
typedef int ufs_lbn_t ;
typedef int ufs2_daddr_t ;
struct direct {scalar_t__ d_ino; } ;
typedef int off_t ;
typedef scalar_t__ ino_t ;


 int FUNC_0 (union dinode*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int,char*,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_5 (union dinode*,scalar_t__,int ,int*) ;
 union dinode* FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_10(ino_t VAR_3, off_t VAR_4, ino_t VAR_5)
{
 union dinode *VAR_6;
 struct direct *VAR_7;
 ufs2_daddr_t VAR_8;
 uint8_t *VAR_9;
 ufs_lbn_t VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;

 if (VAR_0)
  FUNC_8("Clearing inode %ju from parent %ju at offset %jd\n",
      (uintmax_t)VAR_5, (uintmax_t)VAR_3, VAR_4);

 VAR_10 = FUNC_7(VAR_2, VAR_4);
 VAR_13 = FUNC_1(VAR_2, VAR_4);
 VAR_6 = FUNC_6(VAR_3);
 VAR_8 = FUNC_5(VAR_6, VAR_3, VAR_10, &VAR_12);
 VAR_11 = FUNC_9(VAR_2, FUNC_0(VAR_6, VAR_1), VAR_10);
 VAR_9 = FUNC_3(VAR_8, VAR_11);
 VAR_7 = (struct direct *)&VAR_9[VAR_13];
 if (VAR_7->d_ino != VAR_5)
  FUNC_4(1, "Inode %ju does not exist in %ju at %jd",
      (uintmax_t)VAR_5, (uintmax_t)VAR_3, VAR_4);
 VAR_7->d_ino = 0;
 FUNC_2(VAR_8);




}
