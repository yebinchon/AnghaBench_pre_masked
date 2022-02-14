
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_mapping; } ;
struct buffer_head {int b_page; int b_end_io; scalar_t__ b_blocknr; int b_bdev; } ;
typedef scalar_t__ sector_t ;
typedef scalar_t__ __u64 ;
struct TYPE_6__ {int i_bmap; } ;
struct TYPE_5__ {TYPE_1__* mi_nilfs; } ;
struct TYPE_4__ {int ns_bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 int VAR_4 ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int ,unsigned long,scalar_t__*) ;
 struct buffer_head* FUNC_7 (struct inode*,int ,unsigned long,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (int,struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (struct buffer_head*) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int
FUNC_15(struct inode *VAR_5, unsigned long VAR_6,
         int VAR_7, struct buffer_head **VAR_8)
{
 struct buffer_head *VAR_9;
 __u64 VAR_10 = 0;
 int VAR_11 = -VAR_2;

 VAR_9 = FUNC_7(VAR_5, VAR_5->i_mapping, VAR_6, 0);
 if (FUNC_12(!VAR_9))
  goto failed;

 VAR_11 = -VAR_1;
 if (FUNC_3(VAR_9))
  goto out;

 if (VAR_7 == VAR_3) {
  if (!FUNC_11(VAR_9)) {
   VAR_11 = -VAR_0;
   goto failed_bh;
  }
 } else
  FUNC_5(VAR_9);

 if (FUNC_3(VAR_9)) {
  FUNC_13(VAR_9);
  goto out;
 }

 VAR_11 = FUNC_6(FUNC_0(VAR_5)->i_bmap, VAR_6, &VAR_10);
 if (FUNC_12(VAR_11)) {
  FUNC_13(VAR_9);
  goto failed_bh;
 }
 VAR_9->b_bdev = FUNC_1(VAR_5)->mi_nilfs->ns_bdev;
 VAR_9->b_blocknr = (sector_t)VAR_10;
 FUNC_9(VAR_9);

 VAR_9->b_end_io = VAR_4;
 FUNC_4(VAR_9);
 FUNC_10(VAR_7, VAR_9);
 VAR_11 = 0;
 out:
 FUNC_4(VAR_9);
 *VAR_8 = VAR_9;

 failed_bh:
 FUNC_14(VAR_9->b_page);
 FUNC_8(VAR_9->b_page);
 FUNC_2(VAR_9);
 failed:
 return VAR_11;
}
