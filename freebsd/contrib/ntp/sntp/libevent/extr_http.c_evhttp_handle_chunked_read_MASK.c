
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evhttp_request {scalar_t__ ntoread; scalar_t__ body_size; int flags; struct evbuffer* input_buffer; int cb_arg; int (* chunk_cb ) (struct evhttp_request*,int ) ;TYPE_1__* evcon; } ;
struct evbuffer {int dummy; } ;
typedef scalar_t__ ev_uint64_t ;
typedef scalar_t__ ev_int64_t ;
typedef enum message_read_status { ____Placeholder_message_read_status } message_read_status ;
struct TYPE_2__ {scalar_t__ max_body_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct evbuffer*,size_t) ;
 size_t FUNC_1 (struct evbuffer*) ;
 char* FUNC_2 (struct evbuffer*,int *,int ) ;
 int FUNC_3 (struct evbuffer*,struct evbuffer*,size_t) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char**,int) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (struct evhttp_request*,int ) ;

__attribute__((used)) static enum message_read_status
FUNC_9(struct evhttp_request *VAR_10, struct evbuffer *VAR_11)
{
 if (VAR_10 == ((void*)0) || VAR_11 == ((void*)0)) {
     return VAR_1;
 }

 while (1) {
  size_t VAR_12;

  if ((VAR_12 = FUNC_1(VAR_11)) == 0) {
   break;
  }



  if (VAR_12 > VAR_7) {
   return VAR_1;
  }

  if (VAR_10->ntoread < 0) {

   ev_int64_t VAR_13;
   char *VAR_14 = FUNC_2(VAR_11, ((void*)0), VAR_3);
   char *VAR_15;
   int VAR_16;
   if (VAR_14 == ((void*)0))
    break;

   if (FUNC_7(VAR_14) == 0) {
    FUNC_6(VAR_14);
    continue;
   }
   VAR_13 = FUNC_5(VAR_14, &VAR_15, 16);
   VAR_16 = (*VAR_14 == '\0' ||
       (*VAR_15 != '\0' && *VAR_15 != ' ') ||
       VAR_13 < 0);
   FUNC_6(VAR_14);
   if (VAR_16) {

    return (VAR_1);
   }


   if ((ev_uint64_t)VAR_13 > VAR_6 - VAR_10->body_size) {
       return VAR_1;
   }

   if (VAR_10->body_size + (size_t)VAR_13 > VAR_10->evcon->max_body_size) {

    FUNC_4(("Request body is too long"));
    return (VAR_2);
   }

   VAR_10->body_size += (size_t)VAR_13;
   VAR_10->ntoread = VAR_13;
   if (VAR_10->ntoread == 0) {

    return (VAR_0);
   }
   continue;
  }



  if (VAR_10->ntoread > VAR_7) {
   return VAR_1;
  }


  if (VAR_10->ntoread > 0 && VAR_12 < (ev_uint64_t)VAR_10->ntoread)
   return (VAR_8);


  FUNC_3(VAR_11, VAR_10->input_buffer, (size_t)VAR_10->ntoread);
  VAR_10->ntoread = -1;
  if (VAR_10->chunk_cb != ((void*)0)) {
   VAR_10->flags |= VAR_4;
   (*VAR_10->chunk_cb)(VAR_10, VAR_10->cb_arg);
   FUNC_0(VAR_10->input_buffer,
       FUNC_1(VAR_10->input_buffer));
   VAR_10->flags &= ~VAR_4;
   if ((VAR_10->flags & VAR_5) != 0) {
    return (VAR_9);
   }
  }
 }

 return (VAR_8);
}
