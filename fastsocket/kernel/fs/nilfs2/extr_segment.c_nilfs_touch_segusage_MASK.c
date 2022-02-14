
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_segment_usage {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int __u64 ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int ,struct nilfs_segment_usage**,struct buffer_head**) ;
 int FUNC_3 (struct inode*,int ,struct buffer_head*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0, __u64 VAR_1)
{
 struct buffer_head *VAR_2;
 struct nilfs_segment_usage *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1, &VAR_3, &VAR_2);
 if (FUNC_4(VAR_4))
  return VAR_4;
 FUNC_0(VAR_2);
 FUNC_1(VAR_0);
 FUNC_3(VAR_0, VAR_1, VAR_2);
 return 0;
}
