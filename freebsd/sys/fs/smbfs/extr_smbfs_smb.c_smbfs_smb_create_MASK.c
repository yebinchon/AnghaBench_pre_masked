
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int8_t ;
typedef int u_int16_t ;
struct timespec {int dummy; } ;
struct smbnode {TYPE_1__* n_mount; } ;
struct smb_share {int dummy; } ;
struct smb_rq {int dummy; } ;
struct smb_cred {int dummy; } ;
struct mdchain {int dummy; } ;
struct mbchain {int dummy; } ;
struct TYPE_6__ {int sv_tz; } ;
struct TYPE_7__ {TYPE_2__ vc_sopt; } ;
struct TYPE_5__ {struct smb_share* sm_share; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct smb_share*) ;
 TYPE_3__* FUNC_1 (struct smb_share*) ;
 int FUNC_2 (struct mbchain*,int ) ;
 int FUNC_3 (struct mbchain*,int ) ;
 int FUNC_4 (struct mbchain*,int ) ;
 int FUNC_5 (struct mdchain*,int *) ;
 int FUNC_6 (struct mdchain*,int*) ;
 int FUNC_7 (struct timespec*) ;
 int FUNC_8 (int ,int ,struct smb_cred*,struct smb_rq**) ;
 int FUNC_9 (struct smb_rq*) ;
 int FUNC_10 (struct smb_rq*) ;
 int FUNC_11 (struct smb_rq*) ;
 int FUNC_12 (struct smb_rq*,struct mdchain**) ;
 int FUNC_13 (struct smb_rq*,struct mbchain**) ;
 int FUNC_14 (struct smb_rq*) ;
 int FUNC_15 (struct smb_rq*) ;
 int FUNC_16 (struct smb_rq*) ;
 int FUNC_17 (struct timespec*,int ,int *) ;
 int FUNC_18 (struct mbchain*,TYPE_3__*,struct smbnode*,char const*,int) ;
 int FUNC_19 (struct smb_share*,int ,struct timespec*,struct smb_cred*) ;

int
FUNC_20(struct smbnode *VAR_4, const char *VAR_5, int VAR_6,
 struct smb_cred *VAR_7)
{
 struct smb_rq *VAR_8;
 struct smb_share *VAR_9 = VAR_4->n_mount->sm_share;
 struct mbchain *VAR_10;
 struct mdchain *VAR_11;
 struct timespec VAR_12;
 u_int8_t VAR_13;
 u_int16_t VAR_14;
 u_long VAR_15;
 int VAR_16;

 VAR_16 = FUNC_8(FUNC_0(VAR_9), VAR_1, VAR_7, &VAR_8);
 if (VAR_16)
  return (VAR_16);
 FUNC_13(VAR_8, &VAR_10);
 FUNC_16(VAR_8);
 FUNC_2(VAR_10, VAR_3);
 FUNC_7(&VAR_12);
 FUNC_17(&VAR_12, FUNC_1(VAR_9)->vc_sopt.sv_tz, &VAR_15);
 FUNC_3(VAR_10, VAR_15);
 FUNC_15(VAR_8);
 FUNC_10(VAR_8);
 FUNC_4(VAR_10, VAR_2);
 VAR_16 = FUNC_18(VAR_10, FUNC_1(VAR_9), VAR_4, VAR_5, VAR_6);
 if (!VAR_16) {
  FUNC_9(VAR_8);
  VAR_16 = FUNC_14(VAR_8);
  if (!VAR_16) {
   FUNC_12(VAR_8, &VAR_11);
   FUNC_6(VAR_11, &VAR_13);
   if (VAR_13 == 1)
    FUNC_5(VAR_11, &VAR_14);
   else
    VAR_16 = VAR_0;
  }
 }
 FUNC_11(VAR_8);
 if (VAR_16)
  return VAR_16;
 FUNC_19(VAR_9, VAR_14, &VAR_12, VAR_7);
 return VAR_16;
}
