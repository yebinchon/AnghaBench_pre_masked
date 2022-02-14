
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evmap_io {int nread; int nwrite; int nclose; } ;
struct eventop {int (* del ) (struct event_base*,scalar_t__,short,short,void*) ;} ;
struct event_io_map {scalar_t__ nentries; } ;
struct event_base {struct event_io_map io; struct eventop* evsel; } ;
struct event {scalar_t__ ev_fd; short ev_events; } ;
typedef scalar_t__ evutil_socket_t ;


 int FUNC_0 (int) ;
 short VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 int FUNC_1 (struct evmap_io*,struct event_io_map*,scalar_t__,int ) ;
 int FUNC_2 (struct event*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct event_base*,scalar_t__,short,short,void*) ;

int
FUNC_4(struct event_base *VAR_5, evutil_socket_t VAR_6, struct event *VAR_7)
{
 const struct eventop *VAR_8 = VAR_5->evsel;
 struct event_io_map *VAR_9 = &VAR_5->io;
 struct evmap_io *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14 = 0;
 short VAR_15 = 0, VAR_16 = 0;

 if (VAR_6 < 0)
  return 0;

 FUNC_0(VAR_6 == VAR_7->ev_fd);


 if (VAR_6 >= VAR_9->nentries)
  return (-1);


 FUNC_1(VAR_10, VAR_9, VAR_6, VAR_4);

 VAR_11 = VAR_10->nread;
 VAR_12 = VAR_10->nwrite;
 VAR_13 = VAR_10->nclose;

 if (VAR_11)
  VAR_16 |= VAR_1;
 if (VAR_12)
  VAR_16 |= VAR_2;
 if (VAR_13)
  VAR_16 |= VAR_0;

 if (VAR_7->ev_events & VAR_1) {
  if (--VAR_11 == 0)
   VAR_15 |= VAR_1;
  FUNC_0(VAR_11 >= 0);
 }
 if (VAR_7->ev_events & VAR_2) {
  if (--VAR_12 == 0)
   VAR_15 |= VAR_2;
  FUNC_0(VAR_12 >= 0);
 }
 if (VAR_7->ev_events & VAR_0) {
  if (--VAR_13 == 0)
   VAR_15 |= VAR_0;
  FUNC_0(VAR_13 >= 0);
 }

 if (VAR_15) {
  void *VAR_17 = ((char*)VAR_10) + sizeof(struct evmap_io);
  if (VAR_8->del(VAR_5, VAR_7->ev_fd, VAR_16, VAR_15, VAR_17) == -1) {
   VAR_14 = -1;
  } else {
   VAR_14 = 1;
  }
 }

 VAR_10->nread = VAR_11;
 VAR_10->nwrite = VAR_12;
 VAR_10->nclose = VAR_13;
 FUNC_2(VAR_7, VAR_3);

 return (VAR_14);
}
