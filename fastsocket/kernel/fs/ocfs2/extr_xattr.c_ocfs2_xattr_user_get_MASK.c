
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int s_mount_opt; } ;
struct inode {int i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ocfs2_super* FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct inode*,int ,char const*,void*,size_t) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_4, const char *VAR_5,
    void *VAR_6, size_t VAR_7)
{
 struct ocfs2_super *VAR_8 = FUNC_0(VAR_4->i_sb);

 if (FUNC_2(VAR_5, "") == 0)
  return -VAR_0;
 if (VAR_8->s_mount_opt & VAR_2)
  return -VAR_1;
 return FUNC_1(VAR_4, VAR_3, VAR_5,
          VAR_6, VAR_7);
}
