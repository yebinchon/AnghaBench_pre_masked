
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_bound_socket {int dummy; } ;
struct evhttp {int dummy; } ;
typedef scalar_t__ ev_uint16_t ;


 int FUNC_0 (int,char*) ;
 struct evhttp_bound_socket* FUNC_1 (struct evhttp*,char*,scalar_t__) ;
 int FUNC_2 (struct evhttp_bound_socket*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct evhttp *VAR_0, ev_uint16_t *VAR_1, int VAR_2)
{
 int VAR_3;
 struct evhttp_bound_socket *VAR_4;

 if (VAR_2)
  VAR_4 = FUNC_1(VAR_0, "::1", *VAR_1);
 else
  VAR_4 = FUNC_1(VAR_0, "127.0.0.1", *VAR_1);

 if (VAR_4 == ((void*)0)) {
  if (VAR_2)
   return -1;
  else
   FUNC_0(1, "Could not start web server");
 }

 VAR_3 = FUNC_3(FUNC_2(VAR_4));
 if (VAR_3 < 0)
  return -1;
 *VAR_1 = (ev_uint16_t) VAR_3;

 return 0;
}
