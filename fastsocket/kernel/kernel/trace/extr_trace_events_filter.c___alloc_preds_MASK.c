
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filter_pred {int fn; } ;
struct event_filter {struct filter_pred** preds; scalar_t__ n_preds; } ;
typedef int pred ;


 int VAR_0 ;
 struct event_filter* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct event_filter*) ;
 int VAR_3 ;
 void* FUNC_2 (int,int ) ;

__attribute__((used)) static struct event_filter *FUNC_3(void)
{
 struct event_filter *VAR_4;
 struct filter_pred *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_4->n_preds = 0;

 VAR_4->preds = FUNC_2(VAR_2 * sizeof(VAR_5), VAR_1);
 if (!VAR_4->preds)
  goto oom;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
  if (!VAR_5)
   goto oom;
  VAR_5->fn = VAR_3;
  VAR_4->preds[VAR_6] = VAR_5;
 }

 return VAR_4;

oom:
 FUNC_1(VAR_4);
 return FUNC_0(-VAR_0);
}
