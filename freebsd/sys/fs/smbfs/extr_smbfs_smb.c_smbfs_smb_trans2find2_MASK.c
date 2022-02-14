
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int16_t ;
struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct smbfs_fctx {int f_flags; int f_attrmask; int f_limit; int f_infolevel; int f_rnamelen; int f_ecnt; int f_rnameofs; scalar_t__ f_eofs; int f_Sid; scalar_t__ f_rname; struct smb_t2rq* f_t2; int f_scred; int f_ssp; int f_wclen; int f_wildcard; int f_dnp; } ;
struct smb_vc {int vc_flags; int vc_txmax; } ;
struct mdchain {TYPE_1__* md_top; } ;
struct mbchain {TYPE_2__* mb_top; } ;
struct smb_t2rq {int t2_maxpcount; struct mdchain t2_rdata; struct mdchain t2_rparam; int t2_maxdcount; struct mbchain t2_tparam; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_4__ {int m_next; } ;
struct TYPE_3__ {scalar_t__ m_len; } ;


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
 int FUNC_0 (int ) ;
 struct smb_vc* FUNC_1 (int ) ;
 int FUNC_2 (struct mbchain*) ;
 int FUNC_3 (struct mbchain*,scalar_t__,int,int ) ;
 int FUNC_4 (struct mbchain*,int) ;
 int FUNC_5 (struct mbchain*,int ) ;
 int FUNC_6 (struct mbchain*,int ) ;
 int FUNC_7 (struct mdchain*,int *) ;
 int FUNC_8 (struct mdchain*,int*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (char*,int,...) ;
 int FUNC_11 (int ,int ,int ,struct smb_t2rq**) ;
 int FUNC_12 (struct smb_t2rq*) ;
 int FUNC_13 (struct smb_t2rq*) ;
 int FUNC_14 (struct mbchain*,struct smb_vc*,int ,int ,int ) ;
 int FUNC_15 (struct timeval*) ;

__attribute__((used)) static int
FUNC_16(struct smbfs_fctx *VAR_10)
{
 struct smb_t2rq *VAR_11;
 struct smb_vc *VAR_12 = FUNC_1(VAR_10->f_ssp);
 struct mbchain *VAR_13;
 struct mdchain *VAR_14;
 u_int16_t VAR_15, VAR_16;
 int VAR_17;

 if (VAR_10->f_t2) {
  FUNC_12(VAR_10->f_t2);
  VAR_10->f_t2 = ((void*)0);
 }
 VAR_10->f_flags &= ~VAR_6;
 VAR_16 = 8 | 2;
 if (VAR_10->f_flags & VAR_5) {
  VAR_16 |= 1;
  VAR_10->f_flags |= VAR_7;
 }
 if (VAR_10->f_flags & VAR_4) {
  VAR_17 = FUNC_11(FUNC_0(VAR_10->f_ssp), VAR_8,
      VAR_10->f_scred, &VAR_11);
  if (VAR_17)
   return VAR_17;
  VAR_10->f_t2 = VAR_11;
  VAR_13 = &VAR_11->t2_tparam;
  FUNC_2(VAR_13);
  FUNC_4(VAR_13, VAR_10->f_attrmask);
  FUNC_4(VAR_13, VAR_10->f_limit);
  FUNC_4(VAR_13, VAR_16);
  FUNC_4(VAR_13, VAR_10->f_infolevel);
  FUNC_5(VAR_13, 0);
  VAR_17 = FUNC_14(VAR_13, VAR_12, VAR_10->f_dnp, VAR_10->f_wildcard, VAR_10->f_wclen);
  if (VAR_17)
   return VAR_17;
 } else {
  VAR_17 = FUNC_11(FUNC_0(VAR_10->f_ssp), VAR_9,
      VAR_10->f_scred, &VAR_11);
  if (VAR_17)
   return VAR_17;
  VAR_10->f_t2 = VAR_11;
  VAR_13 = &VAR_11->t2_tparam;
  FUNC_2(VAR_13);
  FUNC_3(VAR_13, (caddr_t)&VAR_10->f_Sid, 2, VAR_1);
  FUNC_4(VAR_13, VAR_10->f_limit);
  FUNC_4(VAR_13, VAR_10->f_infolevel);
  FUNC_5(VAR_13, 0);
  FUNC_4(VAR_13, VAR_16);
  if (VAR_10->f_rname)
   FUNC_3(VAR_13, VAR_10->f_rname, VAR_10->f_rnamelen + 1, VAR_1);
  else
   FUNC_6(VAR_13, 0);
 }
 VAR_11->t2_maxpcount = 5 * 2;
 VAR_11->t2_maxdcount = VAR_12->vc_txmax;
 VAR_17 = FUNC_13(VAR_11);
 if (VAR_17)
  return VAR_17;
 VAR_14 = &VAR_11->t2_rparam;
 if (VAR_10->f_flags & VAR_4) {
  if ((VAR_17 = FUNC_7(VAR_14, &VAR_10->f_Sid)) != 0)
   return VAR_17;
  VAR_10->f_flags &= ~VAR_4;
 }
 if ((VAR_17 = FUNC_8(VAR_14, &VAR_15)) != 0)
  return VAR_17;
 VAR_10->f_ecnt = VAR_15;
 if ((VAR_17 = FUNC_8(VAR_14, &VAR_15)) != 0)
  return VAR_17;
 if (VAR_15)
  VAR_10->f_flags |= VAR_3 | VAR_7;
 if ((VAR_17 = FUNC_8(VAR_14, &VAR_15)) != 0)
  return VAR_17;
 if ((VAR_17 = FUNC_8(VAR_14, &VAR_15)) != 0)
  return VAR_17;
 if (VAR_10->f_ecnt == 0) {
  VAR_10->f_flags |= VAR_3 | VAR_7;
  return VAR_0;
 }
 VAR_10->f_rnameofs = VAR_15;
 VAR_14 = &VAR_11->t2_rdata;
 if (VAR_14->md_top == ((void*)0)) {
  FUNC_10("bug: ecnt = %d, but data is NULL (please report)\n", VAR_10->f_ecnt);
  return VAR_0;
 }
 if (VAR_14->md_top->m_len == 0) {
  FUNC_10("bug: ecnt = %d, but m_len = 0 and m_next = %p (please report)\n", VAR_10->f_ecnt,VAR_13->mb_top->m_next);
  return VAR_0;
 }
 VAR_10->f_eofs = 0;
 return 0;
}
