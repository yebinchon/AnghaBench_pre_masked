
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 int VAR_0 ;
 int * FUNC_0 (char*,int *) ;
 struct dentry* FUNC_1 (char*,int,int *,int *,int *) ;
 struct dentry* FUNC_2 (char*,int,int *,int *) ;
 struct dentry* FUNC_3 (char*,int,int *,int *) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 () ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_5(void)
{
 struct dentry *VAR_10;

 VAR_1 = FUNC_0("hwpoison", ((void*)0));
 if (VAR_1 == ((void*)0))
  return -VAR_0;






 VAR_10 = FUNC_1("corrupt-pfn", 0600, VAR_1,
       ((void*)0), &VAR_8);
 if (!VAR_10)
  goto fail;

 VAR_10 = FUNC_1("unpoison-pfn", 0600, VAR_1,
         ((void*)0), &VAR_9);
 if (!VAR_10)
  goto fail;

 VAR_10 = FUNC_2("corrupt-filter-enable", 0600,
        VAR_1, &VAR_4);
 if (!VAR_10)
  goto fail;

 VAR_10 = FUNC_2("corrupt-filter-dev-major", 0600,
        VAR_1, &VAR_2);
 if (!VAR_10)
  goto fail;

 VAR_10 = FUNC_2("corrupt-filter-dev-minor", 0600,
        VAR_1, &VAR_3);
 if (!VAR_10)
  goto fail;

 VAR_10 = FUNC_3("corrupt-filter-flags-mask", 0600,
        VAR_1, &VAR_5);
 if (!VAR_10)
  goto fail;

 VAR_10 = FUNC_3("corrupt-filter-flags-value", 0600,
        VAR_1, &VAR_6);
 if (!VAR_10)
  goto fail;
 return 0;
fail:
 FUNC_4();
 return -VAR_0;
}
