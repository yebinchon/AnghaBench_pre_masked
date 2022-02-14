
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_acl {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ,unsigned char*,int *,int*,int) ;

__attribute__((used)) static int
FUNC_2(struct inode *VAR_2, unsigned char *VAR_3)
{
 int VAR_4 = sizeof(struct xfs_acl);

 return (FUNC_1(FUNC_0(VAR_2), VAR_3, ((void*)0), &VAR_4,
       VAR_1|VAR_0) == 0);
}
