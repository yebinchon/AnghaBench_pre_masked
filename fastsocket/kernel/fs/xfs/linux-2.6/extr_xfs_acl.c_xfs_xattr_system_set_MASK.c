
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {scalar_t__ a_count; } ;
struct inode {scalar_t__ i_uid; int i_mode; } ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct posix_acl*) ;
 int FUNC_1 (struct posix_acl*) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct posix_acl*,int *) ;
 struct posix_acl* FUNC_6 (void const*,size_t) ;
 int FUNC_7 (struct posix_acl*) ;
 int FUNC_8 (struct posix_acl*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (struct inode*,int,struct posix_acl*) ;
 int FUNC_11 (struct inode*,int ) ;

__attribute__((used)) static int
FUNC_12(struct inode *VAR_8, const char *VAR_9,
  const void *VAR_10, size_t VAR_11, int VAR_12)
{
 struct posix_acl *VAR_13 = ((void*)0);
 int VAR_14 = 0, VAR_15;

 VAR_15 = FUNC_9(VAR_9);
 if (VAR_15 < 0)
  return VAR_15;
 if (VAR_12 & VAR_6)
  return -VAR_4;
 if (VAR_15 == VAR_1 && !FUNC_2(VAR_8->i_mode))
  return VAR_10 ? -VAR_3 : 0;
 if ((FUNC_4() != VAR_8->i_uid) && !FUNC_3(VAR_2))
  return -VAR_5;

 if (!VAR_10)
  goto set_acl;

 VAR_13 = FUNC_6(VAR_10, VAR_11);
 if (!VAR_13) {




  goto out;
 }
 if (FUNC_0(VAR_13)) {
  VAR_14 = FUNC_1(VAR_13);
  goto out;
 }

 VAR_14 = FUNC_8(VAR_13);
 if (VAR_14)
  goto out_release;

 VAR_14 = -VAR_4;
 if (VAR_13->a_count > VAR_7)
  goto out_release;

 if (VAR_15 == VAR_0) {
  mode_t VAR_16 = VAR_8->i_mode;
  VAR_14 = FUNC_5(VAR_13, &VAR_16);

  if (VAR_14 <= 0) {
   FUNC_7(VAR_13);
   VAR_13 = ((void*)0);

   if (VAR_14 < 0)
    return VAR_14;
  }

  VAR_14 = FUNC_11(VAR_8, VAR_16);
  if (VAR_14)
   goto out_release;
 }

 set_acl:
 VAR_14 = FUNC_10(VAR_8, VAR_15, VAR_13);
 out_release:
 FUNC_7(VAR_13);
 out:
 return VAR_14;
}
