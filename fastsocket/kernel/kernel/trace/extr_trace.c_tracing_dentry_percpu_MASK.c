
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 struct dentry* VAR_0 ;
 struct dentry* FUNC_0 (char*,struct dentry*) ;
 int FUNC_1 (char*) ;
 struct dentry* FUNC_2 () ;

struct dentry *FUNC_3(void)
{
 static int VAR_1;
 struct dentry *VAR_2;

 if (VAR_0)
  return VAR_0;

 VAR_2 = FUNC_2();

 if (!VAR_2)
  return ((void*)0);

 VAR_0 = FUNC_0("per_cpu", VAR_2);

 if (!VAR_0 && !VAR_1) {
  VAR_1 = 1;
  FUNC_1("Could not create debugfs directory 'per_cpu'\n");
  return ((void*)0);
 }

 return VAR_0;
}
