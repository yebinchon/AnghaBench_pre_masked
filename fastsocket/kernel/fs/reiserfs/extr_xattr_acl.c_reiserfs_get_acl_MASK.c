
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;


 struct posix_acl* VAR_0 ;


 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct posix_acl* FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (struct posix_acl*) ;
 char* VAR_5 ;
 char* VAR_6 ;
 struct posix_acl* FUNC_3 (struct inode*,int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int,int ) ;
 struct posix_acl* FUNC_6 (char*,int) ;
 int FUNC_7 (struct inode*,char*,char*,int) ;
 int FUNC_8 (struct inode*,int,struct posix_acl*) ;

struct posix_acl *FUNC_9(struct inode *VAR_7, int VAR_8)
{
 char *VAR_9, *VAR_10;
 struct posix_acl *VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_11 = FUNC_3(VAR_7, VAR_8);
 if (VAR_11 != VAR_0)
  return VAR_11;

 switch (VAR_8) {
 case 129:
  VAR_9 = VAR_5;
  break;
 case 128:
  VAR_9 = VAR_6;
  break;
 default:
  FUNC_0();
 }

 VAR_12 = FUNC_7(VAR_7, VAR_9, ((void*)0), 0);
 if (VAR_12 < 0) {
  if (VAR_12 == -VAR_1 || VAR_12 == -VAR_3) {
   FUNC_8(VAR_7, VAR_8, ((void*)0));
   return ((void*)0);
  }
  return FUNC_1(VAR_12);
 }

 VAR_10 = FUNC_5(VAR_12, VAR_4);
 if (!VAR_10)
  return FUNC_1(-VAR_2);

 VAR_13 = FUNC_7(VAR_7, VAR_9, VAR_10, VAR_12);
 if (VAR_13 == -VAR_1 || VAR_13 == -VAR_3) {


  VAR_11 = ((void*)0);
 } else if (VAR_13 < 0) {
  VAR_11 = FUNC_1(VAR_13);
 } else {
  VAR_11 = FUNC_6(VAR_10, VAR_13);
 }
 if (!FUNC_2(VAR_11))
  FUNC_8(VAR_7, VAR_8, VAR_11);

 FUNC_4(VAR_10);
 return VAR_11;
}
