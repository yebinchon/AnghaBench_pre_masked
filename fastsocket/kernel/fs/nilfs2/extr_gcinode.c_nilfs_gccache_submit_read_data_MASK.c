
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mapping; } ;
struct buffer_head {int b_page; scalar_t__ b_blocknr; int b_end_io; int b_bdev; } ;
typedef scalar_t__ sector_t ;
typedef scalar_t__ __u64 ;
struct TYPE_2__ {int ns_bdev; struct inode* ns_dat; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 int VAR_2 ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct inode*,scalar_t__,scalar_t__*) ;
 struct buffer_head* FUNC_7 (struct inode*,int ,scalar_t__,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (int ,struct buffer_head*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct buffer_head*) ;
 int FUNC_13 (int ) ;

int FUNC_14(struct inode *VAR_3, sector_t VAR_4,
       sector_t VAR_5, __u64 VAR_6,
       struct buffer_head **VAR_7)
{
 struct buffer_head *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_7(VAR_3, VAR_3->i_mapping, VAR_4, 0);
 if (FUNC_11(!VAR_8))
  return -VAR_0;

 if (FUNC_3(VAR_8))
  goto out;

 if (VAR_5 == 0) {
  struct inode *VAR_10 = FUNC_0(VAR_3)->ns_dat;

  VAR_9 = FUNC_6(VAR_10, VAR_6, &VAR_5);
  if (FUNC_11(VAR_9)) {
   FUNC_1(VAR_8);
   goto failed;
  }
 }

 FUNC_5(VAR_8);
 if (FUNC_3(VAR_8)) {
  FUNC_12(VAR_8);
  goto out;
 }

 if (!FUNC_2(VAR_8)) {
  VAR_8->b_bdev = FUNC_0(VAR_3)->ns_bdev;
  FUNC_9(VAR_8);
 }
 VAR_8->b_blocknr = VAR_5;
 VAR_8->b_end_io = VAR_2;
 FUNC_4(VAR_8);
 FUNC_10(VAR_1, VAR_8);
 if (VAR_6)
  VAR_8->b_blocknr = VAR_6;
 out:
 VAR_9 = 0;
 *VAR_7 = VAR_8;

 failed:
 FUNC_13(VAR_8->b_page);
 FUNC_8(VAR_8->b_page);
 return VAR_9;
}
