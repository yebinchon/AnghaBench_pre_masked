
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ima_iint_cache {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ima_iint_cache* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct ima_iint_cache*) ;
 int FUNC_2 (int *,unsigned long,struct ima_iint_cache*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct inode *VAR_6)
{
 struct ima_iint_cache *VAR_7 = ((void*)0);
 int VAR_8 = 0;

 if (!VAR_3)
  return 0;

 VAR_7 = FUNC_0(VAR_2, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_1);
 if (VAR_8 < 0)
  goto out;

 FUNC_5(&VAR_4);
 VAR_8 = FUNC_2(&VAR_5, (unsigned long)VAR_6, VAR_7);
 FUNC_6(&VAR_4);
 FUNC_4();
out:
 if (VAR_8 < 0)
  FUNC_1(VAR_2, VAR_7);

 return VAR_8;
}
