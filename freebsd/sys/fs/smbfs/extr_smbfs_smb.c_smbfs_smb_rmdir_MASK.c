
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smbnode {TYPE_1__* n_mount; } ;
struct smb_share {int dummy; } ;
struct smb_rq {int dummy; } ;
struct smb_cred {int dummy; } ;
struct mbchain {int dummy; } ;
struct TYPE_2__ {struct smb_share* sm_share; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct smb_share*) ;
 int FUNC_1 (struct smb_share*) ;
 int FUNC_2 (struct mbchain*,int ) ;
 int FUNC_3 (int ,int ,struct smb_cred*,struct smb_rq**) ;
 int FUNC_4 (struct smb_rq*) ;
 int FUNC_5 (struct smb_rq*) ;
 int FUNC_6 (struct smb_rq*) ;
 int FUNC_7 (struct smb_rq*,struct mbchain**) ;
 int FUNC_8 (struct smb_rq*) ;
 int FUNC_9 (struct smb_rq*) ;
 int FUNC_10 (struct smb_rq*) ;
 int FUNC_11 (struct mbchain*,int ,struct smbnode*,int *,int ) ;

int
FUNC_12(struct smbnode *VAR_2, struct smb_cred *VAR_3)
{
 struct smb_rq *VAR_4;
 struct smb_share *VAR_5 = VAR_2->n_mount->sm_share;
 struct mbchain *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(FUNC_0(VAR_5), VAR_0, VAR_3,
     &VAR_4);
 if (VAR_7)
  return (VAR_7);
 FUNC_7(VAR_4, &VAR_6);
 FUNC_10(VAR_4);
 FUNC_9(VAR_4);
 FUNC_5(VAR_4);
 FUNC_2(VAR_6, VAR_1);
 VAR_7 = FUNC_11(VAR_6, FUNC_1(VAR_5), VAR_2, ((void*)0), 0);
 if (!VAR_7) {
  FUNC_4(VAR_4);
  VAR_7 = FUNC_8(VAR_4);
 }
 FUNC_6(VAR_4);
 return VAR_7;
}
