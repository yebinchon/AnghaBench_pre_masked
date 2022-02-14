
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filter_type {int event_id; int * filter; int event; } ;
struct event_filter {int filters; int pevent; struct filter_type* event_filters; } ;


 int FUNC_0 (char*) ;
 struct filter_type* FUNC_1 (struct event_filter*,int) ;
 int FUNC_2 (struct filter_type*,struct filter_type*,int) ;
 int FUNC_3 (int ,int) ;
 struct filter_type* FUNC_4 (struct filter_type*,int) ;

__attribute__((used)) static struct filter_type *
FUNC_5(struct event_filter *VAR_0, int VAR_1)
{
 struct filter_type *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_0->event_filters = FUNC_4(VAR_0->event_filters,
     sizeof(*VAR_0->event_filters) *
     (VAR_0->filters + 1));
 if (!VAR_0->event_filters)
  FUNC_0("Could not allocate filter");

 for (VAR_3 = 0; VAR_3 < VAR_0->filters; VAR_3++) {
  if (VAR_0->event_filters[VAR_3].event_id > VAR_1)
   break;
 }

 if (VAR_3 < VAR_0->filters)
  FUNC_2(&VAR_0->event_filters[VAR_3+1],
   &VAR_0->event_filters[VAR_3],
   sizeof(*VAR_0->event_filters) *
   (VAR_0->filters - VAR_3));

 VAR_2 = &VAR_0->event_filters[VAR_3];
 VAR_2->event_id = VAR_1;
 VAR_2->event = FUNC_3(VAR_0->pevent, VAR_1);
 VAR_2->filter = ((void*)0);

 VAR_0->filters++;

 return VAR_2;
}
