
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evmap_io {int dummy; } ;
struct event_changelist_fdinfo {int idxplus1; } ;
struct event_changelist {struct event_change* changes; } ;
struct event_change {scalar_t__ fd; } ;
struct event_base {struct event_changelist changelist; } ;
typedef scalar_t__ evutil_socket_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(
 struct event_base *VAR_0,
 evutil_socket_t VAR_1, struct evmap_io *VAR_2, void *VAR_3)
{
 struct event_changelist *VAR_4 = &VAR_0->changelist;
 struct event_changelist_fdinfo *VAR_5;
 VAR_5 = (void*)
     ( ((char*)VAR_2) + sizeof(struct evmap_io) );
 if (VAR_5->idxplus1) {
  struct event_change *VAR_6 = &VAR_4->changes[VAR_5->idxplus1 - 1];
  FUNC_0(VAR_6->fd == VAR_1);
 }
 return 0;
}
