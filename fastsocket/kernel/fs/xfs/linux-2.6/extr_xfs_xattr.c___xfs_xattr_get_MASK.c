
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_inode {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xfs_inode* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (struct xfs_inode*,unsigned char*,void*,int*,int) ;

__attribute__((used)) static int
FUNC_3(struct inode *VAR_2, const char *VAR_3,
  void *VAR_4, size_t VAR_5, int VAR_6)
{
 struct xfs_inode *VAR_7 = FUNC_0(VAR_2);
 int VAR_8, VAR_9 = VAR_5;

 if (FUNC_1(VAR_3, "") == 0)
  return -VAR_1;


 if (!VAR_5) {
  VAR_6 |= VAR_0;
  VAR_4 = ((void*)0);
 }

 VAR_8 = -FUNC_2(VAR_7, (unsigned char *)VAR_3, VAR_4, &VAR_9, VAR_6);
 if (VAR_8)
  return VAR_8;
 return VAR_9;
}
