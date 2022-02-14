
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evhttp_request {scalar_t__ kind; int chunked; int ntoread; TYPE_1__* evcon; int input_headers; int type; } ;
struct evhttp_connection {int bufev; int state; } ;
typedef scalar_t__ ev_uint64_t ;
struct TYPE_2__ {scalar_t__ max_body_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct evhttp_request*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct evhttp_connection*) ;
 int FUNC_4 (struct evhttp_connection*,int ) ;
 char* FUNC_5 (int ,char*) ;
 int FUNC_6 (struct evhttp_request*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct evhttp_connection*,struct evhttp_request*) ;
 int FUNC_9 (struct evhttp_connection*,struct evhttp_request*) ;
 int FUNC_10 (struct evhttp_request*,int ,int *) ;
 scalar_t__ FUNC_11 (char const*,char*) ;

__attribute__((used)) static void
FUNC_12(struct evhttp_connection *VAR_6, struct evhttp_request *VAR_7)
{
 const char *VAR_8;


 if (VAR_7->kind == VAR_1 &&
     !FUNC_7(VAR_7->type)) {
  FUNC_3(VAR_6);
  return;
 }
 VAR_6->state = VAR_0;
 VAR_8 = FUNC_5(VAR_7->input_headers, "Transfer-Encoding");
 if (VAR_8 != ((void*)0) && FUNC_11(VAR_8, "chunked") == 0) {
  VAR_7->chunked = 1;
  VAR_7->ntoread = -1;
 } else {
  if (FUNC_6(VAR_7) == -1) {
   FUNC_4(VAR_6,
       VAR_2);
   return;
  }
  if (VAR_7->kind == VAR_1 && VAR_7->ntoread < 1) {


   FUNC_3(VAR_6);
   return;
  }
 }


 if (VAR_7->kind == VAR_1 && FUNC_0(VAR_7, 1, 1)) {
  const char *VAR_9;

  VAR_9 = FUNC_5(VAR_7->input_headers, "Expect");
  if (VAR_9) {
   if (!FUNC_11(VAR_9, "100-continue")) {






    if (VAR_7->ntoread > 0) {

     if ((VAR_7->evcon->max_body_size <= VAR_3) && (ev_uint64_t)VAR_7->ntoread > VAR_7->evcon->max_body_size) {
      FUNC_10(VAR_7, VAR_4, ((void*)0));
      return;
     }
    }
    if (!FUNC_2(FUNC_1(VAR_6->bufev)))
     FUNC_9(VAR_6, VAR_7);
   } else {
    FUNC_10(VAR_7, VAR_5,
     ((void*)0));
    return;
   }
  }
 }

 FUNC_8(VAR_6, VAR_7);

}
