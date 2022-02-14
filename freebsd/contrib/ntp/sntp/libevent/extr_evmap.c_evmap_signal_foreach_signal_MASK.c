
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evmap_signal {int dummy; } ;
struct event_signal_map {int nentries; struct evmap_signal** entries; } ;
struct event_base {struct event_signal_map sigmap; } ;
typedef int (* evmap_signal_foreach_signal_cb ) (struct event_base*,int,struct evmap_signal*,void*) ;



__attribute__((used)) static int
FUNC_0(struct event_base *VAR_0,
    evmap_signal_foreach_signal_cb VAR_1,
    void *VAR_2)
{
 struct event_signal_map *VAR_3 = &VAR_0->sigmap;
 int VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->nentries; ++VAR_5) {
  struct evmap_signal *VAR_6 = VAR_3->entries[VAR_5];
  if (!VAR_6)
   continue;
  if ((VAR_4 = VAR_1(VAR_0, VAR_5, VAR_6, VAR_2)))
   break;
 }
 return VAR_4;
}
