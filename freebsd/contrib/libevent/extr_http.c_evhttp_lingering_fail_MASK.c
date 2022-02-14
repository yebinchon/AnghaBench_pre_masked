
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
struct evhttp_connection {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct evhttp_connection*,int ) ;
 int FUNC_1 (struct evhttp_connection*,struct evhttp_request*) ;

__attribute__((used)) static void
FUNC_2(struct evhttp_connection *VAR_2,
 struct evhttp_request *VAR_3)
{
 if (VAR_2->flags & VAR_0)
  FUNC_1(VAR_2, VAR_3);
 else
  FUNC_0(VAR_2, VAR_1);
}
