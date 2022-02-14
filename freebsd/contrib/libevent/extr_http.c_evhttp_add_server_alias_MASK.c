
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_server_alias {int alias; } ;
struct evhttp {int aliases; } ;


 int FUNC_0 (int *,struct evhttp_server_alias*,int ) ;
 struct evhttp_server_alias* FUNC_1 (int,int) ;
 int FUNC_2 (struct evhttp_server_alias*) ;
 int FUNC_3 (char const*) ;
 int VAR_0 ;

int
FUNC_4(struct evhttp *VAR_1, const char *VAR_2)
{
 struct evhttp_server_alias *VAR_3;

 VAR_3 = FUNC_1(1, sizeof(*VAR_3));
 if (!VAR_3)
  return -1;

 VAR_3->alias = FUNC_3(VAR_2);
 if (!VAR_3->alias) {
  FUNC_2(VAR_3);
  return -1;
 }

 FUNC_0(&VAR_1->aliases, VAR_3, VAR_0);

 return 0;
}
