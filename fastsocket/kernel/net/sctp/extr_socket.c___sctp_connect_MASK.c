
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int sa_family; } ;
struct TYPE_9__ {int sin_port; } ;
union sctp_addr {TYPE_5__ sa; TYPE_1__ v4; } ;
struct sockaddr {int dummy; } ;
struct sock {TYPE_7__* sk_socket; scalar_t__ sk_err; } ;
struct sctp_transport {int dummy; } ;
struct sctp_sock {struct sctp_endpoint* ep; } ;
struct TYPE_10__ {scalar_t__ port; } ;
struct TYPE_11__ {TYPE_2__ bind_addr; } ;
struct sctp_endpoint {TYPE_3__ base; } ;
struct TYPE_12__ {unsigned short port; } ;
struct sctp_association {scalar_t__ state; int assoc_id; TYPE_4__ peer; } ;
struct sctp_af {int sockaddr_len; int (* to_sk_daddr ) (union sctp_addr*,struct sock*) ;} ;
typedef int sctp_scope_t ;
typedef int sctp_assoc_t ;
typedef int sa_family_t ;
struct TYPE_16__ {int dport; } ;
struct TYPE_15__ {TYPE_6__* file; } ;
struct TYPE_14__ {unsigned int f_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (char*,struct sctp_association*,struct sockaddr*,int) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned short) ;
 TYPE_8__* FUNC_3 (struct sock*) ;
 int FUNC_4 (union sctp_addr*,union sctp_addr*,int) ;
 unsigned short FUNC_5 (int ) ;
 struct sctp_transport* FUNC_6 (struct sctp_association*,union sctp_addr*,int ,int ) ;
 int FUNC_7 (struct sctp_association*,int ,int ) ;
 int FUNC_8 (struct sctp_association*,int ) ;
 int FUNC_9 (struct sctp_association*) ;
 struct sctp_association* FUNC_10 (struct sctp_endpoint*,struct sock*,int ,int ) ;
 scalar_t__ FUNC_11 (struct sock*) ;
 scalar_t__ FUNC_12 (struct sctp_endpoint*,union sctp_addr*) ;
 struct sctp_association* FUNC_13 (struct sctp_endpoint*,union sctp_addr*,struct sctp_transport**) ;
 struct sctp_af* FUNC_14 (int ) ;
 int FUNC_15 (struct sctp_association*,int *) ;
 int FUNC_16 (union sctp_addr*) ;
 struct sctp_sock* FUNC_17 (struct sock*) ;
 scalar_t__ FUNC_18 (struct sock*,int ) ;
 scalar_t__ FUNC_19 (struct sock*,int ) ;
 int FUNC_20 (struct sctp_association*) ;
 int FUNC_21 (struct sock*,union sctp_addr*,int) ;
 int FUNC_22 (struct sctp_association*,long*) ;
 long FUNC_23 (struct sock*,unsigned int) ;
 int FUNC_24 (union sctp_addr*,struct sock*) ;

