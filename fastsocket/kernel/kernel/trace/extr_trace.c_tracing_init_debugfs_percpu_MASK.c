
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (char*,struct dentry*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,long) ;
 int FUNC_3 (char*,int,struct dentry*,void*,int *) ;
 int VAR_0 ;
 struct dentry* FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(long VAR_4)
{
 struct dentry *VAR_5 = FUNC_4();
 struct dentry *VAR_6;

 char VAR_7[7];

 if (VAR_4 > 999 || VAR_4 < 0)
  return;

 FUNC_2(VAR_7, "cpu%ld", VAR_4);
 VAR_6 = FUNC_0(VAR_7, VAR_5);
 if (!VAR_6) {
  FUNC_1("Could not create debugfs '%s' entry\n", VAR_7);
  return;
 }


 FUNC_3("trace_pipe", 0444, VAR_6,
   (void *) VAR_4, &VAR_2);


 FUNC_3("trace", 0644, VAR_6,
   (void *) VAR_4, &VAR_1);

 FUNC_3("trace_pipe_raw", 0444, VAR_6,
   (void *) VAR_4, &VAR_0);

 FUNC_3("stats", 0444, VAR_6,
   (void *) VAR_4, &VAR_3);
}
