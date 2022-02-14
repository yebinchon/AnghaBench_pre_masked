
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_dir_entry {int rec_len; int name_len; int inode; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline int FUNC_3(struct ocfs2_dir_entry *VAR_0,
      unsigned int VAR_1)
{
 unsigned int VAR_2;


 if (FUNC_2(VAR_0->inode) == 0 &&
     FUNC_1(VAR_0->rec_len) >= VAR_1)
  return 1;





 VAR_2 = FUNC_0(VAR_0->name_len);
 if (FUNC_1(VAR_0->rec_len) >= (VAR_2 + VAR_1))
     return 1;

 return 0;
}
