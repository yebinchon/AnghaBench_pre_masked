
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int32 ;
struct pkt {int * exten; int xmt; int rec; int org; int reftime; int refid; void* rootdisp; void* rootdelay; int precision; void* ppoll; int stratum; void* li_vn_mode; } ;
struct recvbuf {size_t recv_length; int recv_srcadr; TYPE_1__* dstadr; int recv_time; struct pkt recv_pkt; } ;
struct exten {int dummy; } ;
typedef int l_fp ;
typedef scalar_t__ keyid_t ;
struct TYPE_5__ {scalar_t__ in_progress; int offset; } ;
struct TYPE_4__ {int flags; int sin; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 void* FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_5 (int *,int *) ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_6 (int ,int ,int) ;
 int FUNC_7 (void*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (scalar_t__,int *,size_t) ;
 int FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int *,struct pkt*,struct recvbuf*,size_t,struct exten*,scalar_t__) ;
 int VAR_9 ;
 TYPE_1__* FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 TYPE_2__ VAR_10 ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,int) ;
 void* FUNC_18 (void*,int ) ;
 int FUNC_19 (int *,char*,int) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ) ;
 int VAR_11 ;
 int FUNC_22 (struct recvbuf*,int,scalar_t__,int,struct pkt*) ;
 int FUNC_23 (int *,TYPE_1__*,int ,struct pkt*,size_t) ;
 scalar_t__ FUNC_24 (int *,int *,scalar_t__,scalar_t__,int) ;
 int FUNC_25 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static void
FUNC_26(
 struct recvbuf *VAR_22,
 int VAR_23,
 keyid_t VAR_24,
 int VAR_25
 )
{
 struct pkt VAR_26;
 struct pkt *VAR_27;
 l_fp VAR_28, VAR_29;
 size_t VAR_30;
 VAR_27 = &VAR_22->recv_pkt;
 if (VAR_22->dstadr->flags & VAR_1)
  VAR_22->dstadr = FUNC_13(&VAR_22->recv_srcadr);
 if (VAR_25 & VAR_6) {
  VAR_13++;
  VAR_26.li_vn_mode = FUNC_6(VAR_2,
      FUNC_7(VAR_27->li_vn_mode), VAR_23);
  VAR_26.stratum = VAR_8;
  VAR_26.ppoll = FUNC_18(VAR_27->ppoll, VAR_11);
  VAR_26.precision = VAR_27->precision;
  FUNC_19(&VAR_26.refid, "RATE", 4);
  VAR_26.rootdelay = VAR_27->rootdelay;
  VAR_26.rootdisp = VAR_27->rootdisp;
  VAR_26.reftime = VAR_27->reftime;
  VAR_26.org = VAR_27->xmt;
  VAR_26.rec = VAR_27->xmt;
  VAR_26.xmt = VAR_27->xmt;




 } else {
  VAR_26.li_vn_mode = FUNC_6(VAR_21,
      FUNC_7(VAR_27->li_vn_mode), VAR_23);

  VAR_26.stratum = FUNC_8(VAR_20);
  VAR_26.ppoll = FUNC_18(VAR_27->ppoll, VAR_11);
  VAR_26.precision = VAR_14;
  VAR_26.refid = VAR_16;
  VAR_26.rootdelay = FUNC_4(FUNC_1(VAR_18));
  VAR_26.rootdisp = FUNC_4(FUNC_2(VAR_19));
  FUNC_3(&VAR_17, &VAR_26.reftime);


  VAR_26.org = VAR_27->xmt;







  FUNC_3(&VAR_22->recv_time, &VAR_26.rec);


  FUNC_14(&VAR_28);




  FUNC_3(&VAR_28, &VAR_26.xmt);
 }
 VAR_30 = VAR_3;
 if (VAR_22->recv_length == VAR_30) {
  FUNC_23(&VAR_22->recv_srcadr, VAR_22->dstadr, 0, &VAR_26,
      VAR_30);
  FUNC_0(1, ("fast_xmit: at %ld %s->%s mode %d len %lu\n",
       VAR_9, FUNC_25(&VAR_22->dstadr->sin),
       FUNC_25(&VAR_22->recv_srcadr), VAR_23,
       (u_long)VAR_30));
  return;
 }
 FUNC_14(&VAR_28);
 VAR_30 += FUNC_9(VAR_24, (u_int32 *)&VAR_26, VAR_30);




 FUNC_23(&VAR_22->recv_srcadr, VAR_22->dstadr, 0, &VAR_26, VAR_30);
 FUNC_14(&VAR_29);
 FUNC_5(&VAR_29, &VAR_28);
 VAR_12 = VAR_29;
 FUNC_0(1, ("fast_xmit: at %ld %s->%s mode %d keyid %08x len %lu\n",
      VAR_9, FUNC_20(&VAR_22->dstadr->sin),
      FUNC_20(&VAR_22->recv_srcadr), VAR_23, VAR_24,
      (u_long)VAR_30));
}
