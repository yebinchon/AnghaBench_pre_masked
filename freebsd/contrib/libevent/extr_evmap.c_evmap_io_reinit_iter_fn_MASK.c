
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evmap_io {int events; scalar_t__ nclose; scalar_t__ nwrite; scalar_t__ nread; } ;
struct eventop {int (* add ) (struct event_base*,int ,int ,short,void*) ;scalar_t__ fdinfo_len; } ;
struct event_base {struct eventop* evsel; } ;
struct event {short ev_events; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (struct evmap_io*) ;
 short VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 struct event* FUNC_1 (int *) ;
 int FUNC_2 (void*,int ,scalar_t__) ;
 int FUNC_3 (struct event_base*,int ,int ,short,void*) ;

__attribute__((used)) static int
FUNC_4(struct event_base *VAR_4, evutil_socket_t VAR_5,
    struct evmap_io *VAR_6, void *VAR_7)
{
 const struct eventop *VAR_8 = VAR_4->evsel;
 void *VAR_9;
 int *VAR_10 = VAR_7;
 short VAR_11 = 0;
 struct event *VAR_12;
 FUNC_0(VAR_6);

 VAR_9 = ((char*)VAR_6) + sizeof(struct evmap_io);
 if (VAR_6->nread)
  VAR_11 |= VAR_2;
 if (VAR_6->nwrite)
  VAR_11 |= VAR_3;
 if (VAR_6->nclose)
  VAR_11 |= VAR_0;
 if (VAR_8->fdinfo_len)
  FUNC_2(VAR_9, 0, VAR_8->fdinfo_len);
 if (VAR_11 &&
     (VAR_12 = FUNC_1(&VAR_6->events)) &&
     (VAR_12->ev_events & VAR_1))
  VAR_11 |= VAR_1;
 if (VAR_8->add(VAR_4, VAR_5, 0, VAR_11, VAR_9) == -1)
  *VAR_10 = -1;

 return 0;
}
