
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;
struct be_mount_info {int lbh; int mntflags; int depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char**) ;
 int FUNC_3 (int *,int (*) (int *,void*),struct be_mount_info*) ;
 scalar_t__ FUNC_4 (int *,int *,int ) ;

__attribute__((used)) static int
FUNC_5(zfs_handle_t *VAR_6, void *VAR_7)
{

 int VAR_8;
 char *VAR_9;
 struct be_mount_info *VAR_10;

 VAR_10 = (struct be_mount_info *)VAR_7;

 ++VAR_10->depth;
 if((VAR_8 = FUNC_3(VAR_6, FUNC_5, VAR_10)) != 0) {
  return (VAR_8);
 }
 --VAR_10->depth;

 if (!FUNC_2(VAR_6, &VAR_9)) {
  return (0);
 }
 FUNC_0(VAR_9);

 if (FUNC_4(VAR_6, ((void*)0), VAR_10->mntflags) != 0) {
  switch (VAR_5) {
  case 131:
   return (FUNC_1(VAR_10->lbh, VAR_2));
  case 132:
  case 130:
  case 129:
   return (FUNC_1(VAR_10->lbh, VAR_0));
  case 128:
   return (FUNC_1(VAR_10->lbh, VAR_3));
  case 133:
   return (FUNC_1(VAR_10->lbh, VAR_1));
  default:
   return (FUNC_1(VAR_10->lbh, VAR_4));
  }
 }
 return (0);
}
