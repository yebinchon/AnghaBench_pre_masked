
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcl_list {int dummy; } ;
struct listen_port {scalar_t__ ftype; struct listen_port* next; int fd; } ;
struct listen_dnsport {int * cps; int * dnscrypt_udp_buff; void* udp_buff; } ;
struct dt_env {int dummy; } ;
struct comm_point {int do_not_close; int dnscrypt; int * dnscrypt_buffer; struct dt_env* dtenv; void* ssl; } ;
struct comm_base {int dummy; } ;
typedef int comm_point_callback_type ;


 struct comm_point* FUNC_0 (struct comm_base*,int ,int,int,struct tcl_list*,size_t,void*,int *,void*) ;
 struct comm_point* FUNC_1 (struct comm_base*,int ,void*,int *,void*) ;
 struct comm_point* FUNC_2 (struct comm_base*,int ,void*,int *,void*) ;
 int FUNC_3 (struct comm_point*) ;
 int FUNC_4 (struct listen_dnsport*) ;
 int FUNC_5 (struct comm_point*,struct listen_dnsport*) ;
 int FUNC_6 (struct listen_dnsport*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int) ;
 void* FUNC_10 (size_t) ;
 int VAR_7 ;
 int VAR_8 ;

struct listen_dnsport*
FUNC_11(struct comm_base* VAR_9, struct listen_port* VAR_10,
 size_t VAR_11, int VAR_12, int VAR_13,
 struct tcl_list* VAR_14, void* VAR_15,
 struct dt_env* VAR_16, comm_point_callback_type* VAR_17, void *VAR_18)
{
 struct listen_dnsport* VAR_19 = (struct listen_dnsport*)
  FUNC_9(sizeof(struct listen_dnsport));
 if(!VAR_19)
  return ((void*)0);
 VAR_19->cps = ((void*)0);
 VAR_19->udp_buff = FUNC_10(VAR_11);



 if(!VAR_19->udp_buff) {
  FUNC_4(VAR_19);
  return ((void*)0);
 }
 if(!VAR_8) {
  FUNC_7(&VAR_7);
  VAR_8 = 1;
 }


 while(VAR_10) {
  struct comm_point* VAR_20 = ((void*)0);
  if(VAR_10->ftype == VAR_3 ||
     VAR_10->ftype == VAR_4)
   VAR_20 = FUNC_1(VAR_9, VAR_10->fd,
    VAR_19->udp_buff, VAR_17, VAR_18);
  else if(VAR_10->ftype == VAR_1 ||
    VAR_10->ftype == VAR_2)
   VAR_20 = FUNC_0(VAR_9, VAR_10->fd,
    VAR_12, VAR_13,
    VAR_14, VAR_11, VAR_19->udp_buff,
    VAR_17, VAR_18);
  else if(VAR_10->ftype == VAR_0) {
   VAR_20 = FUNC_0(VAR_9, VAR_10->fd,
    VAR_12, VAR_13,
    VAR_14, VAR_11, VAR_19->udp_buff,
    VAR_17, VAR_18);
   VAR_20->ssl = VAR_15;
  } else if(VAR_10->ftype == VAR_5 ||
      VAR_10->ftype == VAR_6)
   VAR_20 = FUNC_2(VAR_9, VAR_10->fd,
    VAR_19->udp_buff, VAR_17, VAR_18);
  if(!VAR_20) {
   FUNC_8("can't create commpoint");
   FUNC_6(VAR_19);
   return ((void*)0);
  }
  VAR_20->dtenv = VAR_16;
  VAR_20->do_not_close = 1;
  if(!FUNC_5(VAR_20, VAR_19)) {
   FUNC_8("malloc failed");
   FUNC_3(VAR_20);
   FUNC_6(VAR_19);
   return ((void*)0);
  }
  VAR_10 = VAR_10->next;
 }
 if(!VAR_19->cps) {
  FUNC_8("Could not open sockets to accept queries.");
  FUNC_6(VAR_19);
  return ((void*)0);
 }

 return VAR_19;
}
