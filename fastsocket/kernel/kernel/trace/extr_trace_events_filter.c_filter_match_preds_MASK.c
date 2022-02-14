
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filter_pred {int pop_n; int (* fn ) (struct filter_pred*,void*,int,int) ;} ;
struct event_filter {int n_preds; struct filter_pred** preds; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct filter_pred*,void*,int,int) ;
 int FUNC_2 (struct filter_pred*,void*,int,int) ;

int FUNC_3(struct event_filter *VAR_1, void *VAR_2)
{
 int VAR_3, VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;
 int VAR_7[VAR_0];
 struct filter_pred *VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_1->n_preds; VAR_9++) {
  VAR_8 = VAR_1->preds[VAR_9];
  if (!VAR_8->pop_n) {
   VAR_3 = VAR_8->fn(VAR_8, VAR_2, VAR_5, VAR_6);
   VAR_7[VAR_4++] = VAR_3;
   continue;
  }
  if (VAR_8->pop_n > VAR_4) {
   FUNC_0(1);
   return 0;
  }
  VAR_5 = VAR_7[--VAR_4];
  VAR_6 = VAR_7[--VAR_4];
  VAR_3 = VAR_8->fn(VAR_8, VAR_2, VAR_5, VAR_6);
  VAR_7[VAR_4++] = VAR_3;
 }

 return VAR_7[--VAR_4];
}
