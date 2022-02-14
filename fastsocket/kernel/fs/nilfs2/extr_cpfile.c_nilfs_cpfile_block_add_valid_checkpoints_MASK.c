
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_checkpoint {int cp_checkpoints_count; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static unsigned int
FUNC_3(const struct inode *VAR_0,
      struct buffer_head *VAR_1,
      void *VAR_2,
      unsigned int VAR_3)
{
 struct nilfs_checkpoint *VAR_4 = VAR_2 + FUNC_0(VAR_1);
 unsigned int VAR_5;

 VAR_5 = FUNC_2(VAR_4->cp_checkpoints_count) + VAR_3;
 VAR_4->cp_checkpoints_count = FUNC_1(VAR_5);
 return VAR_5;
}
