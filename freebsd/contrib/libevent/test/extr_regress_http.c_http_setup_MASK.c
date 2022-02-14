
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp {int dummy; } ;
typedef struct evhttp event_base ;
typedef int ev_uint16_t ;


 int VAR_0 ;
 struct evhttp* FUNC_0 (struct evhttp*) ;
 int FUNC_1 (struct evhttp*,int ,int *) ;
 int FUNC_2 (struct evhttp*,char*,int ,struct evhttp*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct evhttp*,int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 () ;

__attribute__((used)) static struct evhttp *
FUNC_5(ev_uint16_t *VAR_13, struct event_base *VAR_14, int VAR_15)
{
 struct evhttp *VAR_16;


 VAR_16 = FUNC_0(VAR_14);

 if (FUNC_3(VAR_16, VAR_13, VAR_15) < 0)
  return ((void*)0);
 FUNC_2(VAR_16, "/test", VAR_2, VAR_16);
 FUNC_2(VAR_16, "/large", VAR_7, VAR_14);
 FUNC_2(VAR_16, "/chunked", VAR_3, VAR_14);
 FUNC_2(VAR_16, "/streamed", VAR_3, VAR_14);
 FUNC_2(VAR_16, "/postit", VAR_10, VAR_14);
 FUNC_2(VAR_16, "/putit", VAR_11, VAR_14);
 FUNC_2(VAR_16, "/deleteit", VAR_5, VAR_14);
 FUNC_2(VAR_16, "/delay", VAR_4, VAR_14);
 FUNC_2(VAR_16, "/largedelay", VAR_8, VAR_14);
 FUNC_2(VAR_16, "/badrequest", VAR_1, VAR_14);
 FUNC_2(VAR_16, "/oncomplete", VAR_9, VAR_14);
 FUNC_2(VAR_16, "/", VAR_6, VAR_14);
 return (VAR_16);
}
