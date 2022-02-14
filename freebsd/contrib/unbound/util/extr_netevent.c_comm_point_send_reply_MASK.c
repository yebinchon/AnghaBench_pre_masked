
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct sldns_buffer {int dummy; } ;
struct comm_reply {TYPE_3__* c; int addr; int addrlen; scalar_t__ srctype; } ;
struct TYPE_8__ {scalar_t__ type; int tcp_timeout_msec; scalar_t__ tcp_req_info; struct sldns_buffer* buffer; TYPE_1__* tcp_parent; TYPE_2__* dtenv; struct sldns_buffer* dnscrypt_buffer; } ;
struct TYPE_7__ {scalar_t__ log_client_response_messages; } ;
struct TYPE_6__ {TYPE_2__* dtenv; } ;


 int FUNC_0 (TYPE_3__*,struct sldns_buffer*,struct sockaddr*,int ) ;
 int FUNC_1 (TYPE_3__*,struct sldns_buffer*,struct sockaddr*,int ,struct comm_reply*) ;
 int FUNC_2 (TYPE_3__*,int,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (struct comm_reply*) ;
 int FUNC_4 (TYPE_2__*,int *,scalar_t__,struct sldns_buffer*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;

void
FUNC_7(struct comm_reply *VAR_1)
{
 struct sldns_buffer* VAR_2;
 FUNC_5(VAR_1 && VAR_1->c);






 VAR_2 = VAR_1->c->buffer;

 if(VAR_1->c->type == VAR_0) {
  if(VAR_1->srctype)
   FUNC_1(VAR_1->c,
   VAR_2, (struct sockaddr*)&VAR_1->addr,
   VAR_1->addrlen, VAR_1);
  else
   FUNC_0(VAR_1->c, VAR_2,
   (struct sockaddr*)&VAR_1->addr, VAR_1->addrlen);






 } else {






  if(VAR_1->c->tcp_req_info) {
   FUNC_6(VAR_1->c->tcp_req_info);
  } else {
   FUNC_2(VAR_1->c, -1,
    VAR_1->c->tcp_timeout_msec);
  }
 }
}
