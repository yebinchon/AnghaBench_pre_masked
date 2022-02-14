
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evmap_signal {int dummy; } ;
struct evmap_io {int dummy; } ;
typedef void event_changelist_fdinfo ;
struct event_change {int read_change; int fd; } ;
struct event_base {int io; int sigmap; } ;


 int VAR_0 ;
 int FUNC_0 (struct evmap_io*,int *,int ,int ) ;
 int FUNC_1 (struct evmap_signal*,int *,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline struct event_changelist_fdinfo *
FUNC_2(struct event_base *VAR_3,
    const struct event_change *VAR_4)
{
 char *VAR_5;
 if (VAR_4->read_change & VAR_0) {
  struct evmap_signal *VAR_6;
  FUNC_1(VAR_6, &VAR_3->sigmap, VAR_4->fd, VAR_2);
  VAR_5 = ((char*)VAR_6) + sizeof(struct evmap_signal);
 } else {
  struct evmap_io *VAR_7;
  FUNC_0(VAR_7, &VAR_3->io, VAR_4->fd, VAR_1);
  VAR_5 = ((char*)VAR_7) + sizeof(struct evmap_io);
 }
 return (void*)VAR_5;
}
