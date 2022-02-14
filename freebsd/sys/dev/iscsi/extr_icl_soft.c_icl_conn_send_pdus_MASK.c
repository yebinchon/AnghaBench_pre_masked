
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {long sb_lowat; long sb_hiwat; } ;
struct socket {TYPE_3__ so_snd; } ;
struct icl_pdu_stailq {int dummy; } ;
struct icl_pdu {TYPE_2__* ip_bhs_mbuf; } ;
struct icl_conn {struct socket* ic_socket; } ;
struct TYPE_8__ {long len; } ;
struct TYPE_9__ {TYPE_1__ m_pkthdr; } ;


 int FUNC_0 (struct icl_conn*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct icl_pdu_stailq*) ;
 struct icl_pdu* FUNC_5 (struct icl_pdu_stailq*) ;
 int FUNC_6 (struct icl_pdu_stailq*,struct icl_pdu*,int ) ;
 int FUNC_7 (struct icl_pdu_stailq*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (struct icl_conn*) ;
 int FUNC_9 (struct icl_pdu*) ;
 long FUNC_10 (struct icl_pdu*) ;
 int FUNC_11 (struct icl_conn*,struct icl_pdu*) ;
 int VAR_3 ;
 int FUNC_12 (TYPE_2__*,TYPE_2__*) ;
 long FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (struct socket*,int *,int *,TYPE_2__*,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_15(struct icl_conn *VAR_4, struct icl_pdu_stailq *VAR_5)
{
 struct icl_pdu *VAR_6, *VAR_7;
 struct socket *VAR_8;
 long VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13;

 FUNC_0(VAR_4);

 VAR_8 = VAR_4->ic_socket;

 FUNC_2(&VAR_8->so_snd);






 VAR_9 = FUNC_13(&VAR_8->so_snd);





 VAR_8->so_snd.sb_lowat = VAR_8->so_snd.sb_hiwat + 1;
 FUNC_3(&VAR_8->so_snd);

 while (!FUNC_4(VAR_5)) {
  VAR_6 = FUNC_5(VAR_5);
  VAR_10 = FUNC_10(VAR_6);
  if (VAR_9 < VAR_10) {







   FUNC_2(&VAR_8->so_snd);
   VAR_9 = FUNC_13(&VAR_8->so_snd);
   if (VAR_9 < VAR_10) {

    FUNC_1("no space to send; "
        "have %ld, need %ld",
        VAR_9, VAR_10);

    VAR_8->so_snd.sb_lowat = VAR_10;
    FUNC_3(&VAR_8->so_snd);
    return;
   }
   FUNC_3(&VAR_8->so_snd);
  }
  FUNC_7(VAR_5, VAR_3);
  VAR_13 = FUNC_9(VAR_6);
  if (VAR_13 != 0) {
   FUNC_1("failed to finalize PDU; "
       "dropping connection");
   FUNC_11(VAR_4, VAR_6);
   FUNC_8(VAR_4);
   return;
  }
  if (VAR_1) {
   VAR_12 = 1;
   for (;;) {
    VAR_7 = FUNC_5(VAR_5);
    if (VAR_7 == ((void*)0))
     break;
    VAR_11 = FUNC_10(VAR_7);
    if (VAR_9 < VAR_10 + VAR_11)
     break;
    FUNC_7(VAR_5, VAR_3);
    VAR_13 = FUNC_9(VAR_7);
    if (VAR_13 != 0) {
     FUNC_1("failed to finalize PDU; "
         "dropping connection");
     FUNC_11(VAR_4, VAR_6);
     FUNC_11(VAR_4, VAR_7);
     FUNC_8(VAR_4);
     return;
    }
    FUNC_12(VAR_6->ip_bhs_mbuf, VAR_7->ip_bhs_mbuf);
    VAR_7->ip_bhs_mbuf = ((void*)0);
    VAR_6->ip_bhs_mbuf->m_pkthdr.len += VAR_11;
    VAR_10 += VAR_11;
    FUNC_6(VAR_5, VAR_6, VAR_3);
    FUNC_11(VAR_4, VAR_7);
    VAR_12++;
   }






  }
  VAR_9 -= VAR_10;
  VAR_13 = FUNC_14(VAR_8, ((void*)0), ((void*)0), VAR_6->ip_bhs_mbuf,
      ((void*)0), VAR_0, VAR_2);
  VAR_6->ip_bhs_mbuf = ((void*)0);
  if (VAR_13 != 0) {
   FUNC_1("failed to send PDU, error %d; "
       "dropping connection", VAR_13);
   FUNC_11(VAR_4, VAR_6);
   FUNC_8(VAR_4);
   return;
  }
  FUNC_11(VAR_4, VAR_6);
 }
}
