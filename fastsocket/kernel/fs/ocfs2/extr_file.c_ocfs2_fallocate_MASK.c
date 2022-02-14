
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_space_resv {void* l_len; void* l_start; scalar_t__ l_whence; } ;
struct inode {int i_mode; int i_sb; } ;
typedef void* s64 ;
typedef scalar_t__ loff_t ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ocfs2_super* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 long FUNC_2 (int *,struct inode*,scalar_t__,int ,struct ocfs2_space_resv*,int) ;
 int FUNC_3 (struct ocfs2_super*) ;

__attribute__((used)) static long FUNC_4(struct inode *VAR_4, int VAR_5, loff_t VAR_6,
       loff_t VAR_7)
{
 struct ocfs2_super *VAR_8 = FUNC_0(VAR_4->i_sb);
 struct ocfs2_space_resv VAR_9;
 int VAR_10 = 1;

 if (!FUNC_3(VAR_8))
  return -VAR_1;

 if (FUNC_1(VAR_4->i_mode))
  return -VAR_0;

 if (VAR_5 & VAR_2)
  VAR_10 = 0;

 VAR_9.l_whence = 0;
 VAR_9.l_start = (s64)VAR_6;
 VAR_9.l_len = (s64)VAR_7;

 return FUNC_2(((void*)0), VAR_4, VAR_6,
      VAR_3, &VAR_9, VAR_10);
}
