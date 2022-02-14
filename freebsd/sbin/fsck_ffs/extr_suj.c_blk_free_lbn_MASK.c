
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int ufs_lbn_t ;
typedef int ufs2_daddr_t ;
typedef int ino_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,scalar_t__*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(ufs2_daddr_t VAR_3, ino_t VAR_4, ufs_lbn_t VAR_5, int VAR_6, int VAR_7)
{
 uint64_t VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
 VAR_8 = 0;
 if (VAR_5 <= -VAR_0 && VAR_7 && VAR_9 == 0)
  FUNC_2(VAR_4, VAR_5, VAR_3, &VAR_8, VAR_2, VAR_1);
 else
  FUNC_0(VAR_3, VAR_9, VAR_6);
}
