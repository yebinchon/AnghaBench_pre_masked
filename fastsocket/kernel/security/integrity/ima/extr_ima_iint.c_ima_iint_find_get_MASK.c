
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ima_iint_cache {int refcount; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct ima_iint_cache* FUNC_1 (int *,unsigned long) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

struct ima_iint_cache *FUNC_4(struct inode *VAR_1)
{
 struct ima_iint_cache *VAR_2;

 FUNC_2();
 VAR_2 = FUNC_1(&VAR_0, (unsigned long)VAR_1);
 if (!VAR_2)
  goto out;
 FUNC_0(&VAR_2->refcount);
out:
 FUNC_3();
 return VAR_2;
}
