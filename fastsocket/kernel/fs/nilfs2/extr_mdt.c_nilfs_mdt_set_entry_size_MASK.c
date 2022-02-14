
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_mdt_info {unsigned int mi_entry_size; int mi_entries_per_block; int mi_first_entry_offset; } ;
struct inode {int i_blkbits; } ;


 int FUNC_0 (unsigned int,unsigned int) ;
 struct nilfs_mdt_info* FUNC_1 (struct inode*) ;

void FUNC_2(struct inode *VAR_0, unsigned VAR_1,
         unsigned VAR_2)
{
 struct nilfs_mdt_info *VAR_3 = FUNC_1(VAR_0);

 VAR_3->mi_entry_size = VAR_1;
 VAR_3->mi_entries_per_block = (1 << VAR_0->i_blkbits) / VAR_1;
 VAR_3->mi_first_entry_offset = FUNC_0(VAR_2, VAR_1);
}
