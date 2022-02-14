
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int i_mode; } ;
struct buffer_head {int dummy; } ;
typedef int mode_t ;
typedef int handle_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (struct posix_acl*,size_t*) ;
 int FUNC_6 (struct inode*,int,char*,void*,size_t,int ) ;
 int FUNC_7 (int *,struct inode*,struct buffer_head*,int,char*,void*,size_t,int ,struct ocfs2_alloc_context*,struct ocfs2_alloc_context*) ;
 int FUNC_8 (struct posix_acl*,int *) ;

__attribute__((used)) static int FUNC_9(handle_t *VAR_5,
    struct inode *VAR_6,
    struct buffer_head *VAR_7,
    int VAR_8,
    struct posix_acl *VAR_9,
    struct ocfs2_alloc_context *VAR_10,
    struct ocfs2_alloc_context *VAR_11)
{
 int VAR_12;
 void *VAR_13 = ((void*)0);
 size_t VAR_14 = 0;
 int VAR_15;

 if (FUNC_3(VAR_6->i_mode))
  return -VAR_2;

 switch (VAR_8) {
 case 129:
  VAR_12 = VAR_3;
  if (VAR_9) {
   mode_t VAR_16 = VAR_6->i_mode;
   VAR_15 = FUNC_8(VAR_9, &VAR_16);
   if (VAR_15 < 0)
    return VAR_15;
   else {
    VAR_6->i_mode = VAR_16;
    if (VAR_15 == 0)
     VAR_9 = ((void*)0);
   }
  }
  break;
 case 128:
  VAR_12 = VAR_4;
  if (!FUNC_2(VAR_6->i_mode))
   return VAR_9 ? -VAR_0 : 0;
  break;
 default:
  return -VAR_1;
 }

 if (VAR_9) {
  VAR_13 = FUNC_5(VAR_9, &VAR_14);
  if (FUNC_0(VAR_13))
   return (int)FUNC_1(VAR_13);
 }

 if (VAR_5)
  VAR_15 = FUNC_7(VAR_5, VAR_6, VAR_7, VAR_12,
          "", VAR_13, VAR_14, 0,
          VAR_10, VAR_11);
 else
  VAR_15 = FUNC_6(VAR_6, VAR_12, "", VAR_13, VAR_14, 0);

 FUNC_4(VAR_13);

 return VAR_15;
}
