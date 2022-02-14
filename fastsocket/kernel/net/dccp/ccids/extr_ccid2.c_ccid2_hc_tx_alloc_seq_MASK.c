
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccid2_seq {struct ccid2_seq* ccid2s_next; struct ccid2_seq* ccid2s_prev; } ;
struct ccid2_hc_tx_sock {int ccid2hctx_seqbufc; struct ccid2_seq** ccid2hctx_seqbuf; struct ccid2_seq* ccid2hctx_seqt; struct ccid2_seq* ccid2hctx_seqh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct ccid2_seq* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct ccid2_hc_tx_sock *VAR_2)
{
 struct ccid2_seq *VAR_3;
 int VAR_4;


 if (VAR_2->ccid2hctx_seqbufc >= (sizeof(VAR_2->ccid2hctx_seqbuf) /
     sizeof(struct ccid2_seq*)))
  return -VAR_1;


 VAR_3 = FUNC_1(VAR_0 * sizeof(struct ccid2_seq), FUNC_0());
 if (VAR_3 == ((void*)0))
  return -VAR_1;

 for (VAR_4 = 0; VAR_4 < (VAR_0 - 1); VAR_4++) {
  VAR_3[VAR_4].ccid2s_next = &VAR_3[VAR_4 + 1];
  VAR_3[VAR_4 + 1].ccid2s_prev = &VAR_3[VAR_4];
 }
 VAR_3[VAR_0 - 1].ccid2s_next = VAR_3;
 VAR_3->ccid2s_prev = &VAR_3[VAR_0 - 1];


 if (VAR_2->ccid2hctx_seqbufc == 0)
  VAR_2->ccid2hctx_seqh = VAR_2->ccid2hctx_seqt = VAR_3;
 else {

  VAR_2->ccid2hctx_seqh->ccid2s_next = VAR_3;
  VAR_3->ccid2s_prev = VAR_2->ccid2hctx_seqh;

  VAR_2->ccid2hctx_seqt->ccid2s_prev = &VAR_3[VAR_0 - 1];
  VAR_3[VAR_0 - 1].ccid2s_next = VAR_2->ccid2hctx_seqt;
 }


 VAR_2->ccid2hctx_seqbuf[VAR_2->ccid2hctx_seqbufc] = VAR_3;
 VAR_2->ccid2hctx_seqbufc++;

 return 0;
}
