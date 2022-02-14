
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_bound_socket {int dummy; } ;
struct evhttp {int dummy; } ;
typedef int ev_uint16_t ;


 int FUNC_0 (int,char*) ;
 struct evhttp_bound_socket* FUNC_1 (struct evhttp*,char*,int ) ;
 int FUNC_2 (struct evhttp_bound_socket*) ;
 struct evhttp* FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static struct evhttp *
FUNC_5(ev_uint16_t *VAR_0)
{
 struct evhttp *VAR_1;
 ev_uint16_t VAR_2;
 struct evhttp_bound_socket *VAR_3;

 VAR_1 = FUNC_3(((void*)0));
 if (!VAR_1)
  FUNC_0(1, "Could not start web server");


 VAR_3 = FUNC_1(VAR_1, "127.0.0.1", 0);
 if (!VAR_3)
  FUNC_0(1, "Couldn't open web port");

 VAR_2 = FUNC_4(FUNC_2(VAR_3));

 *VAR_0 = VAR_2;
 return (VAR_1);
}
