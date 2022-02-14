
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct smbnode {int n_fid; int n_flag; TYPE_1__* n_mount; } ;
struct smb_share {int dummy; } ;
struct smb_rq {int dummy; } ;
struct smb_cred {int dummy; } ;
struct mbchain {int dummy; } ;
typedef scalar_t__ int64_t ;
typedef int caddr_t ;
struct TYPE_2__ {struct smb_share* sm_share; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct smb_share*) ;
 int FUNC_1 (struct mbchain*,int ,int,int ) ;
 int FUNC_2 (struct mbchain*,int ) ;
 int FUNC_3 (struct mbchain*,int ) ;
 int FUNC_4 (struct mbchain*,int ) ;
 int FUNC_5 (int ,int ,struct smb_cred*,struct smb_rq**) ;
 int FUNC_6 (struct smb_rq*) ;
 int FUNC_7 (struct smb_rq*) ;
 int FUNC_8 (struct smb_rq*) ;
 int FUNC_9 (struct smb_rq*,struct mbchain**) ;
 int FUNC_10 (struct smb_rq*) ;
 int FUNC_11 (struct smb_rq*) ;
 int FUNC_12 (struct smb_rq*) ;
 int FUNC_13 (struct smbnode*,scalar_t__,struct smb_cred*) ;

int
FUNC_14(struct smbnode *VAR_4, int64_t VAR_5, struct smb_cred *VAR_6)
{
 struct smb_share *VAR_7 = VAR_4->n_mount->sm_share;
 struct smb_rq *VAR_8;
 struct mbchain *VAR_9;
 int VAR_10;

 if (!FUNC_13(VAR_4, VAR_5, VAR_6)) {
  VAR_4->n_flag |= VAR_1;
  return (0);
 }

 VAR_10 = FUNC_5(FUNC_0(VAR_7), VAR_2, VAR_6, &VAR_8);
 if (VAR_10)
  return (VAR_10);
 FUNC_9(VAR_8, &VAR_9);
 FUNC_12(VAR_8);
 FUNC_1(VAR_9, (caddr_t)&VAR_4->n_fid, 2, VAR_0);
 FUNC_2(VAR_9, 0);
 FUNC_3(VAR_9, (uint32_t)VAR_5);
 FUNC_2(VAR_9, 0);
 FUNC_11(VAR_8);
 FUNC_7(VAR_8);
 FUNC_4(VAR_9, VAR_3);
 FUNC_2(VAR_9, 0);
 FUNC_6(VAR_8);
 VAR_10 = FUNC_10(VAR_8);
 FUNC_8(VAR_8);
 return VAR_10;
}
