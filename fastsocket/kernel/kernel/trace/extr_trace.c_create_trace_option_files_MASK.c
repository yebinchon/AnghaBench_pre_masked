
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracer_opt {scalar_t__ name; } ;
struct tracer_flags {struct tracer_opt* opts; } ;
struct tracer {struct tracer_flags* flags; } ;
struct trace_option_dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct trace_option_dentry*,struct tracer_flags*,struct tracer_opt*) ;
 struct trace_option_dentry* FUNC_1 (int,int,int ) ;

__attribute__((used)) static struct trace_option_dentry *
FUNC_2(struct tracer *VAR_1)
{
 struct trace_option_dentry *VAR_2;
 struct tracer_flags *VAR_3;
 struct tracer_opt *VAR_4;
 int VAR_5;

 if (!VAR_1)
  return ((void*)0);

 VAR_3 = VAR_1->flags;

 if (!VAR_3 || !VAR_3->opts)
  return ((void*)0);

 VAR_4 = VAR_3->opts;

 for (VAR_5 = 0; VAR_4[VAR_5].name; VAR_5++)
  ;

 VAR_2 = FUNC_1(VAR_5 + 1, sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 for (VAR_5 = 0; VAR_4[VAR_5].name; VAR_5++)
  FUNC_0(&VAR_2[VAR_5], VAR_3,
      &VAR_4[VAR_5]);

 return VAR_2;
}
