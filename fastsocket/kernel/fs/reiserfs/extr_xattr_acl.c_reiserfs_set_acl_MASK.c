
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_transaction_handle {int dummy; } ;
struct posix_acl {int dummy; } ;
struct inode {int i_ctime; int i_mode; } ;
typedef int mode_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 char* VAR_5 ;
 char* VAR_6 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct posix_acl*,int *) ;
 void* FUNC_7 (struct posix_acl*,size_t*) ;
 int FUNC_8 (struct reiserfs_transaction_handle*,struct inode*,char*,void*,size_t,int ) ;
 int FUNC_9 (struct inode*,int,struct posix_acl*) ;

__attribute__((used)) static int
FUNC_10(struct reiserfs_transaction_handle *VAR_7, struct inode *VAR_8,
   int VAR_9, struct posix_acl *VAR_10)
{
 char *VAR_11;
 void *VAR_12 = ((void*)0);
 size_t VAR_13 = 0;
 int VAR_14;

 if (FUNC_3(VAR_8->i_mode))
  return -VAR_4;

 switch (VAR_9) {
 case 129:
  VAR_11 = VAR_5;
  if (VAR_10) {
   mode_t VAR_15 = VAR_8->i_mode;
   VAR_14 = FUNC_6(VAR_10, &VAR_15);
   if (VAR_14 < 0)
    return VAR_14;
   else {
    VAR_8->i_mode = VAR_15;
    if (VAR_14 == 0)
     VAR_10 = ((void*)0);
   }
  }
  break;
 case 128:
  VAR_11 = VAR_6;
  if (!FUNC_2(VAR_8->i_mode))
   return VAR_10 ? -VAR_1 : 0;
  break;
 default:
  return -VAR_2;
 }

 if (VAR_10) {
  VAR_12 = FUNC_7(VAR_10, &VAR_13);
  if (FUNC_0(VAR_12))
   return (int)FUNC_1(VAR_12);
 }

 VAR_14 = FUNC_8(VAR_7, VAR_8, VAR_11, VAR_12, VAR_13, 0);







 if (VAR_14 == -VAR_3) {
  VAR_14 = 0;
  if (VAR_9 == 129) {
   VAR_8->i_ctime = VAR_0;
   FUNC_5(VAR_8);
  }
 }

 FUNC_4(VAR_12);

 if (!VAR_14)
  FUNC_9(VAR_8, VAR_9, VAR_10);

 return VAR_14;
}
