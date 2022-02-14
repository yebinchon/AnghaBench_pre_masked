
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracer_opt {int name; } ;
struct tracer_flags {int dummy; } ;
struct trace_option_dentry {int entry; struct tracer_opt* opt; struct tracer_flags* flags; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int ,int,struct dentry*,struct trace_option_dentry*,int *) ;
 int VAR_0 ;
 struct dentry* FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(struct trace_option_dentry *VAR_1,
    struct tracer_flags *VAR_2,
    struct tracer_opt *VAR_3)
{
 struct dentry *VAR_4;

 VAR_4 = FUNC_1();
 if (!VAR_4)
  return;

 VAR_1->flags = VAR_2;
 VAR_1->opt = VAR_3;

 VAR_1->entry = FUNC_0(VAR_3->name, 0644, VAR_4, VAR_1,
        &VAR_0);

}
