
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (char const*,int,struct dentry*,void*,int *) ;
 int VAR_0 ;
 struct dentry* FUNC_1 () ;

__attribute__((used)) static struct dentry *
FUNC_2(const char *VAR_1, long VAR_2)
{
 struct dentry *VAR_3;

 VAR_3 = FUNC_1();
 if (!VAR_3)
  return ((void*)0);

 return FUNC_0(VAR_1, 0644, VAR_3, (void *)VAR_2,
        &VAR_0);
}
