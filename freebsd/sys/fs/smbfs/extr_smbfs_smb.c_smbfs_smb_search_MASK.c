
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef scalar_t__ u_int16_t ;
struct smbfs_fctx {int f_attrmask; int f_flags; scalar_t__ f_ecnt; int f_skey; int f_wclen; int f_wildcard; int f_dnp; struct smb_rq* f_rq; int f_scred; int f_ssp; int f_left; } ;
struct smb_vc {int vc_txmax; } ;
struct smb_rq {scalar_t__ sr_errclass; scalar_t__ sr_serror; } ;
struct mdchain {int dummy; } ;
struct mbchain {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (struct smb_vc*) ;
 int FUNC_1 (int ) ;
 struct smb_vc* FUNC_2 (int ) ;
 int FUNC_3 (struct mbchain*,int ,int,int ) ;
 int FUNC_4 (struct mbchain*) ;
 int FUNC_5 (struct mbchain*,int) ;
 int FUNC_6 (struct mbchain*,int) ;
 int FUNC_7 (struct mdchain*,scalar_t__*) ;
 int FUNC_8 (struct mdchain*,int*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int ,int ,struct smb_rq**) ;
 int FUNC_11 (struct smb_rq*) ;
 int FUNC_12 (struct smb_rq*) ;
 int FUNC_13 (struct smb_rq*) ;
 int FUNC_14 (struct smb_rq*,struct mdchain**) ;
 int FUNC_15 (struct smb_rq*,struct mbchain**) ;
 int FUNC_16 (struct smb_rq*) ;
 int FUNC_17 (struct smb_rq*) ;
 int FUNC_18 (struct smb_rq*) ;
 int FUNC_19 (struct mbchain*,struct smb_vc*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_20(struct smbfs_fctx *VAR_13)
{
 struct smb_vc *VAR_14 = FUNC_2(VAR_13->f_ssp);
 struct smb_rq *VAR_15;
 struct mbchain *VAR_16;
 struct mdchain *VAR_17;
 u_int8_t VAR_18, VAR_19;
 u_int16_t VAR_20, VAR_21, VAR_22;
 int VAR_23, VAR_24, VAR_25 = 0;

 VAR_23 = FUNC_9(VAR_13->f_left, (VAR_14->vc_txmax - VAR_11 - 3) / VAR_8);
 if (VAR_13->f_rq) {
  FUNC_13(VAR_13->f_rq);
  VAR_13->f_rq = ((void*)0);
 }
 VAR_24 = FUNC_10(FUNC_1(VAR_13->f_ssp), VAR_7, VAR_13->f_scred, &VAR_15);
 if (VAR_24)
  return (VAR_24);
 VAR_13->f_rq = VAR_15;
 FUNC_15(VAR_15, &VAR_16);
 FUNC_18(VAR_15);
 FUNC_5(VAR_16, VAR_23);
 FUNC_5(VAR_16, VAR_13->f_attrmask);
 FUNC_17(VAR_15);
 FUNC_12(VAR_15);
 FUNC_6(VAR_16, VAR_9);
 if (VAR_13->f_flags & VAR_6) {
  VAR_24 = FUNC_19(VAR_16, VAR_14, VAR_13->f_dnp, VAR_13->f_wildcard, VAR_13->f_wclen);
  if (VAR_24)
   return VAR_24;
  FUNC_6(VAR_16, VAR_10);
  FUNC_5(VAR_16, 0);
  VAR_13->f_flags &= ~VAR_6;
 } else {
  if (FUNC_0(VAR_14)) {
   FUNC_4(VAR_16);
   FUNC_6(VAR_16, 0);
  }
  FUNC_6(VAR_16, 0);
  FUNC_6(VAR_16, VAR_10);
  FUNC_5(VAR_16, VAR_12);
  FUNC_3(VAR_16, VAR_13->f_skey, VAR_12, VAR_4);
 }
 FUNC_11(VAR_15);
 VAR_24 = FUNC_16(VAR_15);
 if (VAR_24) {
  if (VAR_15->sr_errclass == VAR_2 && VAR_15->sr_serror == VAR_3) {
   VAR_24 = 0;
   VAR_25 = 1;
   VAR_13->f_flags |= VAR_5;
  } else
   return VAR_24;
 }
 FUNC_14(VAR_15, &VAR_17);
 FUNC_8(VAR_17, &VAR_18);
 if (VAR_18 != 1)
  return VAR_25 ? VAR_1 : VAR_0;
 FUNC_7(VAR_17, &VAR_20);
 if (VAR_20 == 0)
  return VAR_1;
 VAR_13->f_ecnt = VAR_20;
 FUNC_7(VAR_17, &VAR_22);
 if (VAR_22 < 3)
  return VAR_0;
 VAR_22 -= 3;
 FUNC_8(VAR_17, &VAR_19);
 if (VAR_19 != VAR_10)
  return VAR_0;
 FUNC_7(VAR_17, &VAR_21);
 if (VAR_21 != VAR_22 || VAR_21 % VAR_8 != 0)
  return VAR_0;
 return 0;
}
