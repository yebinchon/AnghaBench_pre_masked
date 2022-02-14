
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_option_dentry {scalar_t__ entry; scalar_t__ opt; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct trace_option_dentry*) ;

__attribute__((used)) static void
FUNC_2(struct trace_option_dentry *VAR_0)
{
 int VAR_1;

 if (!VAR_0)
  return;

 for (VAR_1 = 0; VAR_0[VAR_1].opt; VAR_1++) {
  if (VAR_0[VAR_1].entry)
   FUNC_0(VAR_0[VAR_1].entry);
 }

 FUNC_1(VAR_0);
}
