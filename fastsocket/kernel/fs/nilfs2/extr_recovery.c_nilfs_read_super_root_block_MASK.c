
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct super_block {unsigned int s_blocksize; } ;
struct nilfs_super_root {int sr_sum; int sr_bytes; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int sector_t ;


 int FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (int ,struct buffer_head*,scalar_t__*,int,unsigned int,int ,int) ;
 unsigned int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 struct buffer_head* FUNC_6 (struct super_block*,int ) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct super_block *VAR_2, sector_t VAR_3,
    struct buffer_head **VAR_4, int VAR_5)
{
 struct buffer_head *VAR_6;
 struct nilfs_super_root *VAR_7;
 u32 VAR_8;
 int VAR_9;

 *VAR_4 = ((void*)0);
 VAR_6 = FUNC_6(VAR_2, VAR_3);
 if (FUNC_7(!VAR_6)) {
  VAR_9 = VAR_1;
  goto failed;
 }

 VAR_7 = (struct nilfs_super_root *)VAR_6->b_data;
 if (VAR_5) {
  unsigned VAR_10 = FUNC_3(VAR_7->sr_bytes);

  if (VAR_10 == 0 || VAR_10 > VAR_2->s_blocksize) {
   VAR_9 = VAR_0;
   goto failed_bh;
  }
  if (FUNC_2(FUNC_0(VAR_2), VAR_6, &VAR_8,
      sizeof(VAR_7->sr_sum), VAR_10, VAR_3, 1)) {
   VAR_9 = VAR_1;
   goto failed_bh;
  }
  if (VAR_8 != FUNC_4(VAR_7->sr_sum)) {
   VAR_9 = VAR_0;
   goto failed_bh;
  }
 }
 *VAR_4 = VAR_6;
 return 0;

 failed_bh:
 FUNC_1(VAR_6);

 failed:
 return FUNC_5(VAR_9);
}
