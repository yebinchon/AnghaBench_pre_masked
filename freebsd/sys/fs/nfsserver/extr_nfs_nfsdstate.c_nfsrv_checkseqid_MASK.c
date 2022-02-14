
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct nfsstate {scalar_t__ ls_seq; struct nfsrvcache* ls_op; } ;
struct nfsrvcache {int rc_flag; scalar_t__ rc_refcnt; scalar_t__ rc_xid; scalar_t__ rc_reqlen; scalar_t__ rc_cksum; } ;
struct nfsrv_descript {int nd_flag; struct nfsrvcache* nd_rp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,struct nfsrv_descript*) ;
 int VAR_4 ;
 int FUNC_1 (struct nfsrvcache*) ;
 int FUNC_2 (struct nfsrvcache*) ;
 int FUNC_3 (struct nfsrvcache*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct nfsrv_descript *VAR_5, u_int32_t VAR_6,
    struct nfsstate *VAR_7, struct nfsrvcache *VAR_8)
{
 int VAR_9 = 0;

 if ((VAR_5->nd_flag & VAR_0) != 0)

  goto out;
 if (VAR_8 != VAR_5->nd_rp)
  FUNC_4("nfsrvstate checkseqid");
 if (!(VAR_8->rc_flag & VAR_4))
  FUNC_4("nfsrvstate not inprog");
 if (VAR_7->ls_op && VAR_7->ls_op->rc_refcnt <= 0) {
  FUNC_5("refcnt=%d\n", VAR_7->ls_op->rc_refcnt);
  FUNC_4("nfsrvstate op refcnt");
 }
 if ((VAR_7->ls_seq + 1) == VAR_6) {
  if (VAR_7->ls_op)
   FUNC_2(VAR_7->ls_op);
  VAR_7->ls_op = VAR_8;
  FUNC_3(VAR_8);
  VAR_7->ls_seq = VAR_6;
  goto out;
 } else if (VAR_7->ls_seq == VAR_6 && VAR_7->ls_op &&
  VAR_8->rc_xid == VAR_7->ls_op->rc_xid &&
  VAR_8->rc_refcnt == 0 &&
  VAR_8->rc_reqlen == VAR_7->ls_op->rc_reqlen &&
  VAR_8->rc_cksum == VAR_7->ls_op->rc_cksum) {
  if (VAR_7->ls_op->rc_flag & VAR_4) {
   VAR_9 = VAR_2;
   goto out;
  }
  VAR_5->nd_rp = VAR_7->ls_op;
  VAR_5->nd_rp->rc_flag |= VAR_4;
  FUNC_1(VAR_8);
  VAR_9 = VAR_3;
  goto out;
 }
 VAR_9 = VAR_1;

out:
 FUNC_0(VAR_9, VAR_5);
 return (VAR_9);
}
