
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int u_int32_t ;
typedef int u_char ;
struct nfsrvcache {int dummy; } ;
struct nfsrv_descript {int nd_flag; scalar_t__ nd_repstat; int nd_slotid; int nd_sessionid; int nd_mreq; TYPE_1__* nd_xprt; int nd_sockref; int nd_tcpconntime; int nd_retxid; int * nd_nam2; } ;
struct mbuf {int dummy; } ;
struct TYPE_4__ {int xp_sockref; } ;
typedef TYPE_1__ SVCXPRT ;


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
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int ,struct nfsrv_descript*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (TYPE_1__*,scalar_t__*) ;
 int FUNC_2 (int *,int ) ;
 struct mbuf* FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct nfsrv_descript*,int *,int **,int*,int *) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (int ,int ,scalar_t__,struct mbuf**) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (struct nfsrv_descript*,int,int *,int,int ) ;
 int FUNC_9 (struct nfsrv_descript*) ;
 struct nfsrvcache* FUNC_10 (struct nfsrv_descript*) ;

__attribute__((used)) static int
FUNC_11(struct nfsrv_descript *VAR_17, u_int32_t VAR_18, SVCXPRT *VAR_19,
    struct nfsrvcache **VAR_20)
{
 int VAR_21 = VAR_14, VAR_22, VAR_23 = -1;
 struct mbuf *VAR_24;
 u_char VAR_25[VAR_13 + 1], *VAR_26 = ((void*)0);
 u_int32_t VAR_27 = 0;
 uint32_t VAR_28;

 *VAR_20 = ((void*)0);
 if (VAR_17->nd_nam2 == ((void*)0)) {
  VAR_17->nd_flag |= VAR_9;
  VAR_22 = 0;
 } else {
  VAR_22 = 1;
 }
 if ((VAR_17->nd_flag & VAR_4) && VAR_17->nd_nam2 != ((void*)0) &&
     FUNC_7()) {
  VAR_21 = VAR_15;
 } else {




  if ((VAR_17->nd_flag & (VAR_5 | VAR_9)) ==
      VAR_9)
   VAR_17->nd_flag |= VAR_7;
  VAR_17->nd_retxid = VAR_18;
  VAR_17->nd_tcpconntime = VAR_10;
  VAR_17->nd_sockref = VAR_19->xp_sockref;
  if ((VAR_17->nd_flag & VAR_5) != 0)
   FUNC_4(VAR_17, VAR_25, &VAR_26, &VAR_23,
       &VAR_27);
  if ((VAR_17->nd_flag & VAR_6) != 0)

   VAR_21 = VAR_14;
  else {
   VAR_21 = FUNC_9(VAR_17);
   VAR_28 = 0;
   FUNC_1(VAR_19, &VAR_28);
   FUNC_5(VAR_19->xp_sockref, VAR_28, 0);
  }
 }







 if (VAR_21 == VAR_14) {
  if ((VAR_17->nd_flag & VAR_6) != 0)
   VAR_17->nd_xprt = VAR_19;
  FUNC_8(VAR_17, VAR_22, VAR_26, VAR_23, VAR_27);
  if ((VAR_17->nd_flag & VAR_6) != 0) {
   if (VAR_17->nd_repstat != VAR_12 &&
       (VAR_17->nd_flag & VAR_8) != 0) {

    VAR_24 = FUNC_3(VAR_17->nd_mreq, 0, VAR_0,
        VAR_2);
   } else
    VAR_24 = ((void*)0);
   if ((VAR_17->nd_flag & VAR_3) != 0)
    FUNC_6(VAR_17->nd_sessionid,
        VAR_17->nd_slotid, VAR_17->nd_repstat, &VAR_24);
   if (VAR_17->nd_repstat == VAR_12)
    VAR_17->nd_repstat = 0;
   VAR_21 = VAR_16;
  } else {
   if (VAR_17->nd_repstat == VAR_11)
    VAR_21 = VAR_15;
   else
    VAR_21 = VAR_16;
   *VAR_20 = FUNC_10(VAR_17);
  }
 }
 if (VAR_26 != ((void*)0) && VAR_23 > VAR_13)
  FUNC_2(VAR_26, VAR_1);

 FUNC_0(0, VAR_17);
 return (VAR_21);
}
