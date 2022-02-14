
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int16_t ;
struct timespec {int dummy; } ;
struct smbnode {int n_fid; TYPE_1__* n_mount; } ;
struct smb_share {int dummy; } ;
struct smb_rq {int dummy; } ;
struct smb_cred {int dummy; } ;
struct mbchain {int dummy; } ;
typedef int caddr_t ;
struct TYPE_5__ {int sv_tz; } ;
struct TYPE_6__ {TYPE_2__ vc_sopt; } ;
struct TYPE_4__ {struct smb_share* sm_share; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct smb_share*) ;
 TYPE_3__* FUNC_2 (struct smb_share*) ;
 int FUNC_3 (struct mbchain*,int ,int,int ) ;
 int FUNC_4 (struct mbchain*,scalar_t__) ;
 int FUNC_5 (struct mbchain*,int ) ;
 int FUNC_6 (int ,int ,struct smb_cred*,struct smb_rq**) ;
 int FUNC_7 (struct smb_rq*) ;
 int FUNC_8 (struct smb_rq*) ;
 int FUNC_9 (struct smb_rq*) ;
 int FUNC_10 (struct smb_rq*,struct mbchain**) ;
 int FUNC_11 (struct smb_rq*) ;
 int FUNC_12 (struct smb_rq*) ;
 int FUNC_13 (struct smb_rq*) ;
 int FUNC_14 (struct timespec*,int,scalar_t__*,scalar_t__*,int *) ;

int
FUNC_15(struct smbnode *VAR_2, struct timespec *VAR_3,
 struct timespec *VAR_4, struct smb_cred *VAR_5)
{
 struct smb_rq *VAR_6;
 struct smb_share *VAR_7 = VAR_2->n_mount->sm_share;
 struct mbchain *VAR_8;
 u_int16_t VAR_9, VAR_10;
 int VAR_11, VAR_12;

 VAR_11 = FUNC_6(FUNC_1(VAR_7), VAR_1, VAR_5,
     &VAR_6);
 if (VAR_11)
  return (VAR_11);
 VAR_12 = FUNC_2(VAR_7)->vc_sopt.sv_tz;
 FUNC_10(VAR_6, &VAR_8);
 FUNC_13(VAR_6);
 FUNC_3(VAR_8, (caddr_t)&VAR_2->n_fid, 2, VAR_0);
 FUNC_5(VAR_8, 0);

 if (VAR_4)
  FUNC_14(VAR_4, VAR_12, &VAR_9, &VAR_10, ((void*)0));
 else
  VAR_10 = VAR_9 = 0;
 FUNC_4(VAR_8, VAR_9);
 FUNC_4(VAR_8, VAR_10);
 if (VAR_3)
  FUNC_14(VAR_3, VAR_12, &VAR_9, &VAR_10, ((void*)0));
 else
  VAR_10 = VAR_9 = 0;
 FUNC_4(VAR_8, VAR_9);
 FUNC_4(VAR_8, VAR_10);
 FUNC_12(VAR_6);
 FUNC_8(VAR_6);
 FUNC_7(VAR_6);
 VAR_11 = FUNC_11(VAR_6);
 FUNC_0("%d\n", VAR_11);
 FUNC_9(VAR_6);
 return VAR_11;
}