__attribute__((used)) static int FUNC_25(struct sock* VAR_17,
     struct sockaddr *VAR_18,
     int VAR_19,
     sctp_assoc_t *VAR_20)
{
 struct sctp_sock *VAR_21;
 struct sctp_endpoint *VAR_22;
 struct sctp_association *VAR_23 = ((void*)0);
 struct sctp_association *VAR_24;
 struct sctp_transport *VAR_25;
 union sctp_addr VAR_26;
 struct sctp_af *VAR_27;
 sctp_scope_t VAR_28;
 long VAR_29;
 int VAR_30 = 0;
 int VAR_31 = 0;
 int VAR_32 = 0;
 union sctp_addr *VAR_33 = ((void*)0);
 void *VAR_34;
 unsigned short VAR_35;
 unsigned int VAR_36 = 0;

 VAR_21 = FUNC_17(VAR_17);
 VAR_22 = VAR_21->ep;






 if (FUNC_18(VAR_17, VAR_9) ||
     (FUNC_19(VAR_17, VAR_16) && FUNC_18(VAR_17, VAR_11))) {
  VAR_30 = -VAR_7;
  goto out_free;
 }


 VAR_34 = VAR_18;
 while (VAR_32 < VAR_19) {
  if (VAR_32 + sizeof(sa_family_t) > VAR_19) {
   VAR_30 = -VAR_6;
   goto out_free;
  }

  VAR_33 = (union sctp_addr *)VAR_34;
  VAR_27 = FUNC_14(VAR_33->sa.sa_family);




  if (!VAR_27 || (VAR_32 + VAR_27->sockaddr_len) > VAR_19) {
   VAR_30 = -VAR_6;
   goto out_free;
  }

  VAR_35 = FUNC_5(VAR_33->v4.sin_port);


  FUNC_4(&VAR_26, VAR_33, VAR_27->sockaddr_len);

  VAR_30 = FUNC_21(VAR_17, &VAR_26, VAR_27->sockaddr_len);
  if (VAR_30)
   goto out_free;




  if (VAR_23 && VAR_23->peer.port && VAR_23->peer.port != VAR_35)
   goto out_free;





  VAR_24 = FUNC_13(VAR_22, &VAR_26, &VAR_25);
  if (VAR_24 && VAR_24 != VAR_23) {
   if (VAR_24->state >= VAR_14)
    VAR_30 = -VAR_7;
   else
    VAR_30 = -VAR_4;
   goto out_free;
  }





  if (FUNC_12(VAR_22, &VAR_26)) {
   VAR_30 = -VAR_2;
   goto out_free;
  }

  if (!VAR_23) {





   if (!VAR_22->base.bind_addr.port) {
    if (FUNC_11(VAR_17)) {
     VAR_30 = -VAR_3;
     goto out_free;
    }
   } else {







    if (VAR_22->base.bind_addr.port < VAR_13 &&
        !FUNC_1(VAR_0)) {
     VAR_30 = -VAR_1;
     goto out_free;
    }
   }

   VAR_28 = FUNC_16(&VAR_26);
   VAR_23 = FUNC_10(VAR_22, VAR_17, VAR_28, VAR_10);
   if (!VAR_23) {
    VAR_30 = -VAR_8;
    goto out_free;
   }

   VAR_30 = FUNC_7(VAR_23, VAR_28,
             VAR_10);
   if (VAR_30 < 0) {
    goto out_free;
   }

  }


  VAR_25 = FUNC_6(VAR_23, &VAR_26, VAR_10,
      VAR_15);
  if (!VAR_25) {
   VAR_30 = -VAR_8;
   goto out_free;
  }

  VAR_31++;
  VAR_34 += VAR_27->sockaddr_len;
  VAR_32 += VAR_27->sockaddr_len;
 }




 if (VAR_20) {
  VAR_30 = FUNC_8(VAR_23, VAR_10);
  if (VAR_30 < 0)
   goto out_free;
 }

 VAR_30 = FUNC_15(VAR_23, ((void*)0));
 if (VAR_30 < 0) {
  goto out_free;
 }


 FUNC_3(VAR_17)->dport = FUNC_2(VAR_23->peer.port);
 VAR_27 = FUNC_14(VAR_33->sa.sa_family);
 VAR_27->to_sk_daddr(VAR_33, VAR_17);
 VAR_17->sk_err = 0;




 if (VAR_17->sk_socket->file)
  VAR_36 = VAR_17->sk_socket->file->f_flags;

 VAR_29 = FUNC_23(VAR_17, VAR_36 & VAR_12);

 VAR_30 = FUNC_22(VAR_23, &VAR_29);
 if ((VAR_30 == 0 || VAR_30 == -VAR_5) && VAR_20)
  *VAR_20 = VAR_23->assoc_id;


 VAR_23 = ((void*)0);

out_free:

 FUNC_0("About to exit __sctp_connect() free asoc: %p"
     " kaddrs: %p err: %d\n",
     VAR_23, VAR_18, VAR_30);
 if (VAR_23) {




  FUNC_20(VAR_23);
  FUNC_9(VAR_23);
 }
 return VAR_30;
}
