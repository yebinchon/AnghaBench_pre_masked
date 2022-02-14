
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_dir_lookup_result {int * member_0; } ;
struct inode {int dummy; } ;


 int FUNC_0 (char const*,int,int *,struct inode*,struct ocfs2_dir_lookup_result*) ;
 int FUNC_1 (struct ocfs2_dir_lookup_result*) ;

int FUNC_2(struct inode *VAR_0, const char *VAR_1,
          int VAR_2, u64 *VAR_3)
{
 int VAR_4;
 struct ocfs2_dir_lookup_result VAR_5 = { ((void*)0), };

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0, &VAR_5);
 FUNC_1(&VAR_5);

 return VAR_4;
}
