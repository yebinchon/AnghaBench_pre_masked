
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evmap_signal {int events; } ;
struct eventop {int (* add ) (struct event_base*,int ,int ,int ,int *) ;int fdinfo_len; } ;
struct event_signal_map {int nentries; } ;
struct event_base {struct eventop* evsigsel; struct event_signal_map sigmap; } ;
struct event {int ev_fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct evmap_signal*,struct event_signal_map*,int,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,struct event*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct event_signal_map*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct event_base*,int ,int ,int ,int *) ;

int
FUNC_5(struct event_base *VAR_4, int VAR_5, struct event *VAR_6)
{
 const struct eventop *VAR_7 = VAR_4->evsigsel;
 struct event_signal_map *VAR_8 = &VAR_4->sigmap;
 struct evmap_signal *VAR_9 = ((void*)0);

 if (VAR_5 >= VAR_8->nentries) {
  if (FUNC_3(
   VAR_8, VAR_5, sizeof(struct evmap_signal *)) == -1)
   return (-1);
 }
 FUNC_0(VAR_9, VAR_8, VAR_5, VAR_2, VAR_3,
     VAR_4->evsigsel->fdinfo_len);

 if (FUNC_1(&VAR_9->events)) {
  if (VAR_7->add(VAR_4, VAR_6->ev_fd, 0, VAR_0, ((void*)0))
      == -1)
   return (-1);
 }

 FUNC_2(&VAR_9->events, VAR_6, VAR_1);

 return (1);
}
