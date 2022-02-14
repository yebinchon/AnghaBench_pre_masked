
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_short ;
struct timespec {int dummy; } ;
struct smbnode {TYPE_1__* n_mount; } ;
struct TYPE_4__ {int sv_tz; } ;
struct smb_vc {TYPE_2__ vc_sopt; } ;
struct mbchain {int dummy; } ;
struct smb_t2rq {int t2_maxpcount; int t2_maxdcount; struct mbchain t2_tdata; struct mbchain t2_tparam; } ;
struct smb_share {int dummy; } ;
struct smb_cred {int dummy; } ;
typedef scalar_t__ int64_t ;
struct TYPE_3__ {struct smb_share* sm_share; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct smb_share*) ;
 struct smb_vc* FUNC_1 (struct smb_share*) ;
 int FUNC_2 (struct mbchain*) ;
 int FUNC_3 (struct mbchain*,scalar_t__) ;
 int FUNC_4 (struct mbchain*,int ) ;
 int FUNC_5 (struct mbchain*,int ) ;
 int FUNC_6 (int ,int ,struct smb_cred*,struct smb_t2rq**) ;
 int FUNC_7 (struct smb_t2rq*) ;
 int FUNC_8 (struct smb_t2rq*) ;
 int FUNC_9 (struct timespec*,int,scalar_t__*) ;
 int FUNC_10 (struct mbchain*,struct smb_vc*,struct smbnode*,int *,int ) ;

int
FUNC_11(struct smbnode *VAR_2, u_short VAR_3, struct timespec *VAR_4,
 struct timespec *VAR_5, struct smb_cred *VAR_6)
{
 struct smb_t2rq *VAR_7;
 struct smb_share *VAR_8 = VAR_2->n_mount->sm_share;
 struct smb_vc *VAR_9 = FUNC_1(VAR_8);
 struct mbchain *VAR_10;
 int64_t VAR_11;
 int VAR_12, VAR_13;

 VAR_12 = FUNC_6(FUNC_0(VAR_8), VAR_1,
     VAR_6, &VAR_7);
 if (VAR_12)
  return VAR_12;
 VAR_10 = &VAR_7->t2_tparam;
 FUNC_2(VAR_10);
 FUNC_4(VAR_10, VAR_0);
 FUNC_5(VAR_10, 0);

 VAR_12 = FUNC_10(VAR_10, VAR_9, VAR_2, ((void*)0), 0);
 if (VAR_12) {
  FUNC_7(VAR_7);
  return VAR_12;
 }
 VAR_13 = VAR_9->vc_sopt.sv_tz;
 VAR_10 = &VAR_7->t2_tdata;
 FUNC_2(VAR_10);
 FUNC_3(VAR_10, 0);
 if (VAR_5) {
  FUNC_9(VAR_5, VAR_13, &VAR_11);
 } else
  VAR_11 = 0;
 FUNC_3(VAR_10, VAR_11);
 if (VAR_4) {
  FUNC_9(VAR_4, VAR_13, &VAR_11);
 } else
  VAR_11 = 0;
 FUNC_3(VAR_10, VAR_11);
 FUNC_3(VAR_10, VAR_11);
 FUNC_5(VAR_10, VAR_3);
 VAR_7->t2_maxpcount = 24;
 VAR_7->t2_maxdcount = 56;
 VAR_12 = FUNC_8(VAR_7);
 FUNC_7(VAR_7);
 return VAR_12;
}
