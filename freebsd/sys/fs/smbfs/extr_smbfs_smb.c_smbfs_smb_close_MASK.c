
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int u_int16_t ;
struct timespec {int dummy; } ;
struct smb_share {int dummy; } ;
struct smb_rq {int dummy; } ;
struct smb_cred {int dummy; } ;
struct mbchain {int dummy; } ;
typedef int fid ;
typedef int caddr_t ;
struct TYPE_3__ {int sv_tz; } ;
struct TYPE_4__ {TYPE_1__ vc_sopt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct smb_share*) ;
 TYPE_2__* FUNC_1 (struct smb_share*) ;
 int FUNC_2 (struct mbchain*,int ,int,int ) ;
 int FUNC_3 (struct mbchain*,scalar_t__) ;
 int FUNC_4 (int ,int ,struct smb_cred*,struct smb_rq**) ;
 int FUNC_5 (struct smb_rq*) ;
 int FUNC_6 (struct smb_rq*) ;
 int FUNC_7 (struct smb_rq*) ;
 int FUNC_8 (struct smb_rq*,struct mbchain**) ;
 int FUNC_9 (struct smb_rq*) ;
 int FUNC_10 (struct smb_rq*) ;
 int FUNC_11 (struct smb_rq*) ;
 int FUNC_12 (struct timespec*,int ,scalar_t__*) ;

int
FUNC_13(struct smb_share *VAR_2, u_int16_t VAR_3, struct timespec *VAR_4,
 struct smb_cred *VAR_5)
{
 struct smb_rq *VAR_6;
 struct mbchain *VAR_7;
 u_long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_4(FUNC_0(VAR_2), VAR_1, VAR_5, &VAR_6);
 if (VAR_9)
  return (VAR_9);
 FUNC_8(VAR_6, &VAR_7);
 FUNC_11(VAR_6);
 FUNC_2(VAR_7, (caddr_t)&VAR_3, sizeof(VAR_3), VAR_0);
 if (VAR_4) {
  FUNC_12(VAR_4, FUNC_1(VAR_2)->vc_sopt.sv_tz, &VAR_8);
 } else
  VAR_8 = 0;
 FUNC_3(VAR_7, VAR_8);
 FUNC_10(VAR_6);
 FUNC_6(VAR_6);
 FUNC_5(VAR_6);
 VAR_9 = FUNC_9(VAR_6);
 FUNC_7(VAR_6);
 return VAR_9;
}
