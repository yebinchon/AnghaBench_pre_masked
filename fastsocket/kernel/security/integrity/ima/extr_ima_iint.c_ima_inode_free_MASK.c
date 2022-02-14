
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ima_iint_cache {int rcu; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ima_iint_cache* FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct inode *VAR_4)
{
 struct ima_iint_cache *VAR_5;

 if (!VAR_1)
  return;

 FUNC_2(&VAR_2);
 VAR_5 = FUNC_1(&VAR_3, (unsigned long)VAR_4);
 FUNC_3(&VAR_2);
 if (VAR_5)
  FUNC_0(&VAR_5->rcu, VAR_0);
}
