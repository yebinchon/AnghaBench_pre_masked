
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int16_t ;
struct timespec {int dummy; } ;
struct smbnode {int n_fid; TYPE_1__* n_mount; } ;
struct mbchain {int dummy; } ;
struct smb_t2rq {int t2_maxpcount; scalar_t__ t2_maxdcount; struct mbchain t2_tdata; struct mbchain t2_tparam; } ;
struct smb_share {int dummy; } ;
struct smb_cred {int dummy; } ;
typedef scalar_t__ int64_t ;
typedef int caddr_t ;
struct TYPE_5__ {int sv_tz; } ;
struct TYPE_6__ {TYPE_2__ vc_sopt; } ;
struct TYPE_4__ {struct smb_share* sm_share; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct smb_share*) ;
 TYPE_3__* FUNC_1 (struct smb_share*) ;
 int FUNC_2 (struct mbchain*) ;
 int FUNC_3 (struct mbchain*,scalar_t__) ;
 int FUNC_4 (struct mbchain*,int ,int,int ) ;
 int FUNC_5 (struct mbchain*,int ) ;
 int FUNC_6 (struct mbchain*,int ) ;
 int FUNC_7 (int ,int ,struct smb_cred*,struct smb_t2rq**) ;
 int FUNC_8 (struct smb_t2rq*) ;
 int FUNC_9 (struct smb_t2rq*) ;
 int FUNC_10 (struct timespec*,int,scalar_t__*) ;

int
FUNC_11(struct smbnode *VAR_3, u_int16_t VAR_4, struct timespec *VAR_5,
 struct timespec *VAR_6, struct smb_cred *VAR_7)
{
 struct smb_t2rq *VAR_8;
 struct smb_share *VAR_9 = VAR_3->n_mount->sm_share;
 struct mbchain *VAR_10;
 int64_t VAR_11;
 int VAR_12, VAR_13;

 VAR_12 = FUNC_7(FUNC_0(VAR_9), VAR_2,
     VAR_7, &VAR_8);
 if (VAR_12)
  return VAR_12;
 VAR_13 = FUNC_1(VAR_9)->vc_sopt.sv_tz;
 VAR_10 = &VAR_8->t2_tparam;
 FUNC_2(VAR_10);
 FUNC_4(VAR_10, (caddr_t)&VAR_3->n_fid, 2, VAR_0);
 FUNC_5(VAR_10, VAR_1);
 FUNC_6(VAR_10, 0);
 VAR_10 = &VAR_8->t2_tdata;
 FUNC_2(VAR_10);
 FUNC_3(VAR_10, 0);
 if (VAR_6) {
  FUNC_10(VAR_6, VAR_13, &VAR_11);
 } else
  VAR_11 = 0;
 FUNC_3(VAR_10, VAR_11);
 if (VAR_5) {
  FUNC_10(VAR_5, VAR_13, &VAR_11);
 } else
  VAR_11 = 0;
 FUNC_3(VAR_10, VAR_11);
 FUNC_3(VAR_10, VAR_11);
 FUNC_5(VAR_10, VAR_4);
 FUNC_6(VAR_10, 0);
 FUNC_5(VAR_10, 0);
 VAR_8->t2_maxpcount = 2;
 VAR_8->t2_maxdcount = 0;
 VAR_12 = FUNC_9(VAR_8);
 FUNC_8(VAR_8);
 return VAR_12;
}
