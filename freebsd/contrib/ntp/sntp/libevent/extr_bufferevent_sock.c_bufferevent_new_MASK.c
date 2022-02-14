
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int dummy; } ;
typedef int evutil_socket_t ;
typedef int bufferevent_event_cb ;
typedef int bufferevent_data_cb ;


 int FUNC_0 (struct bufferevent*,int ,int ,int ,void*) ;
 struct bufferevent* FUNC_1 (int *,int ,int ) ;

struct bufferevent *
FUNC_2(evutil_socket_t VAR_0,
    bufferevent_data_cb VAR_1, bufferevent_data_cb VAR_2,
    bufferevent_event_cb VAR_3, void *VAR_4)
{
 struct bufferevent *VAR_5;

 if (!(VAR_5 = FUNC_1(((void*)0), VAR_0, 0)))
  return ((void*)0);

 FUNC_0(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);

 return VAR_5;
}
