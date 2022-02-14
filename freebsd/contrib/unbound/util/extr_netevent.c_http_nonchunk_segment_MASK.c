
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comm_point {size_t http_stored; size_t tcp_byte_count; int cb_arg; int (* callback ) (struct comm_point*,int ,int ,int *) ;int buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int (*) (struct comm_point*,int ,int ,int *)) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (int ,size_t) ;
 int FUNC_6 (struct comm_point*,int ,int ,int *) ;
 int FUNC_7 (struct comm_point*,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_8(struct comm_point* VAR_2)
{




 size_t VAR_3;
 size_t VAR_4 = FUNC_4(VAR_2->buffer) - VAR_2->http_stored;
 if(VAR_2->tcp_byte_count <= VAR_4) {

  VAR_2->http_stored = 0;
  FUNC_5(VAR_2->buffer, 0);
  FUNC_0(FUNC_1(VAR_2->callback));
  (void)(*VAR_2->callback)(VAR_2, VAR_2->cb_arg, VAR_0, ((void*)0));
  return 1;
 }
 VAR_2->tcp_byte_count -= VAR_4;


 VAR_3 = FUNC_2(VAR_2->buffer) -
  FUNC_4(VAR_2->buffer);
 if(VAR_3 >= VAR_2->tcp_byte_count ||
  VAR_3 >= 2048) {
  size_t VAR_5 = FUNC_4(VAR_2->buffer);
  FUNC_3(VAR_2->buffer);
  FUNC_5(VAR_2->buffer, VAR_5);
  VAR_2->http_stored = VAR_5;

  return 1;
 }


 VAR_2->http_stored = 0;
 FUNC_5(VAR_2->buffer, 0);
 FUNC_0(FUNC_1(VAR_2->callback));
 (void)(*VAR_2->callback)(VAR_2, VAR_2->cb_arg, VAR_1, ((void*)0));


 return 1;
}
