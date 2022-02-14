
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct sldns_buffer {int dummy; } ;
struct comm_reply {struct comm_point* c; scalar_t__ addrlen; int addr; scalar_t__ srctype; } ;
struct comm_point {scalar_t__ type; int fd; struct sldns_buffer* buffer; struct sldns_buffer* dnscrypt_buffer; int cb_arg; scalar_t__ (* callback ) (struct comm_point*,int ,int ,struct comm_reply*) ;TYPE_1__* ev; } ;
typedef int ssize_t ;
typedef scalar_t__ socklen_t ;
struct TYPE_2__ {int base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 short VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct comm_point*,struct sldns_buffer*,struct sockaddr*,scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__ (*) (struct comm_point*,int ,int ,struct comm_reply*)) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (int,void*,scalar_t__,int ,struct sockaddr*,scalar_t__*) ;
 scalar_t__ FUNC_7 (struct sldns_buffer*) ;
 int FUNC_8 (struct sldns_buffer*) ;
 int FUNC_9 (struct sldns_buffer*) ;
 scalar_t__ FUNC_10 (struct sldns_buffer*) ;
 int FUNC_11 (struct sldns_buffer*,int) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (struct comm_point*,int ,int ,struct comm_reply*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (scalar_t__) ;

void
FUNC_16(int VAR_10, short VAR_11, void* VAR_12)
{
 struct comm_reply VAR_13;
 ssize_t VAR_14;
 int VAR_15;
 struct sldns_buffer *VAR_16;

 VAR_13.c = (struct comm_point*)VAR_12;
 FUNC_4(VAR_13.c->type == VAR_8);

 if(!(VAR_11&VAR_4))
  return;
 FUNC_4(VAR_13.c && VAR_13.c->buffer && VAR_13.c->fd == VAR_10);
 FUNC_14(VAR_13.c->ev->base);
 for(VAR_15=0; VAR_15<VAR_3; VAR_15++) {
  FUNC_8(VAR_13.c->buffer);
  VAR_13.addrlen = (socklen_t)sizeof(VAR_13.addr);
  FUNC_4(VAR_10 != -1);
  FUNC_4(FUNC_10(VAR_13.c->buffer) > 0);
  VAR_14 = FUNC_6(VAR_10, (void*)FUNC_7(VAR_13.c->buffer),
   FUNC_10(VAR_13.c->buffer), 0,
   (struct sockaddr*)&VAR_13.addr, &VAR_13.addrlen);
  if(VAR_14 == -1) {

   if(VAR_9 != VAR_0 && VAR_9 != VAR_1)
    FUNC_5("recvfrom %d failed: %s",
     VAR_10, FUNC_12(VAR_9));







   return;
  }
  FUNC_11(VAR_13.c->buffer, VAR_14);
  FUNC_9(VAR_13.c->buffer);
  VAR_13.srctype = 0;
  FUNC_2(FUNC_3(VAR_13.c->callback));
  if((*VAR_13.c->callback)(VAR_13.c, VAR_13.c->cb_arg, VAR_2, &VAR_13)) {




   VAR_16 = VAR_13.c->buffer;

   (void)FUNC_1(VAR_13.c, VAR_16,
    (struct sockaddr*)&VAR_13.addr, VAR_13.addrlen);
  }
  if(!VAR_13.c || VAR_13.c->fd != VAR_10)

   break;
 }
}
