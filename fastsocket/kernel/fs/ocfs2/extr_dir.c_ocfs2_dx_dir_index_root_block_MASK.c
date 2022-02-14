
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int de_num_used; } ;
struct ocfs2_dx_root_block {int dr_num_entries; TYPE_2__ dr_entries; } ;
struct ocfs2_dx_hinfo {int minor_hash; int major_hash; } ;
struct ocfs2_dir_entry {int rec_len; int name; int name_len; int inode; } ;
struct inode {scalar_t__ i_ino; TYPE_1__* i_sb; } ;
struct buffer_head {char* b_data; int b_blocknr; } ;
struct TYPE_3__ {int s_blocksize; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,char*,unsigned long long,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct inode*,int ,int ,struct ocfs2_dx_hinfo*) ;
 int FUNC_4 (TYPE_2__*,struct ocfs2_dx_hinfo*,int ) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_0,
      struct buffer_head *VAR_1,
      struct buffer_head *VAR_2)
{
 char *VAR_3, *VAR_4;
 struct ocfs2_dx_root_block *VAR_5;
 struct ocfs2_dir_entry *VAR_6;
 struct ocfs2_dx_hinfo VAR_7;
 u64 VAR_8 = VAR_2->b_blocknr;

 VAR_5 = (struct ocfs2_dx_root_block *)VAR_1->b_data;

 VAR_3 = VAR_2->b_data;
 VAR_4 = VAR_3 + VAR_0->i_sb->s_blocksize;

 while (VAR_3 < VAR_4) {
  VAR_6 = (struct ocfs2_dir_entry *)VAR_3;

  if (!VAR_6->name_len || !VAR_6->inode)
   goto inc;

  FUNC_3(VAR_0, VAR_6->name, VAR_6->name_len, &VAR_7);

  FUNC_2(0,
       "dir: %llu, major: 0x%x minor: 0x%x, index: %u, name: %.*s\n",
       (unsigned long long)VAR_0->i_ino, VAR_7.major_hash,
       VAR_7.minor_hash,
       FUNC_0(VAR_5->dr_entries.de_num_used),
       VAR_6->name_len, VAR_6->name);

  FUNC_4(&VAR_5->dr_entries, &VAR_7,
        VAR_8);

  FUNC_1(&VAR_5->dr_num_entries, 1);
inc:
  VAR_3 += FUNC_0(VAR_6->rec_len);
 }
}
