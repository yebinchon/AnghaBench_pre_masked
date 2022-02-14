
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_changelist_fdinfo {int idxplus1; } ;
struct event_changelist {int n_changes; struct event_change* changes; } ;
struct event_change {int dummy; } ;
struct event_base {int dummy; } ;


 int FUNC_0 (int) ;
 struct event_changelist_fdinfo* FUNC_1 (struct event_base*,struct event_change*) ;
 int FUNC_2 (struct event_base*) ;

void
FUNC_3(struct event_changelist *VAR_0,
    struct event_base *VAR_1)
{
 int VAR_2;

 FUNC_2(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_0->n_changes; ++VAR_2) {
  struct event_change *VAR_3 = &VAR_0->changes[VAR_2];
  struct event_changelist_fdinfo *VAR_4 =
      FUNC_1(VAR_1, VAR_3);
  FUNC_0(VAR_4->idxplus1 == VAR_2 + 1);
  VAR_4->idxplus1 = 0;
 }

 VAR_0->n_changes = 0;

 FUNC_2(VAR_1);
}
