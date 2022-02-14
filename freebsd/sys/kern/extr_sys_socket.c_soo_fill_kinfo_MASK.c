
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct unpcb {scalar_t__ unp_conn; } ;
struct TYPE_12__ {int sb_state; } ;
struct socket {TYPE_5__* so_proto; TYPE_6__ so_rcv; TYPE_6__ so_snd; int * so_pcb; int so_type; int so_vnet; } ;
struct sockaddr {int sa_len; } ;
struct TYPE_8__ {uintptr_t kf_sock_pcb; uintptr_t kf_sock_inpcb; uintptr_t kf_sock_unpconn; int kf_sa_peer; int kf_sa_local; void* kf_sock_recvq; void* kf_sock_sendq; int kf_sock_snd_sb_state; int kf_sock_rcv_sb_state; int kf_sock_protocol0; int kf_sock_domain0; int kf_sock_type0; } ;
struct TYPE_9__ {TYPE_2__ kf_sock; } ;
struct kinfo_file {int kf_path; TYPE_3__ kf_un; int kf_type; } ;
struct inpcb {scalar_t__ inp_ppcb; } ;
struct filedesc {int dummy; } ;
struct file {struct socket* f_data; } ;
struct TYPE_11__ {TYPE_4__* pr_domain; TYPE_1__* pr_usrreqs; int pr_protocol; } ;
struct TYPE_10__ {int dom_name; int dom_family; } ;
struct TYPE_7__ {int (* pru_sockaddr ) (struct socket*,struct sockaddr**) ;int (* pru_peeraddr ) (struct socket*,struct sockaddr**) ;} ;





 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct sockaddr*,int *,int) ;
 int FUNC_3 (struct sockaddr*,int ) ;
 void* FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct socket*,struct sockaddr**) ;
 int FUNC_7 (struct socket*,struct sockaddr**) ;

__attribute__((used)) static int
FUNC_8(struct file *VAR_3, struct kinfo_file *VAR_4, struct filedesc *VAR_5)
{
 struct sockaddr *VAR_6;
 struct inpcb *VAR_7;
 struct unpcb *VAR_8;
 struct socket *VAR_9;
 int VAR_10;

 VAR_4->kf_type = VAR_1;
 VAR_9 = VAR_3->f_data;
 FUNC_1(VAR_9->so_vnet);
 VAR_4->kf_un.kf_sock.kf_sock_domain0 =
     VAR_9->so_proto->pr_domain->dom_family;
 VAR_4->kf_un.kf_sock.kf_sock_type0 = VAR_9->so_type;
 VAR_4->kf_un.kf_sock.kf_sock_protocol0 = VAR_9->so_proto->pr_protocol;
 VAR_4->kf_un.kf_sock.kf_sock_pcb = (uintptr_t)VAR_9->so_pcb;
 switch (VAR_4->kf_un.kf_sock.kf_sock_domain0) {
 case 130:
 case 129:
  if (VAR_4->kf_un.kf_sock.kf_sock_protocol0 == VAR_0) {
   if (VAR_9->so_pcb != ((void*)0)) {
    VAR_7 = (struct inpcb *)(VAR_9->so_pcb);
    VAR_4->kf_un.kf_sock.kf_sock_inpcb =
        (uintptr_t)VAR_7->inp_ppcb;
    VAR_4->kf_un.kf_sock.kf_sock_sendq =
        FUNC_4(&VAR_9->so_snd);
    VAR_4->kf_un.kf_sock.kf_sock_recvq =
        FUNC_4(&VAR_9->so_rcv);
   }
  }
  break;
 case 128:
  if (VAR_9->so_pcb != ((void*)0)) {
   VAR_8 = (struct unpcb *)(VAR_9->so_pcb);
   if (VAR_8->unp_conn) {
    VAR_4->kf_un.kf_sock.kf_sock_unpconn =
        (uintptr_t)VAR_8->unp_conn;
    VAR_4->kf_un.kf_sock.kf_sock_rcv_sb_state =
        VAR_9->so_rcv.sb_state;
    VAR_4->kf_un.kf_sock.kf_sock_snd_sb_state =
        VAR_9->so_snd.sb_state;
    VAR_4->kf_un.kf_sock.kf_sock_sendq =
        FUNC_4(&VAR_9->so_snd);
    VAR_4->kf_un.kf_sock.kf_sock_recvq =
        FUNC_4(&VAR_9->so_rcv);
   }
  }
  break;
 }
 VAR_10 = VAR_9->so_proto->pr_usrreqs->pru_sockaddr(VAR_9, &VAR_6);
 if (VAR_10 == 0 &&
     VAR_6->sa_len <= sizeof(VAR_4->kf_un.kf_sock.kf_sa_local)) {
  FUNC_2(VAR_6, &VAR_4->kf_un.kf_sock.kf_sa_local, VAR_6->sa_len);
  FUNC_3(VAR_6, VAR_2);
 }
 VAR_10 = VAR_9->so_proto->pr_usrreqs->pru_peeraddr(VAR_9, &VAR_6);
 if (VAR_10 == 0 &&
     VAR_6->sa_len <= sizeof(VAR_4->kf_un.kf_sock.kf_sa_peer)) {
  FUNC_2(VAR_6, &VAR_4->kf_un.kf_sock.kf_sa_peer, VAR_6->sa_len);
  FUNC_3(VAR_6, VAR_2);
 }
 FUNC_5(VAR_4->kf_path, VAR_9->so_proto->pr_domain->dom_name,
     sizeof(VAR_4->kf_path));
 FUNC_0();
 return (0);
}
