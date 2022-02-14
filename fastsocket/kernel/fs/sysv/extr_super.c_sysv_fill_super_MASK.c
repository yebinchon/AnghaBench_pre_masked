
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xenix_super_block {int dummy; } ;
struct sysv_sb_info {struct buffer_head* s_bh2; struct buffer_head* s_bh1; scalar_t__ s_block_base; struct super_block* s_sb; } ;
struct sysv_inode {int dummy; } ;
struct sysv4_super_block {int dummy; } ;
struct sysv2_super_block {int dummy; } ;
struct super_block {int s_id; struct sysv_sb_info* s_fs_info; } ;
struct coh_super_block {int dummy; } ;
struct buffer_head {int b_blocknr; } ;
struct TYPE_3__ {unsigned long block; int (* test ) (int ,struct buffer_head*) ;} ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct super_block*,int,int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_5 (struct sysv_sb_info*) ;
 struct sysv_sb_info* FUNC_6 (int,int ) ;
 int FUNC_7 (char*,...) ;
 struct buffer_head* FUNC_8 (struct super_block*,unsigned long) ;
 int FUNC_9 (struct super_block*,int) ;
 int FUNC_10 (int ,struct buffer_head*) ;

__attribute__((used)) static int FUNC_11(struct super_block *VAR_5, void *VAR_6, int VAR_7)
{
 struct buffer_head *VAR_8, *VAR_9 = ((void*)0);
 struct sysv_sb_info *VAR_10;
 unsigned long VAR_11;
 int VAR_12 = 0, VAR_13;

 FUNC_1(1024 != sizeof (struct xenix_super_block));
 FUNC_1(512 != sizeof (struct sysv4_super_block));
 FUNC_1(512 != sizeof (struct sysv2_super_block));
 FUNC_1(500 != sizeof (struct coh_super_block));
 FUNC_1(64 != sizeof (struct sysv_inode));

 VAR_10 = FUNC_6(sizeof(struct sysv_sb_info), VAR_3);
 if (!VAR_10)
  return -VAR_2;

 VAR_10->s_sb = VAR_5;
 VAR_10->s_block_base = 0;
 VAR_5->s_fs_info = VAR_10;

 FUNC_9(VAR_5, VAR_0);

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_4) && !VAR_12; VAR_13++) {
  FUNC_3(VAR_9);
  VAR_9 = FUNC_8(VAR_5, VAR_4[VAR_13].block);
  if (!VAR_9)
   continue;
  VAR_12 = VAR_4[VAR_13].test(FUNC_2(VAR_5), VAR_9);
 }

 if (!VAR_12)
  goto Eunknown;

 switch (VAR_12) {
  case 1:
   VAR_11 = VAR_9->b_blocknr << 1;
   FUNC_3(VAR_9);
   FUNC_9(VAR_5, 512);
   VAR_8 = FUNC_8(VAR_5, VAR_11);
   VAR_9 = FUNC_8(VAR_5, VAR_11 + 1);
   break;
  case 2:
   VAR_8 = VAR_9;
   break;
  case 3:
   VAR_11 = VAR_9->b_blocknr >> 1;
   FUNC_3(VAR_9);
   FUNC_9(VAR_5, 2048);
   VAR_8 = VAR_9 = FUNC_8(VAR_5, VAR_11);
   break;
  default:
   goto Ebadsize;
 }

 if (VAR_9 && VAR_8) {
  VAR_10->s_bh1 = VAR_8;
  VAR_10->s_bh2 = VAR_9;
  if (FUNC_4(VAR_5, VAR_7, VAR_12))
   return 0;
 }

 FUNC_3(VAR_8);
 FUNC_3(VAR_9);
 FUNC_9(VAR_5, VAR_0);
 FUNC_7("oldfs: cannot read superblock\n");
failed:
 FUNC_5(VAR_10);
 return -VAR_1;

Eunknown:
 FUNC_3(VAR_9);
 if (!VAR_7)
  FUNC_7("VFS: unable to find oldfs superblock on device %s\n",
   VAR_5->s_id);
 goto failed;
Ebadsize:
 FUNC_3(VAR_9);
 if (!VAR_7)
  FUNC_7("VFS: oldfs: unsupported block size (%dKb)\n",
   1<<(VAR_12-2));
 goto failed;
}
