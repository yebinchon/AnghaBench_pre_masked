
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp {int dummy; } ;
struct event_base {int dummy; } ;
typedef int ev_uint16_t ;


 struct evhttp* FUNC_0 (struct event_base*) ;
 int FUNC_1 (struct evhttp*,char*,int ,struct event_base*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct evhttp*,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static struct evhttp *
FUNC_3(ev_uint16_t *VAR_10, struct event_base *VAR_11, int VAR_12)
{
 struct evhttp *VAR_13;


 VAR_13 = FUNC_0(VAR_11);

 if (FUNC_2(VAR_13, VAR_10, VAR_12) < 0)
  return ((void*)0);


 FUNC_1(VAR_13, "/test", VAR_1, VAR_11);
 FUNC_1(VAR_13, "/chunked", VAR_2, VAR_11);
 FUNC_1(VAR_13, "/streamed", VAR_2, VAR_11);
 FUNC_1(VAR_13, "/postit", VAR_8, VAR_11);
 FUNC_1(VAR_13, "/putit", VAR_9, VAR_11);
 FUNC_1(VAR_13, "/deleteit", VAR_4, VAR_11);
 FUNC_1(VAR_13, "/delay", VAR_3, VAR_11);
 FUNC_1(VAR_13, "/largedelay", VAR_6, VAR_11);
 FUNC_1(VAR_13, "/badrequest", VAR_0, VAR_11);
 FUNC_1(VAR_13, "/oncomplete", VAR_7, VAR_11);
 FUNC_1(VAR_13, "/", VAR_5, VAR_11);
 return (VAR_13);
}
