
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct nfssessionhash {int dummy; } ;
struct nfsrv_descript {TYPE_3__* nd_xprt; } ;
struct TYPE_7__ {TYPE_3__* nfsess_xprt; } ;
struct nfsdsession {int sess_crflags; TYPE_2__ sess_cbsess; int sess_cbprogram; struct nfsclient* sess_clp; } ;
struct TYPE_6__ {struct __rpc_client* nr_client; } ;
struct nfsclient {int lc_flags; TYPE_1__ lc_req; } ;
struct __rpc_client {int cl_private; } ;
struct TYPE_8__ {scalar_t__ xp_idletimeout; int xp_p2; int xp_socket; } ;
typedef TYPE_3__ SVCXPRT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct nfssessionhash*) ;
 int FUNC_2 () ;
 struct nfssessionhash* FUNC_3 (int *) ;
 int FUNC_4 (struct nfssessionhash*) ;
 int FUNC_5 () ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 struct nfsdsession* FUNC_9 (int *) ;
 int FUNC_10 (char*) ;

int
FUNC_11(struct nfsrv_descript *VAR_11, uint8_t *VAR_12, int *VAR_13)
{
 struct nfssessionhash *VAR_14;
 struct nfsdsession *VAR_15;
 struct nfsclient *VAR_16;
 SVCXPRT *VAR_17;
 int VAR_18;

 VAR_18 = 0;
 VAR_14 = FUNC_3(VAR_12);
 FUNC_2();
 FUNC_1(VAR_14);
 VAR_15 = FUNC_9(VAR_12);
 if (VAR_15 != ((void*)0)) {
  VAR_16 = VAR_15->sess_clp;
  if (*VAR_13 == VAR_1 ||
      *VAR_13 == VAR_2 ||
      *VAR_13 == VAR_3) {

   if (VAR_16->lc_req.nr_client == ((void*)0)) {
    FUNC_0(2, "nfsrv_bindconnsess: acquire "
        "backchannel\n");
    VAR_16->lc_req.nr_client = (struct __rpc_client *)
        FUNC_8(VAR_11->nd_xprt->xp_socket,
        VAR_15->sess_cbprogram, VAR_10);
   }
   if (VAR_16->lc_req.nr_client != ((void*)0)) {
    FUNC_0(2, "nfsrv_bindconnsess: set up "
        "backchannel\n");
    VAR_17 = VAR_15->sess_cbsess.nfsess_xprt;
    FUNC_6(VAR_11->nd_xprt);
    VAR_11->nd_xprt->xp_p2 =
        VAR_16->lc_req.nr_client->cl_private;

    VAR_11->nd_xprt->xp_idletimeout = 0;
    VAR_15->sess_cbsess.nfsess_xprt = VAR_11->nd_xprt;
    if (VAR_17 != ((void*)0))
     FUNC_7(VAR_17);
    VAR_15->sess_crflags |= VAR_9;
    VAR_16->lc_flags |= VAR_0;
    if (*VAR_13 == VAR_4)
     *VAR_13 = VAR_4;
    else
     *VAR_13 = VAR_5;
   } else if (*VAR_13 != VAR_1) {
    FUNC_0(2, "nfsrv_bindconnsess: can't set "
        "up backchannel\n");
    VAR_15->sess_crflags &= ~VAR_9;
    VAR_16->lc_flags |= VAR_0;
    *VAR_13 = VAR_6;
   } else {
    VAR_18 = VAR_8;
    FUNC_10("nfsrv_bindconnsess: Can't add "
        "backchannel\n");
   }
  } else {
   FUNC_0(2, "nfsrv_bindconnsess: Set forechannel\n");
   VAR_16->lc_flags |= VAR_0;
   *VAR_13 = VAR_6;
  }
 } else
  VAR_18 = VAR_7;
 FUNC_4(VAR_14);
 FUNC_5();
 return (VAR_18);
}
