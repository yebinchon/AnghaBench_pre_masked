
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evrpc_pool {int dummy; } ;
struct evhttp_connection {int dummy; } ;
typedef int ev_uint16_t ;


 int FUNC_0 (int ) ;
 struct evhttp_connection* FUNC_1 (char*,int ) ;
 int FUNC_2 (struct evrpc_pool*,struct evhttp_connection*) ;
 struct evrpc_pool* FUNC_3 (int *) ;

__attribute__((used)) static struct evrpc_pool *
FUNC_4(ev_uint16_t VAR_0)
{
 struct evhttp_connection *VAR_1;
 struct evrpc_pool *VAR_2;

 VAR_2 = FUNC_3(((void*)0));
 FUNC_0(VAR_2 != ((void*)0));

 VAR_1 = FUNC_1("127.0.0.1", VAR_0);
 FUNC_0(VAR_1 != ((void*)0));

 FUNC_2(VAR_2, VAR_1);

 return (VAR_2);
}
