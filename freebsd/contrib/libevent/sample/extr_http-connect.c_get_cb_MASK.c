
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
struct evbuffer {int dummy; } ;
typedef int ev_ssize_t ;


 int FUNC_0 (struct evhttp_request*) ;
 int FUNC_1 (struct evbuffer*,int ) ;
 int FUNC_2 (struct evbuffer*) ;
 int FUNC_3 (struct evbuffer*,int ) ;
 struct evbuffer* FUNC_4 (struct evhttp_request*) ;
 int FUNC_5 (int ,int ,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6(struct evhttp_request *VAR_1, void *VAR_2)
{
 ev_ssize_t VAR_3;
 struct evbuffer *VAR_4;

 FUNC_0(VAR_1);

 VAR_4 = FUNC_4(VAR_1);
 VAR_3 = FUNC_2(VAR_4);
 FUNC_5(FUNC_3(VAR_4, VAR_3), VAR_3, 1, VAR_0);
 FUNC_1(VAR_4, VAR_3);
}
