
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comm_point {int http_is_chunked; size_t tcp_byte_count; int http_in_chunk_headers; int buffer; scalar_t__ http_in_headers; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int ,char*,char*) ;

__attribute__((used)) static int
FUNC_6(struct comm_point* VAR_1)
{
 char* VAR_2 = FUNC_1(VAR_1->buffer);
 if(!VAR_2) return 1;
 FUNC_5(VAR_0, "http header: %s", VAR_2);
 if(FUNC_4(VAR_2, "HTTP/1.1 ", 9) == 0) {

  if(VAR_2[9] != '2') {
   FUNC_5(VAR_0, "http bad status %s", VAR_2+9);
   return 0;
  }
 } else if(FUNC_4(VAR_2, "Content-Length: ", 16) == 0) {
  if(!VAR_1->http_is_chunked)
   VAR_1->tcp_byte_count = (size_t)FUNC_0(VAR_2+16);
 } else if(FUNC_4(VAR_2, "Transfer-Encoding: chunked", 19+7) == 0) {
  VAR_1->tcp_byte_count = 0;
  VAR_1->http_is_chunked = 1;
 } else if(VAR_2[0] == 0) {

  VAR_1->http_in_headers = 0;
  if(VAR_1->http_is_chunked)
   VAR_1->http_in_chunk_headers = 1;




  FUNC_2(VAR_1->buffer);
  FUNC_3(VAR_1->buffer);
  return 1;
 }

 return 1;
}
