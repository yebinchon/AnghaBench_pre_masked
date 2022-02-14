
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comm_reply {int c; } ;
struct comm_point {size_t http_stored; size_t tcp_byte_count; int http_in_chunk_headers; int cb_arg; int (* callback ) (struct comm_point*,int ,int ,struct comm_reply*) ;int buffer; int http_temp; struct comm_reply repinfo; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int (*) (struct comm_point*,int ,int ,struct comm_reply*)) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 size_t FUNC_7 (int ) ;
 size_t FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,size_t) ;
 int FUNC_11 (int ,size_t) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (struct comm_point*,int ,int ,struct comm_reply*) ;
 int FUNC_15 (struct comm_point*,int ,int ,struct comm_reply*) ;

__attribute__((used)) static int
FUNC_16(struct comm_point* VAR_1)
{




 size_t VAR_2;
 size_t VAR_3 = FUNC_7(VAR_1->buffer) - VAR_1->http_stored;
 if(VAR_1->tcp_byte_count <= VAR_3) {



  size_t VAR_4;
  struct comm_reply VAR_5;
  VAR_1->http_stored = 0;
  FUNC_12(VAR_1->buffer, (ssize_t)VAR_1->tcp_byte_count);
  FUNC_4(VAR_1->http_temp);
  FUNC_13(VAR_1->http_temp,
   FUNC_5(VAR_1->buffer),
   FUNC_9(VAR_1->buffer));
  FUNC_6(VAR_1->http_temp);


  VAR_4 = FUNC_8(VAR_1->buffer);
  FUNC_11(VAR_1->buffer, 0);
  FUNC_10(VAR_1->buffer, VAR_4);
  VAR_5 = VAR_1->repinfo;
  FUNC_0(FUNC_1(VAR_1->callback));
  (void)(*VAR_1->callback)(VAR_1, VAR_1->cb_arg, VAR_0, &VAR_5);



  if(!VAR_5.c) {
   return 1;
  }

  FUNC_4(VAR_1->buffer);
  FUNC_13(VAR_1->buffer,
   FUNC_2(VAR_1->http_temp),
   FUNC_9(VAR_1->http_temp));
  FUNC_6(VAR_1->buffer);


  VAR_1->http_in_chunk_headers = 3;

  return 2;
 }
 VAR_1->tcp_byte_count -= VAR_3;



 VAR_2 = FUNC_3(VAR_1->buffer) -
  FUNC_7(VAR_1->buffer);
 if(VAR_2 >= VAR_1->tcp_byte_count ||
  VAR_2 >= 2048) {
  size_t VAR_6 = FUNC_7(VAR_1->buffer);
  FUNC_4(VAR_1->buffer);
  FUNC_11(VAR_1->buffer, VAR_6);
  VAR_1->http_stored = VAR_6;

  return 1;
 }


 VAR_1->http_stored = 0;
 FUNC_11(VAR_1->buffer, 0);
 FUNC_0(FUNC_1(VAR_1->callback));
 (void)(*VAR_1->callback)(VAR_1, VAR_1->cb_arg, VAR_0, ((void*)0));


 return 1;
}
