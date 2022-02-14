
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_dir_entry {int name_len; int name; void* rec_len; void* inode; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int ip_blkno; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct ocfs2_dir_entry*,int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static struct ocfs2_dir_entry *FUNC_7(struct inode *VAR_1,
         struct inode *VAR_2,
         char *VAR_3,
         unsigned int VAR_4)
{
 struct ocfs2_dir_entry *VAR_5 = (struct ocfs2_dir_entry *)VAR_3;

 VAR_5->inode = FUNC_3(FUNC_1(VAR_1)->ip_blkno);
 VAR_5->name_len = 1;
 VAR_5->rec_len =
  FUNC_2(FUNC_0(VAR_5->name_len));
 FUNC_6(VAR_5->name, ".");
 FUNC_5(VAR_5, VAR_0);

 VAR_5 = (struct ocfs2_dir_entry *) ((char *)VAR_5 + FUNC_4(VAR_5->rec_len));
 VAR_5->inode = FUNC_3(FUNC_1(VAR_2)->ip_blkno);
 VAR_5->rec_len = FUNC_2(VAR_4 - FUNC_0(1));
 VAR_5->name_len = 2;
 FUNC_6(VAR_5->name, "..");
 FUNC_5(VAR_5, VAR_0);

 return VAR_5;
}
