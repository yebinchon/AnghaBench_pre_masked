
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union dinode {int dummy; } dinode ;
typedef int ufs_lbn_t ;
typedef scalar_t__ ufs2_daddr_t ;
typedef int ino_t ;


 scalar_t__ FUNC_0 (union dinode*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (union dinode*,int ,int ,int*) ;
 union dinode* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(ino_t VAR_2, ufs_lbn_t VAR_3, ufs2_daddr_t VAR_4, int *VAR_5)
{
 union dinode *VAR_6;
 ufs2_daddr_t VAR_7;

 VAR_6 = FUNC_2(VAR_2);

 if (FUNC_0(VAR_6, VAR_1) == 0 || FUNC_0(VAR_6, VAR_0) == 0)
  return (0);
 VAR_7 = FUNC_1(VAR_6, VAR_2, VAR_3, VAR_5);

 return (VAR_7 == VAR_4);
}
