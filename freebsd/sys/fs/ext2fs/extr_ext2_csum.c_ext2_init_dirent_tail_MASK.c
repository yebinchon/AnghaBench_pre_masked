
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2fs_direct_tail {int e2dt_rec_len; int e2dt_reserved_ft; } ;


 int VAR_0 ;
 int FUNC_0 (struct ext2fs_direct_tail*,int ,int) ;

void
FUNC_1(struct ext2fs_direct_tail *VAR_1)
{
 FUNC_0(VAR_1, 0, sizeof(struct ext2fs_direct_tail));
 VAR_1->e2dt_rec_len = sizeof(struct ext2fs_direct_tail);
 VAR_1->e2dt_reserved_ft = VAR_0;
}
