
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_changelist_fdinfo {int idxplus1; } ;
struct event_changelist {scalar_t__ n_changes; scalar_t__ changes_size; struct event_change* changes; } ;
struct event_change {scalar_t__ fd; short old_events; } ;
typedef scalar_t__ evutil_socket_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct event_changelist*) ;
 int FUNC_2 (struct event_change*,int ,int) ;

__attribute__((used)) static struct event_change *
FUNC_3(struct event_changelist *VAR_0,
    evutil_socket_t VAR_1,
    short VAR_2,
    struct event_changelist_fdinfo *VAR_3)
{
 struct event_change *VAR_4;

 if (VAR_3->idxplus1 == 0) {
  int VAR_5;
  FUNC_0(VAR_0->n_changes <= VAR_0->changes_size);

  if (VAR_0->n_changes == VAR_0->changes_size) {
   if (FUNC_1(VAR_0) < 0)
    return ((void*)0);
  }

  VAR_5 = VAR_0->n_changes++;
  VAR_4 = &VAR_0->changes[VAR_5];
  VAR_3->idxplus1 = VAR_5 + 1;

  FUNC_2(VAR_4, 0, sizeof(struct event_change));
  VAR_4->fd = VAR_1;
  VAR_4->old_events = VAR_2;
 } else {
  VAR_4 = &VAR_0->changes[VAR_3->idxplus1 - 1];
  FUNC_0(VAR_4->fd == VAR_1);
 }
 return VAR_4;
}
