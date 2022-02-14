
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void nilfs_cpfile_header ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct buffer_head*) ;

__attribute__((used)) static inline struct nilfs_cpfile_header *
FUNC_1(const struct inode *VAR_0,
         struct buffer_head *VAR_1,
         void *VAR_2)
{
 return VAR_2 + FUNC_0(VAR_1);
}
