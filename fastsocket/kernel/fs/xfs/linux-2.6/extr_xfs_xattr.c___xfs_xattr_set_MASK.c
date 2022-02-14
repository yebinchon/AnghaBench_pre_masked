
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_inode {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct xfs_inode* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (struct xfs_inode*,unsigned char*,int) ;
 int FUNC_3 (struct xfs_inode*,unsigned char*,void*,size_t,int) ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_5, const char *VAR_6, const void *VAR_7,
  size_t VAR_8, int VAR_9, int VAR_10)
{
 struct xfs_inode *VAR_11 = FUNC_0(VAR_5);

 if (FUNC_1(VAR_6, "") == 0)
  return -VAR_2;


 if (VAR_9 & VAR_3)
  VAR_10 |= VAR_0;
 if (VAR_9 & VAR_4)
  VAR_10 |= VAR_1;

 if (!VAR_7)
  return -FUNC_2(VAR_11, (unsigned char *)VAR_6, VAR_10);
 return -FUNC_3(VAR_11, (unsigned char *)VAR_6,
    (void *)VAR_7, VAR_8, VAR_10);
}
