
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int u_int16_t ;
struct timespec {int dummy; } ;
struct smbnode {TYPE_1__* n_mount; } ;
struct smb_share {int dummy; } ;
struct smb_rq {int dummy; } ;
struct smb_cred {int dummy; } ;
struct mbchain {int dummy; } ;
struct TYPE_7__ {int sv_tz; } ;
struct TYPE_8__ {TYPE_2__ vc_sopt; } ;
struct TYPE_6__ {struct smb_share* sm_share; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct smb_share*) ;
 TYPE_3__* FUNC_3 (struct smb_share*) ;
 int FUNC_4 (struct mbchain*,int *,int,int ) ;
 int FUNC_5 (struct mbchain*) ;
 int FUNC_6 (struct mbchain*,int ) ;
 int FUNC_7 (struct mbchain*,scalar_t__) ;
 int FUNC_8 (struct mbchain*,int ) ;
 int FUNC_9 (int ,int ,struct smb_cred*,struct smb_rq**) ;
 int FUNC_10 (struct smb_rq*) ;
 int FUNC_11 (struct smb_rq*) ;
 int FUNC_12 (struct smb_rq*) ;
 int FUNC_13 (struct smb_rq*,struct mbchain**) ;
 int FUNC_14 (struct smb_rq*) ;
 int FUNC_15 (struct smb_rq*) ;
 int FUNC_16 (struct smb_rq*) ;
 int FUNC_17 (struct timespec*,int,scalar_t__*) ;
 int FUNC_18 (struct mbchain*,TYPE_3__*,struct smbnode*,int *,int ) ;

int
FUNC_19(struct smbnode *VAR_3, u_int16_t VAR_4, struct timespec *VAR_5,
 struct smb_cred *VAR_6)
{
 struct smb_rq *VAR_7;
 struct smb_share *VAR_8 = VAR_3->n_mount->sm_share;
 struct mbchain *VAR_9;
 u_long VAR_10;
 int VAR_11, VAR_12;

 VAR_11 = FUNC_9(FUNC_2(VAR_8), VAR_1, VAR_6,
     &VAR_7);
 if (VAR_11)
  return (VAR_11);
 VAR_12 = FUNC_3(VAR_8)->vc_sopt.sv_tz;
 FUNC_13(VAR_7, &VAR_9);
 FUNC_16(VAR_7);
 FUNC_6(VAR_9, VAR_4);
 if (VAR_5) {
  FUNC_17(VAR_5, VAR_12, &VAR_10);
 } else
  VAR_10 = 0;
 FUNC_7(VAR_9, VAR_10);
 FUNC_4(VAR_9, ((void*)0), 5 * 2, VAR_0);
 FUNC_15(VAR_7);
 FUNC_11(VAR_7);
 FUNC_8(VAR_9, VAR_2);
 do {
  VAR_11 = FUNC_18(VAR_9, FUNC_3(VAR_8), VAR_3, ((void*)0), 0);
  if (VAR_11)
   break;
  FUNC_8(VAR_9, VAR_2);
  if (FUNC_1(FUNC_3(VAR_8))) {
   FUNC_5(VAR_9);
   FUNC_8(VAR_9, 0);
  }
  FUNC_8(VAR_9, 0);
  FUNC_10(VAR_7);
  VAR_11 = FUNC_14(VAR_7);
  if (VAR_11) {
   FUNC_0("smb_rq_simple(rqp) => error %d\n", VAR_11);
   break;
  }
 } while(0);
 FUNC_12(VAR_7);
 return VAR_11;
}
