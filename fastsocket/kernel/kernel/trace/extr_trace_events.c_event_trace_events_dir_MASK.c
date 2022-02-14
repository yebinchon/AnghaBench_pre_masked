
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (char*,struct dentry*) ;
 int FUNC_1 (char*) ;
 struct dentry* FUNC_2 () ;

__attribute__((used)) static struct dentry *FUNC_3(void)
{
 static struct dentry *VAR_0;
 static struct dentry *VAR_1;

 if (VAR_1)
  return VAR_1;

 VAR_0 = FUNC_2();
 if (!VAR_0)
  return ((void*)0);

 VAR_1 = FUNC_0("events", VAR_0);
 if (!VAR_1)
  FUNC_1("Could not create debugfs "
      "'events' directory\n");

 return VAR_1;
}
