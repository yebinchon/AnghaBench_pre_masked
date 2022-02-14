
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int minor; int major; } ;
struct evhttp_connection {int bufev; int * cb_arg; int cb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,struct evhttp_connection*) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4(struct evhttp_connection *VAR_5,
   struct evhttp_request *VAR_6)
{
 FUNC_0(VAR_5->bufev, VAR_0);
 FUNC_3(FUNC_1(VAR_5->bufev),
   "HTTP/%d.%d 100 Continue\r\n\r\n",
   VAR_6->major, VAR_6->minor);
 VAR_5->cb = VAR_3;
 VAR_5->cb_arg = ((void*)0);
 FUNC_2(VAR_5->bufev,
     VAR_2,
     VAR_4,
     VAR_1,
     VAR_5);
}
