
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct nfssessionhash {int dummy; } ;
struct TYPE_10__ {int qval; } ;
struct nfsrv_descript {TYPE_7__* nd_xprt; int nd_flag; TYPE_1__ nd_clientid; int nd_slotid; int nd_sessionid; } ;
struct TYPE_12__ {TYPE_7__* nfsess_xprt; } ;
struct nfsdsession {int sess_crflags; TYPE_6__* sess_clp; TYPE_3__ sess_cbsess; int sess_slots; } ;
struct TYPE_16__ {scalar_t__ xp_idletimeout; int xp_p2; } ;
struct TYPE_14__ {TYPE_4__* nr_client; } ;
struct TYPE_11__ {int qval; } ;
struct TYPE_15__ {int lc_flags; TYPE_5__ lc_req; TYPE_2__ lc_clientid; int lc_expiry; } ;
struct TYPE_13__ {int cl_private; } ;
typedef TYPE_7__ SVCXPRT ;
typedef int NFSPROC_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct nfssessionhash*) ;
 struct nfssessionhash* FUNC_2 (int ) ;
 int FUNC_3 (struct nfssessionhash*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_7__*) ;
 struct nfsdsession* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (scalar_t__,int ,scalar_t__,int ,int *,scalar_t__) ;

int
FUNC_9(struct nfsrv_descript *VAR_11, uint32_t VAR_12,
    uint32_t *VAR_13, uint32_t *VAR_14, int VAR_15,
    uint32_t *VAR_16, NFSPROC_T *VAR_17)
{
 struct nfsdsession *VAR_18;
 struct nfssessionhash *VAR_19;
 int VAR_20;
 SVCXPRT *VAR_21;

 VAR_19 = FUNC_2(VAR_11->nd_sessionid);
 FUNC_1(VAR_19);
 VAR_18 = FUNC_6(VAR_11->nd_sessionid);
 if (VAR_18 == ((void*)0)) {
  FUNC_3(VAR_19);
  return (VAR_4);
 }
 VAR_20 = FUNC_8(VAR_12, VAR_11->nd_slotid, *VAR_13,
     VAR_18->sess_slots, ((void*)0), VAR_10 - 1);
 if (VAR_20 != 0) {
  FUNC_3(VAR_19);
  return (VAR_20);
 }
 if (VAR_15 != 0)
  VAR_11->nd_flag |= VAR_2;

 VAR_18->sess_clp->lc_expiry = FUNC_7();
 VAR_11->nd_clientid.qval = VAR_18->sess_clp->lc_clientid.qval;
 VAR_11->nd_flag |= VAR_1;
 if (VAR_18->sess_clp->lc_req.nr_client != ((void*)0) &&
     VAR_18->sess_cbsess.nfsess_xprt != VAR_11->nd_xprt &&
     (VAR_18->sess_crflags & VAR_6) != 0 &&
     (VAR_18->sess_clp->lc_flags & VAR_0) == 0) {
  FUNC_0(2,
      "nfsrv_checksequence: implicit back channel bind\n");
  VAR_21 = VAR_18->sess_cbsess.nfsess_xprt;
  FUNC_4(VAR_11->nd_xprt);
  VAR_11->nd_xprt->xp_p2 =
      VAR_18->sess_clp->lc_req.nr_client->cl_private;
  VAR_11->nd_xprt->xp_idletimeout = 0;
  VAR_18->sess_cbsess.nfsess_xprt = VAR_11->nd_xprt;
  if (VAR_21 != ((void*)0))
   FUNC_5(VAR_21);
 }

 *VAR_16 = 0;
 if (VAR_18->sess_clp->lc_req.nr_client == ((void*)0))
  *VAR_16 |= VAR_8;
 FUNC_3(VAR_19);
 if (VAR_20 == VAR_5) {
  *VAR_16 |= VAR_9;
  VAR_20 = 0;
 } else if (VAR_20 == VAR_3) {
  *VAR_16 |= VAR_7;
  VAR_20 = 0;
 }
 *VAR_13 = *VAR_14 = VAR_10 - 1;
 return (0);
}
