
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evhttp_request {size_t headers_size; int kind; TYPE_1__* evcon; } ;
struct evbuffer {int dummy; } ;
typedef enum message_read_status { ____Placeholder_message_read_status } message_read_status ;
struct TYPE_2__ {size_t max_headers_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 size_t FUNC_0 (struct evbuffer*) ;
 char* FUNC_1 (struct evbuffer*,size_t*,int ) ;
 int FUNC_2 (struct evhttp_request*,char*) ;
 int FUNC_3 (struct evhttp_request*,char*) ;
 int FUNC_4 (char*) ;

enum message_read_status
FUNC_5(struct evhttp_request *VAR_5, struct evbuffer *VAR_6)
{
 char *VAR_7;
 enum message_read_status VAR_8 = VAR_0;

 size_t VAR_9;

 VAR_7 = FUNC_1(VAR_6, &VAR_9, VAR_3);
 if (VAR_7 == ((void*)0)) {
  if (VAR_5->evcon != ((void*)0) &&
      FUNC_0(VAR_6) > VAR_5->evcon->max_headers_size)
   return (VAR_2);
  else
   return (VAR_4);
 }

 if (VAR_5->evcon != ((void*)0) &&
     VAR_9 > VAR_5->evcon->max_headers_size) {
  FUNC_4(VAR_7);
  return (VAR_2);
 }

 VAR_5->headers_size = VAR_9;

 switch (VAR_5->kind) {
 case 129:
  if (FUNC_2(VAR_5, VAR_7) == -1)
   VAR_8 = VAR_1;
  break;
 case 128:
  if (FUNC_3(VAR_5, VAR_7) == -1)
   VAR_8 = VAR_1;
  break;
 default:
  VAR_8 = VAR_1;
 }

 FUNC_4(VAR_7);
 return (VAR_8);
}
