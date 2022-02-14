
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_event_call {int dummy; } ;
struct filter_pred {int dummy; } ;
struct filter_parse_state {int dummy; } ;
struct event_filter {int n_preds; int * preds; } ;
typedef int filter_pred_fn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct filter_pred*,int ) ;
 int FUNC_2 (struct filter_parse_state*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct filter_parse_state *VAR_3,
         struct ftrace_event_call *VAR_4,
         struct event_filter *VAR_5,
         struct filter_pred *VAR_6,
         filter_pred_fn_t VAR_7)
{
 int VAR_8, VAR_9;

 if (VAR_5->n_preds == VAR_2) {
  FUNC_2(VAR_3, VAR_1, 0);
  return -VAR_0;
 }

 VAR_8 = VAR_5->n_preds;
 FUNC_0(VAR_5->preds[VAR_8]);
 VAR_9 = FUNC_1(VAR_5->preds[VAR_8], VAR_6, VAR_7);
 if (VAR_9)
  return VAR_9;

 VAR_5->n_preds++;

 return 0;
}
