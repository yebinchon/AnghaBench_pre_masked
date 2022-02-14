
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int flags; int output_headers; int input_headers; int on_complete_cb_arg; int (* on_complete_cb ) (struct evhttp_request*,int ) ;} ;
struct evhttp_connection {int requests; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct evhttp_request*,int,int) ;
 struct evhttp_request* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct evhttp_request*,int ) ;
 int FUNC_4 (struct evhttp_connection*) ;
 int FUNC_5 (struct evhttp_connection*) ;
 scalar_t__ FUNC_6 (int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct evhttp_request*) ;
 int VAR_1 ;
 int FUNC_9 (struct evhttp_request*,int ) ;

__attribute__((used)) static void
FUNC_10(struct evhttp_connection *VAR_2, void *VAR_3)
{
 int VAR_4;
 struct evhttp_request *VAR_5 = FUNC_2(&VAR_2->requests);
 FUNC_3(&VAR_2->requests, VAR_5, VAR_1);

 if (VAR_5->on_complete_cb != ((void*)0)) {
  VAR_5->on_complete_cb(VAR_5, VAR_5->on_complete_cb_arg);
 }

 VAR_4 =
     (FUNC_1(VAR_5, 1, 1) &&
  !FUNC_7(VAR_5->input_headers))||
     FUNC_6(VAR_5->flags, VAR_5->input_headers) ||
     FUNC_6(VAR_5->flags, VAR_5->output_headers);

 FUNC_0(VAR_5->flags & VAR_0);
 FUNC_8(VAR_5);

 if (VAR_4) {
  FUNC_5(VAR_2);
  return;
 }


 if (FUNC_4(VAR_2) == -1) {
  FUNC_5(VAR_2);
 }
}
