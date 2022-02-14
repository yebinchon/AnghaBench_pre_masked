
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct ocfs2_dx_hinfo {int dummy; } ;
struct ocfs2_dir_entry {int name_len; int rec_len; int name; int inode; } ;
struct inode {TYPE_1__* i_sb; } ;
struct buffer_head {char* b_data; int b_blocknr; } ;
typedef int handle_t ;
struct TYPE_2__ {int s_blocksize; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct inode*,int *,struct ocfs2_dx_hinfo*,int ,struct buffer_head*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,struct ocfs2_dx_hinfo*) ;
 int FUNC_5 (struct inode*,int ,int,struct ocfs2_dx_hinfo*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_0,
        handle_t *VAR_1,
        struct buffer_head **VAR_2,
        int VAR_3,
        u32 *VAR_4,
        struct buffer_head *VAR_5)
{
 int VAR_6 = 0, VAR_7, VAR_8;
 char *VAR_9, *VAR_10;
 struct ocfs2_dir_entry *VAR_11;
 struct buffer_head *VAR_12;
 struct ocfs2_dx_hinfo VAR_13;
 u64 VAR_14 = VAR_5->b_blocknr;

 VAR_9 = VAR_5->b_data;
 VAR_10 = VAR_9 + VAR_0->i_sb->s_blocksize;

 while (VAR_9 < VAR_10) {
  VAR_11 = (struct ocfs2_dir_entry *)VAR_9;

  VAR_7 = VAR_11->name_len;
  if (!VAR_7 || !VAR_11->inode)
   goto inc;

  FUNC_5(VAR_0, VAR_11->name, VAR_7, &VAR_13);

  VAR_8 = FUNC_4(FUNC_0(VAR_0->i_sb), &VAR_13);
  VAR_12 = VAR_2[VAR_8];

  VAR_6 = FUNC_1(VAR_0, VAR_1, &VAR_13,
       VAR_14, VAR_12);
  if (VAR_6) {
   FUNC_3(VAR_6);
   goto out;
  }

  *VAR_4 = *VAR_4 + 1;

inc:
  VAR_9 += FUNC_2(VAR_11->rec_len);
 }

out:
 return VAR_6;
}
