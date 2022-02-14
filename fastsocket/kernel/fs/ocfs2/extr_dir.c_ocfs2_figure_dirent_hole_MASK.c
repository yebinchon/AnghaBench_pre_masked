
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_dir_entry {int name_len; int rec_len; int inode; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static unsigned int FUNC_3(struct ocfs2_dir_entry *VAR_0)
{
 unsigned int VAR_1;

 if (FUNC_2(VAR_0->inode) == 0)
  VAR_1 = FUNC_1(VAR_0->rec_len);
 else
  VAR_1 = FUNC_1(VAR_0->rec_len) -
   FUNC_0(VAR_0->name_len);

 return VAR_1;
}
