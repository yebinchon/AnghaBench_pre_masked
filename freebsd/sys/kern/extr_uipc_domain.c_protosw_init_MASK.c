
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct protosw {int (* pr_init ) () ;TYPE_1__* pr_domain; struct pr_usrreqs* pr_usrreqs; } ;
struct pr_usrreqs {int pru_ready; int pru_sopoll; int pru_soreceive; int pru_sosend; int pru_sockaddr; int pru_shutdown; int pru_sense; int pru_rcvoob; int pru_rcvd; int pru_peeraddr; int pru_listen; int pru_disconnect; int pru_control; int pru_connectat; int pru_connect2; int pru_connect; int pru_bindat; int pru_bind; int pru_aio_queue; int pru_accept; int * pru_send; int * pru_abort; int * pru_attach; } ;
struct TYPE_2__ {struct protosw* dom_protosw; int dom_name; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(struct protosw *VAR_20)
{
 struct pr_usrreqs *VAR_21;

 VAR_21 = VAR_20->pr_usrreqs;
 FUNC_1(VAR_21 != ((void*)0), ("protosw_init: %ssw[%d] has no usrreqs!",
     VAR_20->pr_domain->dom_name,
     (int)(VAR_20 - VAR_20->pr_domain->dom_protosw)));
 if ((VAR_21->pru_accept) == ((void*)0)) (VAR_21->pru_accept) = (VAR_0);
 if ((VAR_21->pru_aio_queue) == ((void*)0)) (VAR_21->pru_aio_queue) = (VAR_1);
 if ((VAR_21->pru_bind) == ((void*)0)) (VAR_21->pru_bind) = (VAR_2);
 if ((VAR_21->pru_bindat) == ((void*)0)) (VAR_21->pru_bindat) = (VAR_3);
 if ((VAR_21->pru_connect) == ((void*)0)) (VAR_21->pru_connect) = (VAR_5);
 if ((VAR_21->pru_connect2) == ((void*)0)) (VAR_21->pru_connect2) = (VAR_4);
 if ((VAR_21->pru_connectat) == ((void*)0)) (VAR_21->pru_connectat) = (VAR_6);
 if ((VAR_21->pru_control) == ((void*)0)) (VAR_21->pru_control) = (VAR_7);
 if ((VAR_21->pru_disconnect) == ((void*)0)) (VAR_21->pru_disconnect) = (VAR_8);
 if ((VAR_21->pru_listen) == ((void*)0)) (VAR_21->pru_listen) = (VAR_9);
 if ((VAR_21->pru_peeraddr) == ((void*)0)) (VAR_21->pru_peeraddr) = (VAR_10);
 if ((VAR_21->pru_rcvd) == ((void*)0)) (VAR_21->pru_rcvd) = (VAR_11);
 if ((VAR_21->pru_rcvoob) == ((void*)0)) (VAR_21->pru_rcvoob) = (VAR_12);
 if ((VAR_21->pru_sense) == ((void*)0)) (VAR_21->pru_sense) = (VAR_14);
 if ((VAR_21->pru_shutdown) == ((void*)0)) (VAR_21->pru_shutdown) = (VAR_15);
 if ((VAR_21->pru_sockaddr) == ((void*)0)) (VAR_21->pru_sockaddr) = (VAR_16);
 if ((VAR_21->pru_sosend) == ((void*)0)) (VAR_21->pru_sosend) = (VAR_19);
 if ((VAR_21->pru_soreceive) == ((void*)0)) (VAR_21->pru_soreceive) = (VAR_18);
 if ((VAR_21->pru_sopoll) == ((void*)0)) (VAR_21->pru_sopoll) = (VAR_17);
 if ((VAR_21->pru_ready) == ((void*)0)) (VAR_21->pru_ready) = (VAR_13);

 if (VAR_20->pr_init)
  (*VAR_20->pr_init)();
}
