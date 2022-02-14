
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 struct dentry* VAR_0 ;
 struct dentry* FUNC_0 (char*,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;

struct dentry *FUNC_3(void)
{
 static int VAR_1;

 if (VAR_0)
  return VAR_0;

 if (!FUNC_1())
  return ((void*)0);

 VAR_0 = FUNC_0("tracing", ((void*)0));

 if (!VAR_0 && !VAR_1) {
  VAR_1 = 1;
  FUNC_2("Could not create debugfs directory 'tracing'\n");
  return ((void*)0);
 }

 return VAR_0;
}
