
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comm_point {scalar_t__ type; scalar_t__ ssl_shake_state; int buffer; int http_is_chunked; scalar_t__ http_in_chunk_headers; scalar_t__ http_in_headers; scalar_t__ ssl; int tcp_is_reading; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct comm_point*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct comm_point*) ;
 int FUNC_4 (struct comm_point*) ;
 int FUNC_5 (struct comm_point*) ;
 int FUNC_6 (int,struct comm_point*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct comm_point*) ;
 int FUNC_11 (struct comm_point*) ;

__attribute__((used)) static int
FUNC_12(int VAR_2, struct comm_point* VAR_3)
{
 FUNC_7(VAR_3->type == VAR_0);
 FUNC_7(VAR_2 != -1);
 if(!VAR_3->tcp_is_reading)
  return 1;

 if(VAR_3->ssl) {
  if(!FUNC_11(VAR_3))
   return 0;
 } else {
  if(!FUNC_6(VAR_2, VAR_3))
   return 0;
 }

 FUNC_8(VAR_3->buffer);
 while(FUNC_9(VAR_3->buffer) > 0) {

  if(VAR_3->http_in_headers || VAR_3->http_in_chunk_headers) {

   if(!FUNC_1(VAR_3->buffer)) {


    FUNC_2(VAR_3->buffer);

    return 1;
   }
   if(!VAR_3->http_in_chunk_headers) {

    if(!FUNC_5(VAR_3))
     return 0;
   } else {

    int VAR_4 = FUNC_4(VAR_3);
    if(VAR_4 == 0) return 0;
    if(VAR_4 == 2) return 1;

   }

   continue;
  }

  if(!VAR_3->http_is_chunked) {

   return FUNC_3(VAR_3);
  } else {

   int VAR_5 = FUNC_0(VAR_3);
   if(VAR_5 == 0) return 0;
   if(VAR_5 == 1) return 1;
   continue;
  }
 }



 FUNC_2(VAR_3->buffer);

 return 1;
}
