
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evhttp_request {scalar_t__ ntoread; size_t body_size; int flags; struct evbuffer* input_buffer; int cb_arg; int (* chunk_cb ) (struct evhttp_request*,int ) ;TYPE_1__* evcon; scalar_t__ chunked; } ;
struct evhttp_connection {int bufev; int state; } ;
struct evbuffer {int dummy; } ;
struct TYPE_2__ {size_t max_body_size; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 struct evbuffer* FUNC_2 (int ) ;
 int FUNC_3 (struct evbuffer*,struct evbuffer*) ;
 int FUNC_4 (struct evbuffer*,size_t) ;
 size_t FUNC_5 (struct evbuffer*) ;
 int FUNC_6 (struct evbuffer*,struct evbuffer*,size_t) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct evhttp_connection*) ;
 int FUNC_9 (struct evhttp_connection*,int ) ;
 int FUNC_10 (struct evhttp_request*,struct evbuffer*) ;
 int FUNC_11 (struct evhttp_connection*,struct evhttp_request*) ;
 int FUNC_12 (struct evhttp_request*) ;
 int FUNC_13 (struct evhttp_request*,int ) ;

__attribute__((used)) static void
FUNC_14(struct evhttp_connection *VAR_6, struct evhttp_request *VAR_7)
{
 struct evbuffer *VAR_8 = FUNC_2(VAR_6->bufev);

 if (VAR_7->chunked) {
  switch (FUNC_10(VAR_7, VAR_8)) {
  case 132:

   VAR_6->state = VAR_0;
   FUNC_11(VAR_6, VAR_7);
   return;
  case 131:
  case 130:

   FUNC_9(VAR_6,
       VAR_3);
   return;
  case 128:

   FUNC_12(VAR_7);
   return;
  case 129:
  default:
   break;
  }
 } else if (VAR_7->ntoread < 0) {

  if ((size_t)(VAR_7->body_size + FUNC_5(VAR_8)) < VAR_7->body_size) {
   FUNC_9(VAR_6, VAR_4);
   return;
  }

  VAR_7->body_size += FUNC_5(VAR_8);
  FUNC_3(VAR_7->input_buffer, VAR_8);
 } else if (VAR_7->chunk_cb != ((void*)0) || FUNC_5(VAR_8) >= (size_t)VAR_7->ntoread) {



  size_t VAR_9 = FUNC_5(VAR_8);

  if (VAR_9 > (size_t) VAR_7->ntoread)
   VAR_9 = (size_t) VAR_7->ntoread;
  VAR_7->ntoread -= VAR_9;
  VAR_7->body_size += VAR_9;
  FUNC_6(VAR_8, VAR_7->input_buffer, VAR_9);
 }

 if (VAR_7->body_size > VAR_7->evcon->max_body_size ||
     (!VAR_7->chunked && VAR_7->ntoread >= 0 &&
  (size_t)VAR_7->ntoread > VAR_7->evcon->max_body_size)) {


  FUNC_7(("Request body is too long"));
  FUNC_9(VAR_6,
           VAR_3);
  return;
 }

 if (FUNC_5(VAR_7->input_buffer) > 0 && VAR_7->chunk_cb != ((void*)0)) {
  VAR_7->flags |= VAR_1;
  (*VAR_7->chunk_cb)(VAR_7, VAR_7->cb_arg);
  VAR_7->flags &= ~VAR_1;
  FUNC_4(VAR_7->input_buffer,
      FUNC_5(VAR_7->input_buffer));
  if ((VAR_7->flags & VAR_2) != 0) {
   FUNC_12(VAR_7);
   return;
  }
 }

 if (VAR_7->ntoread == 0) {
  FUNC_0(VAR_6->bufev, VAR_5);

  FUNC_8(VAR_6);
  return;
 }


 FUNC_1(VAR_6->bufev, VAR_5);
}
