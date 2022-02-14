
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 int FUNC_0 (char*,struct dentry*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 struct dentry* FUNC_2 () ;

__attribute__((used)) static int FUNC_3(void)
{
 struct dentry *VAR_1;

 VAR_1 = FUNC_2();

 VAR_0 = FUNC_0("trace_stat", VAR_1);
 if (!VAR_0)
  FUNC_1("Could not create debugfs "
      "'trace_stat' entry\n");
 return 0;
}
