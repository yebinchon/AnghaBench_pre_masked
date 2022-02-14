
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ima_iint_cache {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,int,int) ;

int FUNC_1(struct ima_iint_cache *VAR_2, struct inode *VAR_3,
       int VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_2->flags & VAR_1)
  return 1;

 VAR_6 = FUNC_0(VAR_3, VAR_5, VAR_4);
 return VAR_6 ? 0 : -VAR_0;
}
