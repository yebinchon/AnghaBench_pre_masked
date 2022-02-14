
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp {int dummy; } ;
typedef int ev_uint16_t ;


 int FUNC_0 (struct evhttp*,char const*,int ) ;
 struct evhttp* FUNC_1 () ;
 int FUNC_2 (struct evhttp*) ;

struct evhttp *
FUNC_3(const char *VAR_0, ev_uint16_t VAR_1)
{
 struct evhttp *VAR_2 = ((void*)0);

 VAR_2 = FUNC_1();
 if (VAR_2 == ((void*)0))
  return (((void*)0));
 if (FUNC_0(VAR_2, VAR_0, VAR_1) == -1) {
  FUNC_2(VAR_2);
  return (((void*)0));
 }

 return (VAR_2);
}
