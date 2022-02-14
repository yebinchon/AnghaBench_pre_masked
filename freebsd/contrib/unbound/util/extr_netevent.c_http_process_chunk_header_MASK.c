
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comm_point {int http_in_chunk_headers; scalar_t__ tcp_byte_count; int buffer; int cb_arg; int (* callback ) (struct comm_point*,int ,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int (*) (struct comm_point*,int ,int ,int *)) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (char*,char**,int) ;
 int FUNC_8 (struct comm_point*,int ,int ,int *) ;
 int FUNC_9 (int ,char*,char*) ;

__attribute__((used)) static int
FUNC_10(struct comm_point* VAR_2)
{
 char* VAR_3 = FUNC_2(VAR_2->buffer);
 if(!VAR_3) return 1;
 if(VAR_2->http_in_chunk_headers == 3) {
  FUNC_9(VAR_1, "http chunk trailer: %s", VAR_3);

  if(VAR_3[0] == 0 && VAR_2->tcp_byte_count == 0) {


   FUNC_6(VAR_2->buffer, 0);
   FUNC_5(VAR_2->buffer, 0);
   FUNC_0(FUNC_1(VAR_2->callback));
   (void)(*VAR_2->callback)(VAR_2, VAR_2->cb_arg, VAR_0, ((void*)0));

   return 2;
  }
  if(VAR_3[0] == 0) {

   VAR_2->http_in_chunk_headers = 1;

   FUNC_3(VAR_2->buffer);
   FUNC_4(VAR_2->buffer);
   return 1;
  }

  return 1;
 }
 FUNC_9(VAR_1, "http chunk header: %s", VAR_3);
 if(VAR_2->http_in_chunk_headers == 1) {

  char* VAR_4 = ((void*)0);
  VAR_2->tcp_byte_count = (size_t)FUNC_7(VAR_3, &VAR_4, 16);
  if(VAR_4 == VAR_3)
   return 0;
  VAR_2->http_in_chunk_headers = 0;

  FUNC_3(VAR_2->buffer);
  FUNC_4(VAR_2->buffer);
  if(VAR_2->tcp_byte_count == 0) {

   VAR_2->http_in_chunk_headers = 3;
  }
  return 1;
 }

 return 1;
}
