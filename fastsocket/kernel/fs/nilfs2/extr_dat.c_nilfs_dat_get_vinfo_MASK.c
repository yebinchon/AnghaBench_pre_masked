
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_vinfo {unsigned long vi_vblocknr; void* vi_blocknr; void* vi_end; void* vi_start; } ;
struct nilfs_dat_entry {int de_blocknr; int de_end; int de_start; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_page; } ;
typedef int ssize_t ;
typedef unsigned long __u64 ;
struct TYPE_2__ {unsigned long mi_entries_per_block; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (void*,int ) ;
 void* FUNC_5 (int ) ;
 struct nilfs_dat_entry* FUNC_6 (struct inode*,unsigned long,struct buffer_head*,void*) ;
 int FUNC_7 (struct inode*,unsigned long,int ,struct buffer_head**) ;

ssize_t FUNC_8(struct inode *VAR_1, void *VAR_2, unsigned VAR_3,
       size_t VAR_4)
{
 struct buffer_head *VAR_5;
 struct nilfs_dat_entry *VAR_6;
 struct nilfs_vinfo *VAR_7 = VAR_2;
 __u64 VAR_8, VAR_9;
 void *VAR_10;
 unsigned long VAR_11 = FUNC_0(VAR_1)->mi_entries_per_block;
 int VAR_12, VAR_13, VAR_14, VAR_15;

 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12 += VAR_14) {
  VAR_15 = FUNC_7(VAR_1, VAR_7->vi_vblocknr,
         0, &VAR_5);
  if (VAR_15 < 0)
   return VAR_15;
  VAR_10 = FUNC_3(VAR_5->b_page, VAR_0);

  VAR_8 = VAR_7->vi_vblocknr;
  FUNC_2(VAR_8, VAR_11);
  VAR_8 *= VAR_11;
  VAR_9 = VAR_8 + VAR_11 - 1;
  for (VAR_13 = VAR_12, VAR_14 = 0;
       VAR_13 < VAR_4 && VAR_7->vi_vblocknr >= VAR_8 &&
        VAR_7->vi_vblocknr <= VAR_9;
       VAR_13++, VAR_14++, VAR_7 = (void *)VAR_7 + VAR_3) {
   VAR_6 = FUNC_6(
    VAR_1, VAR_7->vi_vblocknr, VAR_5, VAR_10);
   VAR_7->vi_start = FUNC_5(VAR_6->de_start);
   VAR_7->vi_end = FUNC_5(VAR_6->de_end);
   VAR_7->vi_blocknr = FUNC_5(VAR_6->de_blocknr);
  }
  FUNC_4(VAR_10, VAR_0);
  FUNC_1(VAR_5);
 }

 return VAR_4;
}
